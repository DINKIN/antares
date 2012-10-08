/* 
 * AUTOGENERATED!!! 
 * DO NOT SUBMIT PATCHES AGAINST THIS FILE 
 */
#ifndef __LWIP_OPTS_H 
#define __LWIP_OPTS_H 

/* Platform specific locking*/
#ifdef CONFIG_LWIP_SYS_LIGHTWEIGHT_PROT
#define SYS_LIGHTWEIGHT_PROT 1 
#else
#define SYS_LIGHTWEIGHT_PROT 0 
#endif

#ifdef CONFIG_LWIP_NO_SYS
#define NO_SYS 1 
#else
#define NO_SYS 0 
#endif

#ifdef CONFIG_LWIP_NO_SYS_NO_TIMERS
#define NO_SYS_NO_TIMERS 1 
#else
#define NO_SYS_NO_TIMERS 0 
#endif

#ifdef CONFIG_LWIP_MEMCPY(dst,src,len)
#define MEMCPY(dst,src,len) CONFIG_LWIP_MEMCPY(dst,src,len)
#endif

#ifdef CONFIG_LWIP_SMEMCPY(dst,src,len)
#define SMEMCPY(dst,src,len) CONFIG_LWIP_SMEMCPY(dst,src,len)
#endif


/* Memory options*/
#ifdef CONFIG_LWIP_MEM_LIBC_MALLOC
#define MEM_LIBC_MALLOC 1 
#else
#define MEM_LIBC_MALLOC 0 
#endif

#ifdef CONFIG_LWIP_MEMP_MEM_MALLOC
#define MEMP_MEM_MALLOC 1 
#else
#define MEMP_MEM_MALLOC 0 
#endif

#ifdef CONFIG_LWIP_MEM_ALIGNMENT
#define MEM_ALIGNMENT CONFIG_LWIP_MEM_ALIGNMENT
#endif

#ifdef CONFIG_LWIP_MEM_SIZE
#define MEM_SIZE CONFIG_LWIP_MEM_SIZE
#endif

#ifdef CONFIG_LWIP_MEMP_SEPARATE_POOLS
#define MEMP_SEPARATE_POOLS 1 
#else
#define MEMP_SEPARATE_POOLS 0 
#endif

#ifdef CONFIG_LWIP_MEMP_OVERFLOW_CHECK
#define MEMP_OVERFLOW_CHECK CONFIG_LWIP_MEMP_OVERFLOW_CHECK
#endif

#ifdef CONFIG_LWIP_MEMP_SANITY_CHECK
#define MEMP_SANITY_CHECK 1 
#else
#define MEMP_SANITY_CHECK 0 
#endif

#ifdef CONFIG_LWIP_MEM_USE_POOLS
#define MEM_USE_POOLS 1 
#else
#define MEM_USE_POOLS 0 
#endif

#ifdef CONFIG_LWIP_MEM_USE_POOLS_TRY_BIGGER_POOL
#define MEM_USE_POOLS_TRY_BIGGER_POOL 1 
#else
#define MEM_USE_POOLS_TRY_BIGGER_POOL 0 
#endif

#ifdef CONFIG_LWIP_MEMP_USE_CUSTOM_POOLS
#define MEMP_USE_CUSTOM_POOLS 1 
#else
#define MEMP_USE_CUSTOM_POOLS 0 
#endif

#ifdef CONFIG_LWIP_ALLOW_MEM_FREE_FROM_OTHER_CONTEXT
#define LWIP_ALLOW_MEM_FREE_FROM_OTHER_CONTEXT 1 
#else
#define LWIP_ALLOW_MEM_FREE_FROM_OTHER_CONTEXT 0 
#endif


/* Internal Memory Pool Sizes*/
#ifdef CONFIG_LWIP_MEMP_NUM_PBUF
#define MEMP_NUM_PBUF CONFIG_LWIP_MEMP_NUM_PBUF
#endif

#ifdef CONFIG_LWIP_MEMP_NUM_RAW_PCB
#define MEMP_NUM_RAW_PCB CONFIG_LWIP_MEMP_NUM_RAW_PCB
#endif

#ifdef CONFIG_LWIP_MEMP_NUM_UDP_PCB
#define MEMP_NUM_UDP_PCB CONFIG_LWIP_MEMP_NUM_UDP_PCB
#endif

#ifdef CONFIG_LWIP_MEMP_NUM_TCP_PCB
#define MEMP_NUM_TCP_PCB CONFIG_LWIP_MEMP_NUM_TCP_PCB
#endif

#ifdef CONFIG_LWIP_MEMP_NUM_TCP_PCB_LISTEN
#define MEMP_NUM_TCP_PCB_LISTEN CONFIG_LWIP_MEMP_NUM_TCP_PCB_LISTEN
#endif

#ifdef CONFIG_LWIP_MEMP_NUM_TCP_SEG
#define MEMP_NUM_TCP_SEG CONFIG_LWIP_MEMP_NUM_TCP_SEG
#endif

#ifdef CONFIG_LWIP_MEMP_NUM_REASSDATA
#define MEMP_NUM_REASSDATA CONFIG_LWIP_MEMP_NUM_REASSDATA
#endif

#ifdef CONFIG_LWIP_MEMP_NUM_FRAG_PBUF
#define MEMP_NUM_FRAG_PBUF CONFIG_LWIP_MEMP_NUM_FRAG_PBUF
#endif

#ifdef CONFIG_LWIP_MEMP_NUM_ARP_QUEUE
#define MEMP_NUM_ARP_QUEUE CONFIG_LWIP_MEMP_NUM_ARP_QUEUE
#endif

#ifdef CONFIG_LWIP_MEMP_NUM_IGMP_GROUP
#define MEMP_NUM_IGMP_GROUP CONFIG_LWIP_MEMP_NUM_IGMP_GROUP
#endif

