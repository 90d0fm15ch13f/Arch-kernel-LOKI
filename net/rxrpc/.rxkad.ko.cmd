cmd_net/rxrpc/rxkad.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/rxrpc/rxkad.ko net/rxrpc/rxkad.o net/rxrpc/rxkad.mod.o
