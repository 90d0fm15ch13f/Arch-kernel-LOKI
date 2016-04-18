cmd_drivers/staging/dgnc/dgnc.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/staging/dgnc/dgnc.ko drivers/staging/dgnc/dgnc.o drivers/staging/dgnc/dgnc.mod.o