#ifdef CONFIG_LWIP_MEMP_NUM_SYS_TIMEOUT
#define MEMP_NUM_SYS_TIMEOUT CONFIG_LWIP_MEMP_NUM_SYS_TIMEOUT
#endif

#ifdef CONFIG_LWIP_MEMP_NUM_NETBUF
#define MEMP_NUM_NETBUF CONFIG_LWIP_MEMP_NUM_NETBUF
#endif

#ifdef CONFIG_LWIP_MEMP_NUM_NETCONN
#define MEMP_NUM_NETCONN CONFIG_LWIP_MEMP_NUM_NETCONN
#endif

#ifdef CONFIG_LWIP_MEMP_NUM_TCPIP_MSG_API
#define MEMP_NUM_TCPIP_MSG_API CONFIG_LWIP_MEMP_NUM_TCPIP_MSG_API
#endif

#ifdef CONFIG_LWIP_MEMP_NUM_TCPIP_MSG_INPKT
#define MEMP_NUM_TCPIP_MSG_INPKT CONFIG_LWIP_MEMP_NUM_TCPIP_MSG_INPKT
#endif

#ifdef CONFIG_LWIP_MEMP_NUM_SNMP_NODE
#define MEMP_NUM_SNMP_NODE CONFIG_LWIP_MEMP_NUM_SNMP_NODE
#endif

#ifdef CONFIG_LWIP_MEMP_NUM_SNMP_ROOTNODE
#define MEMP_NUM_SNMP_ROOTNODE CONFIG_LWIP_MEMP_NUM_SNMP_ROOTNODE
#endif

#ifdef CONFIG_LWIP_MEMP_NUM_SNMP_VARBIND
#define MEMP_NUM_SNMP_VARBIND CONFIG_LWIP_MEMP_NUM_SNMP_VARBIND
#endif

#ifdef CONFIG_LWIP_MEMP_NUM_SNMP_VALUE
#define MEMP_NUM_SNMP_VALUE CONFIG_LWIP_MEMP_NUM_SNMP_VALUE
#endif

#ifdef CONFIG_LWIP_MEMP_NUM_NETDB
#define MEMP_NUM_NETDB CONFIG_LWIP_MEMP_NUM_NETDB
#endif

#ifdef CONFIG_LWIP_MEMP_NUM_LOCALHOSTLIST
#define MEMP_NUM_LOCALHOSTLIST CONFIG_LWIP_MEMP_NUM_LOCALHOSTLIST
#endif

#ifdef CONFIG_LWIP_MEMP_NUM_PPPOE_INTERFACES
#define MEMP_NUM_PPPOE_INTERFACES CONFIG_LWIP_MEMP_NUM_PPPOE_INTERFACES
#endif

#ifdef CONFIG_LWIP_PBUF_POOL_SIZE
#define PBUF_POOL_SIZE CONFIG_LWIP_PBUF_POOL_SIZE
#endif


/* ARP options*/
#ifdef CONFIG_LWIP_ARP
#define LWIP_ARP 1 
#else
#define LWIP_ARP 0 
#endif

#ifdef CONFIG_LWIP_ARP_TABLE_SIZE
#define ARP_TABLE_SIZE CONFIG_LWIP_ARP_TABLE_SIZE
#endif

#ifdef CONFIG_LWIP_ARP_QUEUEING
#define ARP_QUEUEING 1 
#else
#define ARP_QUEUEING 0 
#endif

#ifdef CONFIG_LWIP_ETHARP_TRUST_IP_MAC
#define ETHARP_TRUST_IP_MAC 1 
#else
#define ETHARP_TRUST_IP_MAC 0 
#endif

#ifdef CONFIG_LWIP_ETHARP_SUPPORT_VLAN
#define ETHARP_SUPPORT_VLAN 1 
#else
#define ETHARP_SUPPORT_VLAN 0 
#endif

#ifdef CONFIG_LWIP_ETHERNET
#define LWIP_ETHERNET CONFIG_LWIP_ETHERNET
#endif

#ifdef CONFIG_LWIP_ETH_PAD_SIZE
#define ETH_PAD_SIZE CONFIG_LWIP_ETH_PAD_SIZE
#endif

#ifdef CONFIG_LWIP_ETHARP_SUPPORT_STATIC_ENTRIES
#define ETHARP_SUPPORT_STATIC_ENTRIES 1 
#else
#define ETHARP_SUPPORT_STATIC_ENTRIES 0 
#endif


/* IP options*/
#ifdef CONFIG_LWIP_IP_FORWARD
#define IP_FORWARD 1 
#else
#define IP_FORWARD 0 
#endif

#ifdef CONFIG_LWIP_IP_OPTIONS_ALLOWED
#define IP_OPTIONS_ALLOWED 1 
#else
#define IP_OPTIONS_ALLOWED 0 
#endif

#ifdef CONFIG_LWIP_IP_REASSEMBLY
#define IP_REASSEMBLY 1 
#else
#define IP_REASSEMBLY 0 
#endif

#ifdef CONFIG_LWIP_IP_FRAG
#define IP_FRAG 1 
#else
#define IP_FRAG 0 
#endif

#ifdef CONFIG_LWIP_IP_REASS_MAXAGE
#define IP_REASS_MAXAGE CONFIG_LWIP_IP_REASS_MAXAGE
#endif

#ifdef CONFIG_LWIP_IP_REASS_MAX_PBUFS
#define IP_REASS_MAX_PBUFS CONFIG_LWIP_IP_REASS_MAX_PBUFS
#endif

#ifdef CONFIG_LWIP_IP_FRAG_USES_STATIC_BUF
#define IP_FRAG_USES_STATIC_BUF 1 
#else
#define IP_FRAG_USES_STATIC_BUF 0 
#endif

#ifdef CONFIG_LWIP_IP_FRAG_MAX_MTU
#define IP_FRAG_MAX_MTU CONFIG_LWIP_IP_FRAG_MAX_MTU
#endif

