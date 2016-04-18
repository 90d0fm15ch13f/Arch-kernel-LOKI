cmd_fs/exofs/exofs.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o fs/exofs/exofs.ko fs/exofs/exofs.o fs/exofs/exofs.mod.o
