cmd_/root/desktop/include/include/misc/.install := /bin/sh scripts/headers_install.sh /root/desktop/include/include/misc ./include/uapi/misc cxl.h; /bin/sh scripts/headers_install.sh /root/desktop/include/include/misc ./include/misc ; /bin/sh scripts/headers_install.sh /root/desktop/include/include/misc ./include/generated/uapi/misc ; for F in ; do echo "#include <asm-generic/$$F>" > /root/desktop/include/include/misc/$$F; done; touch /root/desktop/include/include/misc/.install