#ifdef CONFIG_LWIP_IP_DEFAULT_TTL
#define IP_DEFAULT_TTL CONFIG_LWIP_IP_DEFAULT_TTL
#endif

#ifdef CONFIG_LWIP_IP_SOF_BROADCAST
#define IP_SOF_BROADCAST 1 
#else
#define IP_SOF_BROADCAST 0 
#endif

#ifdef CONFIG_LWIP_IP_SOF_BROADCAST_RECV
#define IP_SOF_BROADCAST_RECV 1 
#else
#define IP_SOF_BROADCAST_RECV 0 
#endif


/* ICMP options*/
#ifdef CONFIG_LWIP_ICMP
#define LWIP_ICMP 1 
#else
#define LWIP_ICMP 0 
#endif

#ifdef CONFIG_LWIP_ICMP_TTL
#define ICMP_TTL CONFIG_LWIP_ICMP_TTL
#endif

#ifdef CONFIG_LWIP_BROADCAST_PING
#define LWIP_BROADCAST_PING 1 
#else
#define LWIP_BROADCAST_PING 0 
#endif

#ifdef CONFIG_LWIP_MULTICAST_PING
#define LWIP_MULTICAST_PING 1 
#else
#define LWIP_MULTICAST_PING 0 
#endif


/* RAW options*/
#ifdef CONFIG_LWIP_RAW
#define LWIP_RAW 1 
#else
#define LWIP_RAW 0 
#endif

#ifdef CONFIG_LWIP_RAW_TTL
#define RAW_TTL CONFIG_LWIP_RAW_TTL
#endif


/* DHCP options*/
#ifdef CONFIG_LWIP_DHCP
#define LWIP_DHCP 1 
#else
#define LWIP_DHCP 0 
#endif

#ifdef CONFIG_LWIP_DHCP_DOES_ARP_CHECK
#define DHCP_DOES_ARP_CHECK CONFIG_LWIP_DHCP_DOES_ARP_CHECK
#endif


/* AUTOIP options*/
#ifdef CONFIG_LWIP_AUTOIP
#define LWIP_AUTOIP 1 
#else
#define LWIP_AUTOIP 0 
#endif

#ifdef CONFIG_LWIP_DHCP_AUTOIP_COOP
#define LWIP_DHCP_AUTOIP_COOP 1 
#else
#define LWIP_DHCP_AUTOIP_COOP 0 
#endif

#ifdef CONFIG_LWIP_DHCP_AUTOIP_COOP_TRIES
#define LWIP_DHCP_AUTOIP_COOP_TRIES CONFIG_LWIP_DHCP_AUTOIP_COOP_TRIES
#endif


/* SNMP options*/
#ifdef CONFIG_LWIP_SNMP
#define LWIP_SNMP 1 
#else
#define LWIP_SNMP 0 
#endif

#ifdef CONFIG_LWIP_SNMP_CONCURRENT_REQUESTS
#define SNMP_CONCURRENT_REQUESTS 1 
#else
#define SNMP_CONCURRENT_REQUESTS 0 
#endif

#ifdef CONFIG_LWIP_SNMP_TRAP_DESTINATIONS
#define SNMP_TRAP_DESTINATIONS 1 
#else
#define SNMP_TRAP_DESTINATIONS 0 
#endif

#ifdef CONFIG_LWIP_SNMP_PRIVATE_MIB
#define SNMP_PRIVATE_MIB 1 
#else
#define SNMP_PRIVATE_MIB 0 
#endif

#ifdef CONFIG_LWIP_SNMP_SAFE_REQUESTS
#define SNMP_SAFE_REQUESTS 1 
#else
#define SNMP_SAFE_REQUESTS 0 
#endif

#ifdef CONFIG_LWIP_SNMP_MAX_OCTET_STRING_LEN
#define SNMP_MAX_OCTET_STRING_LEN CONFIG_LWIP_SNMP_MAX_OCTET_STRING_LEN
#endif

#ifdef CONFIG_LWIP_SNMP_MAX_TREE_DEPTH
#define SNMP_MAX_TREE_DEPTH CONFIG_LWIP_SNMP_MAX_TREE_DEPTH
#endif

#ifdef CONFIG_LWIP_SNMP_MAX_VALUE_SIZE
#define SNMP_MAX_VALUE_SIZE CONFIG_LWIP_SNMP_MAX_VALUE_SIZE
#endif


/* IGMP options*/
#ifdef CONFIG_LWIP_IGMP
#define LWIP_IGMP 1 
#else
#define LWIP_IGMP 0 
#endif


/* DNS options*/
#ifdef CONFIG_LWIP_DNS
#define LWIP_DNS 1 
#else
#define LWIP_DNS 0 
#endif

#ifdef CONFIG_LWIP_DNS_TABLE_SIZE
#define DNS_TABLE_SIZE CONFIG_LWIP_DNS_TABLE_SIZE
#endif

#ifdef CONFIG_LWIP_DNS_MAX_NAME_LENGTH
#define DNS_MAX_NAME_LENGTH CONFIG_LWIP_DNS_MAX_NAME_LENGTH
#endif

#ifdef CONFIG_LWIP_DNS_MAX_SERVERS
#define DNS_MAX_SERVERS CONFIG_LWIP_DNS_MAX_SERVERS
#endif

#ifdef CONFIG_LWIP_DNS_DOES_NAME_CHECK
#define DNS_DOES_NAME_CHECK 1 
#else
#define DNS_DOES_NAME_CHECK 0 
#endif

#ifdef CONFIG_LWIP_DNS_MSG_SIZE
#define DNS_MSG_SIZE CONFIG_LWIP_DNS_MSG_SIZE
#endif

#ifdef CONFIG_LWIP_DNS_LOCAL_HOSTLIST
#define DNS_LOCAL_HOSTLIST 1 
#else
#define DNS_LOCAL_HOSTLIST 0 
#endif

