cmd_lib/oid_registry.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o lib/oid_registry.ko lib/oid_registry.o lib/oid_registry.mod.o
