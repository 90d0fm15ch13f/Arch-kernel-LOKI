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
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x1fe2ee7b, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0xb1181af, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xb32a06f4, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0xe3ec4df, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x84710c23, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x9877f1b7, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1a235328, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x8b705af2, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x43f81957, __VMLINUX_SYMBOL_STR(clk_round_rate) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x906ad4c8, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0x95e76255, __VMLINUX_SYMBOL_STR(device_property_read_u32_array) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x633dfbd4, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x2e235c33, __VMLINUX_SYMBOL_STR(snd_soc_dapm_sync) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6190fcd, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xbfb9d936, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0x76d9b876, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0x828f99c5, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0xe8c99b48, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0xd805d188, __VMLINUX_SYMBOL_STR(snd_soc_dapm_force_enable_pin) },
	{ 0x24b85c2, __VMLINUX_SYMBOL_STR(snd_soc_dapm_disable_pin) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x9496afe5, __VMLINUX_SYMBOL_STR(snd_soc_jack_report) },
	{ 0x9fb04ed4, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x4b3a5c42, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x8733aade, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xfe6478aa, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xe37714c3, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x917f9921, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
	{ 0xc5d894e8, __VMLINUX_SYMBOL_STR(device_property_present) },
	{ 0x49a9e866, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";

MODULE_ALIAS("acpi*:10508825:*");
