cmd_arch/x86/ras/mce_amd_inj.ko := ld -r -m elf_x86_64 -T ./scripts/module-common.lds --build-id  -o arch/x86/ras/mce_amd_inj.ko arch/x86/ras/mce_amd_inj.o arch/x86/ras/mce_amd_inj.mod.o
