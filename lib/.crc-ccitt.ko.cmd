cmd_lib/crc-ccitt.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o lib/crc-ccitt.ko lib/crc-ccitt.o lib/crc-ccitt.mod.o
