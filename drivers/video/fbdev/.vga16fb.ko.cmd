cmd_drivers/video/fbdev/vga16fb.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/video/fbdev/vga16fb.ko drivers/video/fbdev/vga16fb.o drivers/video/fbdev/vga16fb.mod.o
