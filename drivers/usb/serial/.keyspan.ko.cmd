cmd_drivers/usb/serial/keyspan.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/usb/serial/keyspan.ko drivers/usb/serial/keyspan.o drivers/usb/serial/keyspan.mod.o
