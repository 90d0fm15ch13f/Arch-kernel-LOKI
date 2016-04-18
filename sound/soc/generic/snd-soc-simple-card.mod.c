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
	{ 0xe42d4ca0, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_card) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x11894d1f, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0x65389c5a, __VMLINUX_SYMBOL_STR(snd_soc_card_jack_new) },
	{ 0x1e89098, __VMLINUX_SYMBOL_STR(snd_soc_jack_add_gpios) },
	{ 0x3a00a0c0, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_tdm_slot) },
	{ 0x5eafcc90, __VMLINUX_SYMBOL_STR(snd_soc_jack_free_gpios) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Csimple-audio-card");
