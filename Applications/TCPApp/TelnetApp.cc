//
// Copyright 2004 Andras Varga
//
// This library is free software, you can redistribute it and/or modify
// it under  the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation;
// either version 2 of the License, or any later version.
// The library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
// See the GNU Lesser General Public License for more details.
//


#include "TelnetApp.h"


#define MSGKIND_CONNECT  0
#define MSGKIND_SEND     1
#define MSGKIND_CLOSE    2


void TelnetApp::initialize()
{
    TCPGenericCliAppBase::initialize();

    timeoutMsg = new cMessage("timer");

    lineLength = numLines = 0;
    WATCH(lineLength);
    WATCH(numLines);

    timeoutMsg->setKind(MSGKIND_CONNECT);
    scheduleAt(10, timeoutMsg);
}

void TelnetApp::handleTimer(cMessage *msg)
{
    switch (msg->kind())
    {
        case MSGKIND_CONNECT:
            connect();
            break;

        case MSGKIND_SEND:
           if (lineLength==10)
           {
               sendPacket(1,1);  // user types a character and expects it to be echoed
               scheduleAt(simTime()+0.1, timeoutMsg);
               lineLength++;
           }
           else
           {
               sendPacket(1,50); // user hits Enter, and waits for type command's output
               lineLength = 0;

               // Note: no scheduleAt(), because user only starts typing next command
               // when output from previous one has arrived (see socketDataArrived())
           }
           break;

        case MSGKIND_CLOSE:
           close();
           break;
    }
}

void TelnetApp::socketEstablished(int connId, void *ptr)
{
    TCPGenericCliAppBase::socketEstablished(connId, ptr);

    // schedule first sending
    lineLength = numLines = 0;
    timeoutMsg->setKind(MSGKIND_SEND);
    scheduleAt(simTime()+1, timeoutMsg);
}

void TelnetApp::socketDataArrived(int connId, void *ptr, cMessage *msg, bool urgent)
{
    int len = msg->length()/8;
    TCPGenericCliAppBase::socketDataArrived(connId, ptr, msg, urgent);

    if (len==1)
    {
        // this is an echo, ignore
    }
    else
    {
        // output from last typed command arrived.
        // If user has finished working, she closes the connection, otherwise
        // starts typing again after a delay
        numLines++;

        if (numLines>100)
        {
            close();
        }
        else
        {
            timeoutMsg->setKind(MSGKIND_SEND);
            scheduleAt(simTime()+3, timeoutMsg);
        }
    }
}

void TelnetApp::socketClosed(int connId, void *ptr)
{
    TCPGenericCliAppBase::socketClosed(connId, ptr);

    // start another session after a delay
    timeoutMsg->setKind(MSGKIND_CONNECT);
    scheduleAt(simTime()+600, timeoutMsg);
}

void TelnetApp::socketFailure(int connId, void *ptr, int code)
{
    TCPGenericCliAppBase::socketFailure(connId, ptr, code);

    // reconnect after a delay
    timeoutMsg->setKind(MSGKIND_CONNECT);
    scheduleAt(simTime()+30, timeoutMsg);
}

