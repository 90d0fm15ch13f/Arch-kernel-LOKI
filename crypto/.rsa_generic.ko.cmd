cmd_crypto/rsa_generic.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o crypto/rsa_generic.ko crypto/rsa_generic.o crypto/rsa_generic.mod.o
