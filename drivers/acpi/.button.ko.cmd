cmd_drivers/acpi/button.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/acpi/button.ko drivers/acpi/button.o drivers/acpi/button.mod.o
