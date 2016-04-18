cmd_drivers/usb/core/usbcore.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/usb/core/usbcore.ko drivers/usb/core/usbcore.o drivers/usb/core/usbcore.mod.o
