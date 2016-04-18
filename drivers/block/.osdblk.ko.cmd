cmd_drivers/block/osdblk.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/block/osdblk.ko drivers/block/osdblk.o drivers/block/osdblk.mod.o
