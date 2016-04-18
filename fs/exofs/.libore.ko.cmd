cmd_fs/exofs/libore.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o fs/exofs/libore.ko fs/exofs/libore.o fs/exofs/libore.mod.o
