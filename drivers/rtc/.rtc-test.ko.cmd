cmd_drivers/rtc/rtc-test.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/rtc/rtc-test.ko drivers/rtc/rtc-test.o drivers/rtc/rtc-test.mod.o