#ifdef CONFIG_LWIP_DNS_LOCAL_HOSTLIST_IS_DYNAMIC
#define DNS_LOCAL_HOSTLIST_IS_DYNAMIC 1 
#else
#define DNS_LOCAL_HOSTLIST_IS_DYNAMIC 0 
#endif


/* UDP options*/
#ifdef CONFIG_LWIP_UDP
#define LWIP_UDP 1 
#else
#define LWIP_UDP 0 
#endif

#ifdef CONFIG_LWIP_UDPLITE
#define LWIP_UDPLITE 1 
#else
#define LWIP_UDPLITE 0 
#endif

#ifdef CONFIG_LWIP_UDP_TTL
#define UDP_TTL CONFIG_LWIP_UDP_TTL
#endif

#ifdef CONFIG_LWIP_NETBUF_RECVINFO
#define LWIP_NETBUF_RECVINFO 1 
#else
#define LWIP_NETBUF_RECVINFO 0 
#endif


/* TCP options*/
#ifdef CONFIG_LWIP_TCP
#define LWIP_TCP 1 
#else
#define LWIP_TCP 0 
#endif

#ifdef CONFIG_LWIP_TCP_TTL
#define TCP_TTL CONFIG_LWIP_TCP_TTL
#endif

#ifdef CONFIG_LWIP_TCP_WND
#define TCP_WND CONFIG_LWIP_TCP_WND
#endif

#ifdef CONFIG_LWIP_TCP_MAXRTX
#define TCP_MAXRTX CONFIG_LWIP_TCP_MAXRTX
#endif

#ifdef CONFIG_LWIP_TCP_SYNMAXRTX
#define TCP_SYNMAXRTX CONFIG_LWIP_TCP_SYNMAXRTX
#endif

#ifdef CONFIG_LWIP_TCP_QUEUE_OOSEQ
#define TCP_QUEUE_OOSEQ CONFIG_LWIP_TCP_QUEUE_OOSEQ
#endif

#ifdef CONFIG_LWIP_TCP_MSS
#define TCP_MSS CONFIG_LWIP_TCP_MSS
#endif

#ifdef CONFIG_LWIP_TCP_CALCULATE_EFF_SEND_MSS
#define TCP_CALCULATE_EFF_SEND_MSS 1 
#else
#define TCP_CALCULATE_EFF_SEND_MSS 0 
#endif

#ifdef CONFIG_LWIP_TCP_SND_BUF
#define TCP_SND_BUF CONFIG_LWIP_TCP_SND_BUF
#endif

#ifdef CONFIG_LWIP_TCP_SND_QUEUELEN
#define TCP_SND_QUEUELEN CONFIG_LWIP_TCP_SND_QUEUELEN
#endif

#ifdef CONFIG_LWIP_TCP_SNDLOWAT
#define TCP_SNDLOWAT CONFIG_LWIP_TCP_SNDLOWAT
#endif

#ifdef CONFIG_LWIP_TCP_SNDQUEUELOWAT
#define TCP_SNDQUEUELOWAT CONFIG_LWIP_TCP_SNDQUEUELOWAT
#endif

#ifdef CONFIG_LWIP_TCP_LISTEN_BACKLOG
#define TCP_LISTEN_BACKLOG 1 
#else
#define TCP_LISTEN_BACKLOG 0 
#endif

#ifdef CONFIG_LWIP_TCP_DEFAULT_LISTEN_BACKLOG
#define TCP_DEFAULT_LISTEN_BACKLOG CONFIG_LWIP_TCP_DEFAULT_LISTEN_BACKLOG
#endif

#ifdef CONFIG_LWIP_TCP_OVERSIZE
#define TCP_OVERSIZE CONFIG_LWIP_TCP_OVERSIZE
#endif

#ifdef CONFIG_LWIP_TCP_TIMESTAMPS
#define LWIP_TCP_TIMESTAMPS 1 
#else
#define LWIP_TCP_TIMESTAMPS 0 
#endif

#ifdef CONFIG_LWIP_TCP_WND_UPDATE_THRESHOLD
#define TCP_WND_UPDATE_THRESHOLD CONFIG_LWIP_TCP_WND_UPDATE_THRESHOLD
#endif

#ifdef CONFIG_LWIP_EVENT_API
#define LWIP_EVENT_API 1 
#else
#define LWIP_EVENT_API 0 
#endif

#ifdef CONFIG_LWIP_CALLBACK_API
#define LWIP_CALLBACK_API 1 
#else
#define LWIP_CALLBACK_API 0 
#endif

#ifdef CONFIG_LWIP_EVENT_API
#define LWIP_EVENT_API 1 
#else
#define LWIP_EVENT_API 0 
#endif

#ifdef CONFIG_LWIP_CALLBACK_API
#define LWIP_CALLBACK_API 1 
#else
#define LWIP_CALLBACK_API 0 
#endif


/* Pbuf options*/
#ifdef CONFIG_LWIP_PBUF_LINK_HLEN
#define PBUF_LINK_HLEN CONFIG_LWIP_PBUF_LINK_HLEN
#endif

#ifdef CONFIG_LWIP_PBUF_POOL_BUFSIZE
#define PBUF_POOL_BUFSIZE CONFIG_LWIP_PBUF_POOL_BUFSIZE
#endif


/* Network Interfaces options*/
#ifdef CONFIG_LWIP_NETIF_HOSTNAME
#define LWIP_NETIF_HOSTNAME 1 
#else
#define LWIP_NETIF_HOSTNAME 0 
#endif

#ifdef CONFIG_LWIP_NETIF_API
#define LWIP_NETIF_API 1 
#else
#define LWIP_NETIF_API 0 
#endif

#ifdef CONFIG_LWIP_NETIF_STATUS_CALLBACK
#define LWIP_NETIF_STATUS_CALLBACK 1 
#else
#define LWIP_NETIF_STATUS_CALLBACK 0 
#endif

