cmd_drivers/net/ethernet/altera/altera_tse.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/net/ethernet/altera/altera_tse.ko drivers/net/ethernet/altera/altera_tse.o drivers/net/ethernet/altera/altera_tse.mod.o