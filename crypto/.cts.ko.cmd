cmd_crypto/cts.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o crypto/cts.ko crypto/cts.o crypto/cts.mod.o
