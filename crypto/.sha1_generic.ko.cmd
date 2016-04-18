cmd_crypto/sha1_generic.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o crypto/sha1_generic.ko crypto/sha1_generic.o crypto/sha1_generic.mod.o
