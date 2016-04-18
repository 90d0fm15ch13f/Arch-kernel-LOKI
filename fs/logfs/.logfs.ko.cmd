cmd_fs/logfs/logfs.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o fs/logfs/logfs.ko fs/logfs/logfs.o fs/logfs/logfs.mod.o
