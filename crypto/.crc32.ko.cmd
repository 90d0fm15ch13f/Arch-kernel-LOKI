cmd_crypto/crc32.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o crypto/crc32.ko crypto/crc32.o crypto/crc32.mod.o
