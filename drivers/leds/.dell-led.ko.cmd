cmd_drivers/leds/dell-led.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/leds/dell-led.ko drivers/leds/dell-led.o drivers/leds/dell-led.mod.o
