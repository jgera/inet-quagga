/* Auto-generated from memtypes.c by gawk. */
/* Do not edit! */

#ifndef _QUAGGA_MEMTYPES_H
#define _QUAGGA_MEMTYPES_H

enum
{
  MTYPE_TMP = 1,
  MTYPE_STRVEC,
  MTYPE_VECTOR,
  MTYPE_VECTOR_INDEX,
  MTYPE_LINK_LIST,
  MTYPE_LINK_NODE,
  MTYPE_THREAD,
  MTYPE_THREAD_MASTER,
  MTYPE_THREAD_STATS,
  MTYPE_THREAD_FUNCNAME,
  MTYPE_VTY,
  MTYPE_VTY_OUT_BUF,
  MTYPE_VTY_HIST,
  MTYPE_IF,
  MTYPE_CONNECTED,
  MTYPE_CONNECTED_LABEL,
  MTYPE_BUFFER,
  MTYPE_BUFFER_DATA,
  MTYPE_STREAM,
  MTYPE_STREAM_DATA,
  MTYPE_STREAM_FIFO,
  MTYPE_PREFIX,
  MTYPE_PREFIX_IPV4,
  MTYPE_PREFIX_IPV6,
  MTYPE_HASH,
  MTYPE_HASH_BACKET,
  MTYPE_HASH_INDEX,
  MTYPE_ROUTE_TABLE,
  MTYPE_ROUTE_NODE,
  MTYPE_DISTRIBUTE,
  MTYPE_DISTRIBUTE_IFNAME,
  MTYPE_ACCESS_LIST,
  MTYPE_ACCESS_LIST_STR,
  MTYPE_ACCESS_FILTER,
  MTYPE_PREFIX_LIST,
  MTYPE_PREFIX_LIST_ENTRY,
  MTYPE_PREFIX_LIST_STR,
  MTYPE_ROUTE_MAP,
  MTYPE_ROUTE_MAP_NAME,
  MTYPE_ROUTE_MAP_INDEX,
  MTYPE_ROUTE_MAP_RULE,
  MTYPE_ROUTE_MAP_RULE_STR,
  MTYPE_ROUTE_MAP_COMPILED,
  MTYPE_DESC,
  MTYPE_KEY,
  MTYPE_KEYCHAIN,
  MTYPE_IF_RMAP,
  MTYPE_IF_RMAP_NAME,
  MTYPE_SOCKUNION,
  MTYPE_PRIVS,
  MTYPE_ZLOG,
  MTYPE_ZCLIENT,
  MTYPE_WORK_QUEUE,
  MTYPE_WORK_QUEUE_ITEM,
  MTYPE_WORK_QUEUE_NAME,
  MTYPE_PQUEUE,
  MTYPE_PQUEUE_DATA,
  MTYPE_HOST,
  MTYPE_RTADV_PREFIX,
  MTYPE_VRF,
  MTYPE_VRF_NAME,
  MTYPE_NEXTHOP,
  MTYPE_RIB,
  MTYPE_RIB_QUEUE,
  MTYPE_STATIC_IPV4,
  MTYPE_STATIC_IPV6,
  MTYPE_BGP,
  MTYPE_BGP_PEER,
  MTYPE_BGP_PEER_HOST,
  MTYPE_PEER_GROUP,
  MTYPE_PEER_DESC,
  MTYPE_PEER_PASSWORD,
  MTYPE_ATTR,
  MTYPE_ATTR_EXTRA,
  MTYPE_AS_PATH,
  MTYPE_AS_SEG,
  MTYPE_AS_SEG_DATA,
  MTYPE_AS_STR,
  MTYPE_BGP_TABLE,
  MTYPE_BGP_NODE,
  MTYPE_BGP_ROUTE,
  MTYPE_BGP_ROUTE_EXTRA,
  MTYPE_BGP_STATIC,
  MTYPE_BGP_ADVERTISE_ATTR,
  MTYPE_BGP_ADVERTISE,
  MTYPE_BGP_SYNCHRONISE,
  MTYPE_BGP_ADJ_IN,
  MTYPE_BGP_ADJ_OUT,
  MTYPE_AS_LIST,
  MTYPE_AS_FILTER,
  MTYPE_AS_FILTER_STR,
  MTYPE_COMMUNITY,
  MTYPE_COMMUNITY_VAL,
  MTYPE_COMMUNITY_STR,
  MTYPE_ECOMMUNITY,
  MTYPE_ECOMMUNITY_VAL,
  MTYPE_ECOMMUNITY_STR,
  MTYPE_COMMUNITY_LIST,
  MTYPE_COMMUNITY_LIST_NAME,
  MTYPE_COMMUNITY_LIST_ENTRY,
  MTYPE_COMMUNITY_LIST_CONFIG,
  MTYPE_COMMUNITY_LIST_HANDLER,
  MTYPE_CLUSTER,
  MTYPE_CLUSTER_VAL,
  MTYPE_BGP_PROCESS_QUEUE,
  MTYPE_BGP_CLEAR_NODE_QUEUE,
  MTYPE_TRANSIT,
  MTYPE_TRANSIT_VAL,
  MTYPE_BGP_DISTANCE,
  MTYPE_BGP_NEXTHOP_CACHE,
  MTYPE_BGP_CONFED_LIST,
  MTYPE_PEER_UPDATE_SOURCE,
  MTYPE_BGP_DAMP_INFO,
  MTYPE_BGP_DAMP_ARRAY,
  MTYPE_BGP_REGEXP,
  MTYPE_BGP_AGGREGATE,
  MTYPE_RIP,
  MTYPE_RIP_INFO,
  MTYPE_RIP_INTERFACE,
  MTYPE_RIP_PEER,
  MTYPE_RIP_OFFSET_LIST,
  MTYPE_RIP_DISTANCE,
  MTYPE_RIPNG,
  MTYPE_RIPNG_ROUTE,
  MTYPE_RIPNG_AGGREGATE,
  MTYPE_RIPNG_PEER,
  MTYPE_RIPNG_OFFSET_LIST,
  MTYPE_RIPNG_RTE_DATA,
  MTYPE_OSPF_TOP,
  MTYPE_OSPF_AREA,
  MTYPE_OSPF_AREA_RANGE,
  MTYPE_OSPF_NETWORK,
  MTYPE_OSPF_NEIGHBOR_STATIC,
  MTYPE_OSPF_IF,
  MTYPE_OSPF_NEIGHBOR,
  MTYPE_OSPF_ROUTE,
  MTYPE_OSPF_TMP,
  MTYPE_OSPF_LSA,
  MTYPE_OSPF_LSA_DATA,
  MTYPE_OSPF_LSDB,
  MTYPE_OSPF_PACKET,
  MTYPE_OSPF_FIFO,
  MTYPE_OSPF_VERTEX,
  MTYPE_OSPF_VERTEX_PARENT,
  MTYPE_OSPF_NEXTHOP,
  MTYPE_OSPF_PATH,
  MTYPE_OSPF_VL_DATA,
  MTYPE_OSPF_CRYPT_KEY,
  MTYPE_OSPF_EXTERNAL_INFO,
  MTYPE_OSPF_DISTANCE,
  MTYPE_OSPF_IF_INFO,
  MTYPE_OSPF_IF_PARAMS,
  MTYPE_OSPF_MESSAGE,
  MTYPE_OSPF6_TOP,
  MTYPE_OSPF6_AREA,
  MTYPE_OSPF6_IF,
  MTYPE_OSPF6_NEIGHBOR,
  MTYPE_OSPF6_ROUTE,
  MTYPE_OSPF6_PREFIX,
  MTYPE_OSPF6_MESSAGE,
  MTYPE_OSPF6_LSA,
  MTYPE_OSPF6_LSA_SUMMARY,
  MTYPE_OSPF6_LSDB,
  MTYPE_OSPF6_VERTEX,
  MTYPE_OSPF6_SPFTREE,
  MTYPE_OSPF6_NEXTHOP,
  MTYPE_OSPF6_EXTERNAL_INFO,
  MTYPE_OSPF6_OTHER,
  MTYPE_ISIS,
  MTYPE_ISIS_TMP,
  MTYPE_ISIS_CIRCUIT,
  MTYPE_ISIS_LSP,
  MTYPE_ISIS_ADJACENCY,
  MTYPE_ISIS_AREA,
  MTYPE_ISIS_AREA_ADDR,
  MTYPE_ISIS_TLV,
  MTYPE_ISIS_DYNHN,
  MTYPE_ISIS_SPFTREE,
  MTYPE_ISIS_VERTEX,
  MTYPE_ISIS_ROUTE_INFO,
  MTYPE_ISIS_NEXTHOP,
  MTYPE_ISIS_NEXTHOP6,
  MTYPE_VTYSH_CONFIG,
  MTYPE_VTYSH_CONFIG_LINE,
  MTYPE_MAX,
};

extern struct memory_list memory_list_lib[];
extern struct memory_list memory_list_zebra_lib[];
extern struct memory_list memory_list_bgp[];
extern struct memory_list memory_list_rip[];
extern struct memory_list memory_list_ripng[];
extern struct memory_list memory_list_ospf[];
extern struct memory_list memory_list_ospf6[];
extern struct memory_list memory_list_isis[];
extern struct memory_list memory_list_vtysh_lib[];

#endif /* _QUAGGA_MEMTYPES_H */
