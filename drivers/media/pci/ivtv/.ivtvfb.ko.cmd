cmd_drivers/media/pci/ivtv/ivtvfb.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o drivers/media/pci/ivtv/ivtvfb.ko drivers/media/pci/ivtv/ivtvfb.o drivers/media/pci/ivtv/ivtvfb.mod.o