cmd_drivers/hid/i2c-hid/i2c-hid.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/hid/i2c-hid/i2c-hid.ko drivers/hid/i2c-hid/i2c-hid.o drivers/hid/i2c-hid/i2c-hid.mod.o
