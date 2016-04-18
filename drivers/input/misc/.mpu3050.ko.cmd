cmd_drivers/input/misc/mpu3050.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/input/misc/mpu3050.ko drivers/input/misc/mpu3050.o drivers/input/misc/mpu3050.mod.o
