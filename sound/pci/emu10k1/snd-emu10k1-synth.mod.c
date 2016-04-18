#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5e862211, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x807b7cef, __VMLINUX_SYMBOL_STR(snd_emux_new) },
	{ 0xb1877d04, __VMLINUX_SYMBOL_STR(snd_emu10k1_synth_alloc) },
	{ 0xea612fe3, __VMLINUX_SYMBOL_STR(snd_emux_register) },
	{ 0x37b36895, __VMLINUX_SYMBOL_STR(snd_emu10k1_memblk_map) },
	{ 0x5fb471dd, __VMLINUX_SYMBOL_STR(snd_emu10k1_voice_alloc) },
	{ 0x32fba0c7, __VMLINUX_SYMBOL_STR(__snd_seq_driver_register) },
	{ 0x5f983fc1, __VMLINUX_SYMBOL_STR(snd_emu10k1_synth_bzero) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xb3ae1e5f, __VMLINUX_SYMBOL_STR(snd_emux_free) },
	{ 0xa9974453, __VMLINUX_SYMBOL_STR(snd_emu10k1_ptr_write) },
	{ 0x90aa5cc, __VMLINUX_SYMBOL_STR(snd_emu10k1_synth_free) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x19f5ec42, __VMLINUX_SYMBOL_STR(snd_emu10k1_voice_free) },
	{ 0xc0acfc7, __VMLINUX_SYMBOL_STR(snd_emu10k1_synth_copy_from_user) },
	{ 0xf6dedb5, __VMLINUX_SYMBOL_STR(snd_emu10k1_ptr_read) },
	{ 0x101f5c36, __VMLINUX_SYMBOL_STR(snd_seq_driver_unregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-emux-synth,snd-emu10k1,snd-seq-device";

