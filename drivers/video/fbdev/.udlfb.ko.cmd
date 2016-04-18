cmd_drivers/video/fbdev/udlfb.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/video/fbdev/udlfb.ko drivers/video/fbdev/udlfb.o drivers/video/fbdev/udlfb.mod.o