#ifdef CONFIG_LWIP_NETIF_LINK_CALLBACK
#define LWIP_NETIF_LINK_CALLBACK 1 
#else
#define LWIP_NETIF_LINK_CALLBACK 0 
#endif

#ifdef CONFIG_LWIP_NETIF_HWADDRHINT
#define LWIP_NETIF_HWADDRHINT 1 
#else
#define LWIP_NETIF_HWADDRHINT 0 
#endif

#ifdef CONFIG_LWIP_NETIF_LOOPBACK
#define LWIP_NETIF_LOOPBACK 1 
#else
#define LWIP_NETIF_LOOPBACK 0 
#endif

#ifdef CONFIG_LWIP_LOOPBACK_MAX_PBUFS
#define LWIP_LOOPBACK_MAX_PBUFS 1 
#else
#define LWIP_LOOPBACK_MAX_PBUFS 0 
#endif

#ifdef CONFIG_LWIP_NETIF_LOOPBACK_MULTITHREADING
#define LWIP_NETIF_LOOPBACK_MULTITHREADING CONFIG_LWIP_NETIF_LOOPBACK_MULTITHREADING
#endif

#ifdef CONFIG_LWIP_NETIF_TX_SINGLE_PBUF
#define LWIP_NETIF_TX_SINGLE_PBUF 1 
#else
#define LWIP_NETIF_TX_SINGLE_PBUF 0 
#endif


/* LOOPIF options*/
#ifdef CONFIG_LWIP_HAVE_LOOPIF
#define LWIP_HAVE_LOOPIF 1 
#else
#define LWIP_HAVE_LOOPIF 0 
#endif


/* SLIPIF options*/
#ifdef CONFIG_LWIP_HAVE_SLIPIF
#define LWIP_HAVE_SLIPIF 1 
#else
#define LWIP_HAVE_SLIPIF 0 
#endif


/* Thread options*/
#ifdef CONFIG_LWIP_TCPIP_THREAD_NAME
#define TCPIP_THREAD_NAME CONFIG_LWIP_TCPIP_THREAD_NAME
#endif

#ifdef CONFIG_LWIP_TCPIP_THREAD_STACKSIZE
#define TCPIP_THREAD_STACKSIZE 1 
#else
#define TCPIP_THREAD_STACKSIZE 0 
#endif

#ifdef CONFIG_LWIP_TCPIP_THREAD_PRIO
#define TCPIP_THREAD_PRIO 1 
#else
#define TCPIP_THREAD_PRIO 0 
#endif

#ifdef CONFIG_LWIP_TCPIP_MBOX_SIZE
#define TCPIP_MBOX_SIZE 1 
#else
#define TCPIP_MBOX_SIZE 0 
#endif

#ifdef CONFIG_LWIP_SLIPIF_THREAD_NAME
#define SLIPIF_THREAD_NAME CONFIG_LWIP_SLIPIF_THREAD_NAME
#endif

#ifdef CONFIG_LWIP_SLIPIF_THREAD_STACKSIZE
#define SLIPIF_THREAD_STACKSIZE 1 
#else
#define SLIPIF_THREAD_STACKSIZE 0 
#endif

#ifdef CONFIG_LWIP_SLIPIF_THREAD_PRIO
#define SLIPIF_THREAD_PRIO 1 
#else
#define SLIPIF_THREAD_PRIO 0 
#endif

#ifdef CONFIG_LWIP_PPP_THREAD_NAME
#define PPP_THREAD_NAME CONFIG_LWIP_PPP_THREAD_NAME
#endif

#ifdef CONFIG_LWIP_PPP_THREAD_STACKSIZE
#define PPP_THREAD_STACKSIZE 1 
#else
#define PPP_THREAD_STACKSIZE 0 
#endif

#ifdef CONFIG_LWIP_PPP_THREAD_PRIO
#define PPP_THREAD_PRIO 1 
#else
#define PPP_THREAD_PRIO 0 
#endif

#ifdef CONFIG_LWIP_DEFAULT_THREAD_NAME
#define DEFAULT_THREAD_NAME CONFIG_LWIP_DEFAULT_THREAD_NAME
#endif

#ifdef CONFIG_LWIP_DEFAULT_THREAD_STACKSIZE
#define DEFAULT_THREAD_STACKSIZE 1 
#else
#define DEFAULT_THREAD_STACKSIZE 0 
#endif

#ifdef CONFIG_LWIP_DEFAULT_THREAD_PRIO
#define DEFAULT_THREAD_PRIO 1 
#else
#define DEFAULT_THREAD_PRIO 0 
#endif

#ifdef CONFIG_LWIP_DEFAULT_RAW_RECVMBOX_SIZE
#define DEFAULT_RAW_RECVMBOX_SIZE 1 
#else
#define DEFAULT_RAW_RECVMBOX_SIZE 0 
#endif

#ifdef CONFIG_LWIP_DEFAULT_UDP_RECVMBOX_SIZE
#define DEFAULT_UDP_RECVMBOX_SIZE 1 
#else
#define DEFAULT_UDP_RECVMBOX_SIZE 0 
#endif

#ifdef CONFIG_LWIP_DEFAULT_TCP_RECVMBOX_SIZE
#define DEFAULT_TCP_RECVMBOX_SIZE 1 
#else
#define DEFAULT_TCP_RECVMBOX_SIZE 0 
#endif

#ifdef CONFIG_LWIP_DEFAULT_ACCEPTMBOX_SIZE
#define DEFAULT_ACCEPTMBOX_SIZE 1 
#else
#define DEFAULT_ACCEPTMBOX_SIZE 0 
#endif


/* Sequential layer options*/
#ifdef CONFIG_LWIP_TCPIP_CORE_LOCKING
#define LWIP_TCPIP_CORE_LOCKING 1 
#else
#define LWIP_TCPIP_CORE_LOCKING 0 
#endif

