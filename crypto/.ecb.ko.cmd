cmd_crypto/ecb.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o crypto/ecb.ko crypto/ecb.o crypto/ecb.mod.o
