cmd_drivers/acpi/nfit.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/acpi/nfit.ko drivers/acpi/nfit.o drivers/acpi/nfit.mod.o
