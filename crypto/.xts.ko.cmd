cmd_crypto/xts.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o crypto/xts.ko crypto/xts.o crypto/xts.mod.o
