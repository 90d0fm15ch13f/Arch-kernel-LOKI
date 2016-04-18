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
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x71455d14, __VMLINUX_SYMBOL_STR(snd_ac97_suspend) },
	{ 0x2b6a4846, __VMLINUX_SYMBOL_STR(soc_ac97_ops) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2dfbcd19, __VMLINUX_SYMBOL_STR(snd_ac97_bus) },
	{ 0xbfb9d936, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0x4feca4ea, __VMLINUX_SYMBOL_STR(snd_ac97_mixer) },
	{ 0x9fa33aa7, __VMLINUX_SYMBOL_STR(snd_ac97_set_rate) },
	{ 0x4a3b591a, __VMLINUX_SYMBOL_STR(snd_ac97_resume) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x9fb04ed4, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-ac97-codec,snd-soc-core";

