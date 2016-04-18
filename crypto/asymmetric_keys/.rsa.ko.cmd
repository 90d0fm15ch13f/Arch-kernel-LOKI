cmd_crypto/asymmetric_keys/rsa.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o crypto/asymmetric_keys/rsa.ko crypto/asymmetric_keys/rsa.o crypto/asymmetric_keys/rsa.mod.o
