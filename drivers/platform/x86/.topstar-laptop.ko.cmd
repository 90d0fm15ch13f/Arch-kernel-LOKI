cmd_drivers/platform/x86/topstar-laptop.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/platform/x86/topstar-laptop.ko drivers/platform/x86/topstar-laptop.o drivers/platform/x86/topstar-laptop.mod.o