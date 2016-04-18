cmd_drivers/nfc/nfcwilink.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/nfc/nfcwilink.ko drivers/nfc/nfcwilink.o drivers/nfc/nfcwilink.mod.o
