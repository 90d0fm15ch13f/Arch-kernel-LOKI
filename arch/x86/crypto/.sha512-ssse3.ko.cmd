cmd_arch/x86/crypto/sha512-ssse3.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o arch/x86/crypto/sha512-ssse3.ko arch/x86/crypto/sha512-ssse3.o arch/x86/crypto/sha512-ssse3.mod.o