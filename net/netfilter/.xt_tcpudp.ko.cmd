cmd_net/netfilter/xt_tcpudp.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/netfilter/xt_tcpudp.ko net/netfilter/xt_tcpudp.o net/netfilter/xt_tcpudp.mod.o
