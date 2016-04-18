cmd_lib/test-kstrtox.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o lib/test-kstrtox.ko lib/test-kstrtox.o lib/test-kstrtox.mod.o