#ifdef CONFIG_LWIP_TCPIP_CORE_LOCKING_INPUT
#define LWIP_TCPIP_CORE_LOCKING_INPUT 1 
#else
#define LWIP_TCPIP_CORE_LOCKING_INPUT 0 
#endif

#ifdef CONFIG_LWIP_NETCONN
#define LWIP_NETCONN 1 
#else
#define LWIP_NETCONN 0 
#endif

#ifdef CONFIG_LWIP_TCPIP_TIMEOUT
#define LWIP_TCPIP_TIMEOUT 1 
#else
#define LWIP_TCPIP_TIMEOUT 0 
#endif


/* Socket options*/
#ifdef CONFIG_LWIP_SOCKET
#define LWIP_SOCKET 1 
#else
#define LWIP_SOCKET 0 
#endif

#ifdef CONFIG_LWIP_COMPAT_SOCKETS
#define LWIP_COMPAT_SOCKETS 1 
#else
#define LWIP_COMPAT_SOCKETS 0 
#endif

#ifdef CONFIG_LWIP_POSIX_SOCKETS_IO_NAMES
#define LWIP_POSIX_SOCKETS_IO_NAMES 1 
#else
#define LWIP_POSIX_SOCKETS_IO_NAMES 0 
#endif

#ifdef CONFIG_LWIP_TCP_KEEPALIVE
#define LWIP_TCP_KEEPALIVE 1 
#else
#define LWIP_TCP_KEEPALIVE 0 
#endif

#ifdef CONFIG_LWIP_SO_RCVTIMEO
#define LWIP_SO_RCVTIMEO 1 
#else
#define LWIP_SO_RCVTIMEO 0 
#endif

#ifdef CONFIG_LWIP_SO_RCVBUF
#define LWIP_SO_RCVBUF 1 
#else
#define LWIP_SO_RCVBUF 0 
#endif

#ifdef CONFIG_LWIP_RECV_BUFSIZE_DEFAULT
#define RECV_BUFSIZE_DEFAULT CONFIG_LWIP_RECV_BUFSIZE_DEFAULT
#endif

#ifdef CONFIG_LWIP_SO_REUSE
#define SO_REUSE 1 
#else
#define SO_REUSE 0 
#endif

#ifdef CONFIG_LWIP_SO_REUSE_RXTOALL
#define SO_REUSE_RXTOALL 1 
#else
#define SO_REUSE_RXTOALL 0 
#endif


/* Statistics options*/
#ifdef CONFIG_LWIP_STATS
#define LWIP_STATS 1 
#else
#define LWIP_STATS 0 
#endif

#ifdef CONFIG_LWIP_STATS_DISPLAY
#define LWIP_STATS_DISPLAY 1 
#else
#define LWIP_STATS_DISPLAY 0 
#endif

#ifdef CONFIG_LWIP_LINK_STATS
#define LINK_STATS 1 
#else
#define LINK_STATS 0 
#endif

#ifdef CONFIG_LWIP_ETHARP_STATS
#define ETHARP_STATS CONFIG_LWIP_ETHARP_STATS
#endif

#ifdef CONFIG_LWIP_IP_STATS
#define IP_STATS 1 
#else
#define IP_STATS 0 
#endif

#ifdef CONFIG_LWIP_IPFRAG_STATS
#define IPFRAG_STATS CONFIG_LWIP_IPFRAG_STATS
#endif

#ifdef CONFIG_LWIP_ICMP_STATS
#define ICMP_STATS 1 
#else
#define ICMP_STATS 0 
#endif

#ifdef CONFIG_LWIP_IGMP_STATS
#define IGMP_STATS CONFIG_LWIP_IGMP_STATS
#endif

#ifdef CONFIG_LWIP_UDP_STATS
#define UDP_STATS CONFIG_LWIP_UDP_STATS
#endif

#ifdef CONFIG_LWIP_TCP_STATS
#define TCP_STATS CONFIG_LWIP_TCP_STATS
#endif

#ifdef CONFIG_LWIP_MEM_STATS
#define MEM_STATS CONFIG_LWIP_MEM_STATS
#endif

#ifdef CONFIG_LWIP_MEMP_STATS
#define MEMP_STATS CONFIG_LWIP_MEMP_STATS
#endif

#ifdef CONFIG_LWIP_SYS_STATS
#define SYS_STATS CONFIG_LWIP_SYS_STATS
#endif

#ifdef CONFIG_LWIP_LINK_STATS
#define LINK_STATS 1 
#else
#define LINK_STATS 0 
#endif

#ifdef CONFIG_LWIP_IP_STATS
#define IP_STATS 1 
#else
#define IP_STATS 0 
#endif

#ifdef CONFIG_LWIP_IPFRAG_STATS
#define IPFRAG_STATS 1 
#else
#define IPFRAG_STATS 0 
#endif

#ifdef CONFIG_LWIP_ICMP_STATS
#define ICMP_STATS 1 
#else
#define ICMP_STATS 0 
#endif

#ifdef CONFIG_LWIP_IGMP_STATS
#define IGMP_STATS 1 
#else
#define IGMP_STATS 0 
#endif

#ifdef CONFIG_LWIP_UDP_STATS
#define UDP_STATS 1 
#else
#define UDP_STATS 0 
#endif

#ifdef CONFIG_LWIP_TCP_STATS
#define TCP_STATS 1 
#else
#define TCP_STATS 0 
#endif

#ifdef CONFIG_LWIP_MEM_STATS
#define MEM_STATS 1 
#else
#define MEM_STATS 0 
#endif

#ifdef CONFIG_LWIP_MEMP_STATS
#define MEMP_STATS 1 
#else
#define MEMP_STATS 0 
#endif

#ifdef CONFIG_LWIP_SYS_STATS
#define SYS_STATS 1 
#else
#define SYS_STATS 0 
#endif

#ifdef CONFIG_LWIP_STATS_DISPLAY
#define LWIP_STATS_DISPLAY 1 
#else
#define LWIP_STATS_DISPLAY 0 
#endif


