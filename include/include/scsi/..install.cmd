cmd_/root/desktop/include/include/scsi/.install := /bin/sh scripts/headers_install.sh /root/desktop/include/include/scsi ./include/uapi/scsi scsi_bsg_fc.h scsi_netlink.h scsi_netlink_fc.h; /bin/sh scripts/headers_install.sh /root/desktop/include/include/scsi ./include/scsi ; /bin/sh scripts/headers_install.sh /root/desktop/include/include/scsi ./include/generated/uapi/scsi ; for F in ; do echo "#include <asm-generic/$$F>" > /root/desktop/include/include/scsi/$$F; done; touch /root/desktop/include/include/scsi/.install
