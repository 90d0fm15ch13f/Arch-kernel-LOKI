cmd_lib/mpi/mpi.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o lib/mpi/mpi.ko lib/mpi/mpi.o lib/mpi/mpi.mod.o