/* PPP options*/
#ifdef CONFIG_LWIP_PPP_SUPPORT
#define PPP_SUPPORT 1 
#else
#define PPP_SUPPORT 0 
#endif

#ifdef CONFIG_LWIP_PPPOE_SUPPORT
#define PPPOE_SUPPORT 1 
#else
#define PPPOE_SUPPORT 0 
#endif

#ifdef CONFIG_LWIP_PPPOS_SUPPORT
#define PPPOS_SUPPORT CONFIG_LWIP_PPPOS_SUPPORT
#endif

#ifdef CONFIG_LWIP_NUM_PPP
#define NUM_PPP CONFIG_LWIP_NUM_PPP
#endif

#ifdef CONFIG_LWIP_PAP_SUPPORT
#define PAP_SUPPORT 1 
#else
#define PAP_SUPPORT 0 
#endif

#ifdef CONFIG_LWIP_CHAP_SUPPORT
#define CHAP_SUPPORT 1 
#else
#define CHAP_SUPPORT 0 
#endif

#ifdef CONFIG_LWIP_MSCHAP_SUPPORT
#define MSCHAP_SUPPORT 1 
#else
#define MSCHAP_SUPPORT 0 
#endif

#ifdef CONFIG_LWIP_CBCP_SUPPORT
#define CBCP_SUPPORT 1 
#else
#define CBCP_SUPPORT 0 
#endif

#ifdef CONFIG_LWIP_CCP_SUPPORT
#define CCP_SUPPORT 1 
#else
#define CCP_SUPPORT 0 
#endif

#ifdef CONFIG_LWIP_VJ_SUPPORT
#define VJ_SUPPORT 1 
#else
#define VJ_SUPPORT 0 
#endif

#ifdef CONFIG_LWIP_MD5_SUPPORT
#define MD5_SUPPORT 1 
#else
#define MD5_SUPPORT 0 
#endif

#ifdef CONFIG_LWIP_FSM_DEFTIMEOUT
#define FSM_DEFTIMEOUT CONFIG_LWIP_FSM_DEFTIMEOUT
#endif

#ifdef CONFIG_LWIP_FSM_DEFMAXTERMREQS
#define FSM_DEFMAXTERMREQS CONFIG_LWIP_FSM_DEFMAXTERMREQS
#endif

#ifdef CONFIG_LWIP_FSM_DEFMAXCONFREQS
#define FSM_DEFMAXCONFREQS CONFIG_LWIP_FSM_DEFMAXCONFREQS
#endif

#ifdef CONFIG_LWIP_FSM_DEFMAXNAKLOOPS
#define FSM_DEFMAXNAKLOOPS CONFIG_LWIP_FSM_DEFMAXNAKLOOPS
#endif

#ifdef CONFIG_LWIP_UPAP_DEFTIMEOUT
#define UPAP_DEFTIMEOUT CONFIG_LWIP_UPAP_DEFTIMEOUT
#endif

#ifdef CONFIG_LWIP_UPAP_DEFREQTIME
#define UPAP_DEFREQTIME CONFIG_LWIP_UPAP_DEFREQTIME
#endif

#ifdef CONFIG_LWIP_CHAP_DEFTIMEOUT
#define CHAP_DEFTIMEOUT CONFIG_LWIP_CHAP_DEFTIMEOUT
#endif

#ifdef CONFIG_LWIP_CHAP_DEFTRANSMITS
#define CHAP_DEFTRANSMITS CONFIG_LWIP_CHAP_DEFTRANSMITS
#endif

#ifdef CONFIG_LWIP_LCP_ECHOINTERVAL
#define LCP_ECHOINTERVAL 1 
#else
#define LCP_ECHOINTERVAL 0 
#endif

#ifdef CONFIG_LWIP_LCP_MAXECHOFAILS
#define LCP_MAXECHOFAILS CONFIG_LWIP_LCP_MAXECHOFAILS
#endif

#ifdef CONFIG_LWIP_PPP_MAXIDLEFLAG
#define PPP_MAXIDLEFLAG CONFIG_LWIP_PPP_MAXIDLEFLAG
#endif

#ifdef CONFIG_LWIP_PPP_MTU
#define PPP_MTU CONFIG_LWIP_PPP_MTU
#endif

#ifdef CONFIG_LWIP_PPP_MAXMTU
#define PPP_MAXMTU CONFIG_LWIP_PPP_MAXMTU
#endif

#ifdef CONFIG_LWIP_PPP_MINMTU
#define PPP_MINMTU CONFIG_LWIP_PPP_MINMTU
#endif

#ifdef CONFIG_LWIP_PPP_MRU
#define PPP_MRU CONFIG_LWIP_PPP_MRU
#endif

#ifdef CONFIG_LWIP_PPP_MAXMRU
#define PPP_MAXMRU CONFIG_LWIP_PPP_MAXMRU
#endif

#ifdef CONFIG_LWIP_PPP_DEFMRU
#define PPP_DEFMRU CONFIG_LWIP_PPP_DEFMRU
#endif

#ifdef CONFIG_LWIP_PPP_MINMRU
#define PPP_MINMRU CONFIG_LWIP_PPP_MINMRU
#endif

#ifdef CONFIG_LWIP_MAXNAMELEN
#define MAXNAMELEN CONFIG_LWIP_MAXNAMELEN
#endif

#ifdef CONFIG_LWIP_MAXSECRETLEN
#define MAXSECRETLEN CONFIG_LWIP_MAXSECRETLEN
#endif


/* Checksum options*/
#ifdef CONFIG_LWIP_CHECKSUM_GEN_IP
#define CHECKSUM_GEN_IP 1 
#else
#define CHECKSUM_GEN_IP 0 
#endif

#ifdef CONFIG_LWIP_CHECKSUM_GEN_UDP
#define CHECKSUM_GEN_UDP 1 
#else
#define CHECKSUM_GEN_UDP 0 
#endif

