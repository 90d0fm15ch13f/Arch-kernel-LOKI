cmd_lib/percpu_test.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o lib/percpu_test.ko lib/percpu_test.o lib/percpu_test.mod.o
