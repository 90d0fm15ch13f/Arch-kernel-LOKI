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
	{ 0xb1181af, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xe7dbbc10, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0xb32a06f4, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x84710c23, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x175a6ee5, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0x1a235328, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x8b705af2, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x633dfbd4, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xbfb9d936, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0x828f99c5, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0x9fb04ed4, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x4b3a5c42, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xfe6478aa, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xe37714c3, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x917f9921, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("i2c:ssm4567");
MODULE_ALIAS("acpi*:INT343B:*");