#ifdef CONFIG_LWIP_CHECKSUM_GEN_TCP
#define CHECKSUM_GEN_TCP 1 
#else
#define CHECKSUM_GEN_TCP 0 
#endif

#ifdef CONFIG_LWIP_CHECKSUM_CHECK_IP
#define CHECKSUM_CHECK_IP 1 
#else
#define CHECKSUM_CHECK_IP 0 
#endif

#ifdef CONFIG_LWIP_CHECKSUM_CHECK_UDP
#define CHECKSUM_CHECK_UDP 1 
#else
#define CHECKSUM_CHECK_UDP 0 
#endif

#ifdef CONFIG_LWIP_CHECKSUM_CHECK_TCP
#define CHECKSUM_CHECK_TCP 1 
#else
#define CHECKSUM_CHECK_TCP 0 
#endif

#ifdef CONFIG_LWIP_CHECKSUM_ON_COPY
#define LWIP_CHECKSUM_ON_COPY 1 
#else
#define LWIP_CHECKSUM_ON_COPY 0 
#endif


/* Debugging options*/
#ifdef CONFIG_LWIP_DBG_MIN_LEVEL
#define LWIP_DBG_MIN_LEVEL CONFIG_LWIP_DBG_MIN_LEVEL
#endif

#ifdef CONFIG_LWIP_DBG_TYPES_ON
#define LWIP_DBG_TYPES_ON CONFIG_LWIP_DBG_TYPES_ON
#endif

#ifdef CONFIG_LWIP_ETHARP_DEBUG
#define ETHARP_DEBUG LWIP_DBG_ON
#else
#define ETHARP_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_NETIF_DEBUG
#define NETIF_DEBUG LWIP_DBG_ON
#else
#define NETIF_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_PBUF_DEBUG
#define PBUF_DEBUG LWIP_DBG_ON
#else
#define PBUF_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_API_LIB_DEBUG
#define API_LIB_DEBUG LWIP_DBG_ON
#else
#define API_LIB_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_API_MSG_DEBUG
#define API_MSG_DEBUG LWIP_DBG_ON
#else
#define API_MSG_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_SOCKETS_DEBUG
#define SOCKETS_DEBUG LWIP_DBG_ON
#else
#define SOCKETS_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_ICMP_DEBUG
#define ICMP_DEBUG LWIP_DBG_ON
#else
#define ICMP_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_IGMP_DEBUG
#define IGMP_DEBUG LWIP_DBG_ON
#else
#define IGMP_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_INET_DEBUG
#define INET_DEBUG LWIP_DBG_ON
#else
#define INET_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_IP_DEBUG
#define IP_DEBUG LWIP_DBG_ON
#else
#define IP_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_IP_REASS_DEBUG
#define IP_REASS_DEBUG LWIP_DBG_ON
#else
#define IP_REASS_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_RAW_DEBUG
#define RAW_DEBUG LWIP_DBG_ON
#else
#define RAW_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_MEM_DEBUG
#define MEM_DEBUG LWIP_DBG_ON
#else
#define MEM_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_MEMP_DEBUG
#define MEMP_DEBUG LWIP_DBG_ON
#else
#define MEMP_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_SYS_DEBUG
#define SYS_DEBUG LWIP_DBG_ON
#else
#define SYS_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_TIMERS_DEBUG
#define TIMERS_DEBUG LWIP_DBG_ON
#else
#define TIMERS_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_TCP_DEBUG
#define TCP_DEBUG LWIP_DBG_ON
#else
#define TCP_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_TCP_INPUT_DEBUG
#define TCP_INPUT_DEBUG LWIP_DBG_ON
#else
#define TCP_INPUT_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_TCP_FR_DEBUG
#define TCP_FR_DEBUG LWIP_DBG_ON
#else
#define TCP_FR_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_TCP_RTO_DEBUG
#define TCP_RTO_DEBUG LWIP_DBG_ON
#else
#define TCP_RTO_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_TCP_CWND_DEBUG
#define TCP_CWND_DEBUG LWIP_DBG_ON
#else
#define TCP_CWND_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_TCP_WND_DEBUG
#define TCP_WND_DEBUG LWIP_DBG_ON
#else
#define TCP_WND_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_TCP_OUTPUT_DEBUG
#define TCP_OUTPUT_DEBUG LWIP_DBG_ON
#else
#define TCP_OUTPUT_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_TCP_RST_DEBUG
#define TCP_RST_DEBUG LWIP_DBG_ON
#else
#define TCP_RST_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_TCP_QLEN_DEBUG
#define TCP_QLEN_DEBUG LWIP_DBG_ON
#else
#define TCP_QLEN_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_UDP_DEBUG
#define UDP_DEBUG LWIP_DBG_ON
#else
#define UDP_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_TCPIP_DEBUG
#define TCPIP_DEBUG LWIP_DBG_ON
#else
#define TCPIP_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_PPP_DEBUG
#define PPP_DEBUG LWIP_DBG_ON
#else
#define PPP_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_SLIP_DEBUG
#define SLIP_DEBUG LWIP_DBG_ON
#else
#define SLIP_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_DHCP_DEBUG
#define DHCP_DEBUG LWIP_DBG_ON
#else
#define DHCP_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_AUTOIP_DEBUG
#define AUTOIP_DEBUG LWIP_DBG_ON
#else
#define AUTOIP_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_SNMP_MSG_DEBUG
#define SNMP_MSG_DEBUG LWIP_DBG_ON
#else
#define SNMP_MSG_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_SNMP_MIB_DEBUG
#define SNMP_MIB_DEBUG LWIP_DBG_ON
#else
#define SNMP_MIB_DEBUG LWIP_DBG_OFF
#endif

#ifdef CONFIG_LWIP_DNS_DEBUG
#define DNS_DEBUG LWIP_DBG_ON
#else
#define DNS_DEBUG LWIP_DBG_OFF
#endif


#endif 


