cmd_net/dccp/dccp_probe.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o net/dccp/dccp_probe.ko net/dccp/dccp_probe.o net/dccp/dccp_probe.mod.o
