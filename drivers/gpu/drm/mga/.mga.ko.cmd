cmd_drivers/gpu/drm/mga/mga.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/gpu/drm/mga/mga.ko drivers/gpu/drm/mga/mga.o drivers/gpu/drm/mga/mga.mod.o
