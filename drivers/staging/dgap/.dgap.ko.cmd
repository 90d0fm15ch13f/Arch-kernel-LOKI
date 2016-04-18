cmd_drivers/staging/dgap/dgap.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/staging/dgap/dgap.ko drivers/staging/dgap/dgap.o drivers/staging/dgap/dgap.mod.o
