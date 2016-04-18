cmd_drivers/video/fbdev/sstfb.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/video/fbdev/sstfb.ko drivers/video/fbdev/sstfb.o drivers/video/fbdev/sstfb.mod.o
