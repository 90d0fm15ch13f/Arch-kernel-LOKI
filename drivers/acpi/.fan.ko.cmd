cmd_drivers/acpi/fan.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/acpi/fan.ko drivers/acpi/fan.o drivers/acpi/fan.mod.o
