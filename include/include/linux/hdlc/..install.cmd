cmd_/root/desktop/include/include/linux/hdlc/.install := /bin/sh scripts/headers_install.sh /root/desktop/include/include/linux/hdlc ./include/uapi/linux/hdlc ioctl.h; /bin/sh scripts/headers_install.sh /root/desktop/include/include/linux/hdlc ./include/linux/hdlc ; /bin/sh scripts/headers_install.sh /root/desktop/include/include/linux/hdlc ./include/generated/uapi/linux/hdlc ; for F in ; do echo "#include <asm-generic/$$F>" > /root/desktop/include/include/linux/hdlc/$$F; done; touch /root/desktop/include/include/linux/hdlc/.install
