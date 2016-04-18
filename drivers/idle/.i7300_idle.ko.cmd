cmd_drivers/idle/i7300_idle.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/idle/i7300_idle.ko drivers/idle/i7300_idle.o drivers/idle/i7300_idle.mod.o
