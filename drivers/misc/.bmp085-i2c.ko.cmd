cmd_drivers/misc/bmp085-i2c.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/misc/bmp085-i2c.ko drivers/misc/bmp085-i2c.o drivers/misc/bmp085-i2c.mod.o
