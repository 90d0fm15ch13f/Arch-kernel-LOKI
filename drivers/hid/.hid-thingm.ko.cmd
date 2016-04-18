cmd_drivers/hid/hid-thingm.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/hid/hid-thingm.ko drivers/hid/hid-thingm.o drivers/hid/hid-thingm.mod.o
