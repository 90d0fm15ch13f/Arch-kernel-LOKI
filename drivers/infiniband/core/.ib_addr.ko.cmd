cmd_drivers/infiniband/core/ib_addr.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/infiniband/core/ib_addr.ko drivers/infiniband/core/ib_addr.o drivers/infiniband/core/ib_addr.mod.o