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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x1fe2ee7b, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0x2605137, __VMLINUX_SYMBOL_STR(regmap_register_patch) },
	{ 0xb1181af, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xe7dbbc10, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0x70617a04, __VMLINUX_SYMBOL_STR(rl6231_get_clk_info) },
	{ 0xb32a06f4, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0xe3ec4df, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x84710c23, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x9877f1b7, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xfc02baba, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8d7fa148, __VMLINUX_SYMBOL_STR(rl6231_get_pre_div) },
	{ 0x338216e6, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0x60be179c, __VMLINUX_SYMBOL_STR(snd_soc_dapm_force_bias_level) },
	{ 0x175a6ee5, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0x1a235328, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x8b705af2, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x906ad4c8, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x633dfbd4, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xdba4502f, __VMLINUX_SYMBOL_STR(rl6231_calc_dmic_clk) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xbfb9d936, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xc8269f94, __VMLINUX_SYMBOL_STR(snd_soc_params_to_frame_size) },
	{ 0x828f99c5, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0xe8c99b48, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0x7f68b24d, __VMLINUX_SYMBOL_STR(rl6231_pll_calc) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x9fb04ed4, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x4b3a5c42, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xfe6478aa, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xe37714c3, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x917f9921, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
	{ 0xc7913fbd, __VMLINUX_SYMBOL_STR(snd_soc_write) },
	{ 0x49a9e866, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,snd-soc-rl6231";

MODULE_ALIAS("acpi*:10EC5651:*");
MODULE_ALIAS("i2c:rt5651");
