cmd_drivers/extcon/extcon.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/extcon/extcon.ko drivers/extcon/extcon.o drivers/extcon/extcon.mod.o
