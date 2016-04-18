cmd_crypto/zlib.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o crypto/zlib.ko crypto/zlib.o crypto/zlib.mod.o
