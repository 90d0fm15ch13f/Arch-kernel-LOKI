cmd_drivers/memstick/core/memstick.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/memstick/core/memstick.ko drivers/memstick/core/memstick.o drivers/memstick/core/memstick.mod.o