cmd_drivers/acpi/thermal.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/acpi/thermal.ko drivers/acpi/thermal.o drivers/acpi/thermal.mod.o
