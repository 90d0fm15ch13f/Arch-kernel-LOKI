cmd_crypto/seqiv.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o crypto/seqiv.ko crypto/seqiv.o crypto/seqiv.mod.o
