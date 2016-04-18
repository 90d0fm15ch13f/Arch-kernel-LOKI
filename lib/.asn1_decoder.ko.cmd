cmd_lib/asn1_decoder.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o lib/asn1_decoder.ko lib/asn1_decoder.o lib/asn1_decoder.mod.o
