cmd_crypto/gf128mul.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o crypto/gf128mul.ko crypto/gf128mul.o crypto/gf128mul.mod.o
