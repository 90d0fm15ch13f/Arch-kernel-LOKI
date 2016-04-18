cmd_drivers/video/fbdev/ocfb.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/video/fbdev/ocfb.ko drivers/video/fbdev/ocfb.o drivers/video/fbdev/ocfb.mod.o
