cmd_drivers/net/bonding/bonding.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/net/bonding/bonding.ko drivers/net/bonding/bonding.o drivers/net/bonding/bonding.mod.o
