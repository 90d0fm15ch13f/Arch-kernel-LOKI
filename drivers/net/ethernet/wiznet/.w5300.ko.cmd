cmd_drivers/net/ethernet/wiznet/w5300.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/net/ethernet/wiznet/w5300.ko drivers/net/ethernet/wiznet/w5300.o drivers/net/ethernet/wiznet/w5300.mod.o