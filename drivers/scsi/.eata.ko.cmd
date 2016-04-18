cmd_drivers/scsi/eata.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/scsi/eata.ko drivers/scsi/eata.o drivers/scsi/eata.mod.o
