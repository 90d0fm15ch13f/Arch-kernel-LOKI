cmd_drivers/gpu/drm/via/via.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpu/drm/via/via.ko drivers/gpu/drm/via/via.o drivers/gpu/drm/via/via.mod.o
