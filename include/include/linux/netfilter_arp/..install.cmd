cmd_/root/desktop/include/include/linux/netfilter_arp/.install := /bin/sh scripts/headers_install.sh /root/desktop/include/include/linux/netfilter_arp ./include/uapi/linux/netfilter_arp arp_tables.h arpt_mangle.h; /bin/sh scripts/headers_install.sh /root/desktop/include/include/linux/netfilter_arp ./include/linux/netfilter_arp ; /bin/sh scripts/headers_install.sh /root/desktop/include/include/linux/netfilter_arp ./include/generated/uapi/linux/netfilter_arp ; for F in ; do echo "#include <asm-generic/$$F>" > /root/desktop/include/include/linux/netfilter_arp/$$F; done; touch /root/desktop/include/include/linux/netfilter_arp/.install