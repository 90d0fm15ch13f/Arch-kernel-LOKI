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
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc4b33c76, __VMLINUX_SYMBOL_STR(snd_hdac_codec_read) },
	{ 0x4cdf4adf, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_write_raw) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1288c37d, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x3c13c50d, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_add_vendor_verb) },
	{ 0x92cb7ab2, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0x4078d4c0, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xeeee0ab6, __VMLINUX_SYMBOL_STR(snd_hda_codec_pcm_new) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7af215f6, __VMLINUX_SYMBOL_STR(snd_hdac_codec_write) },
	{ 0x8636f936, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0x9b6d5e8a, __VMLINUX_SYMBOL_STR(snd_hda_codec_setup_stream) },
	{ 0x7be2f997, __VMLINUX_SYMBOL_STR(snd_hda_add_new_ctls) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-core,snd-pcm,snd-hda-codec,snd";

MODULE_ALIAS("hdaudio:v163C3055r*a01*");
MODULE_ALIAS("hdaudio:v163C3155r*a01*");
MODULE_ALIAS("hdaudio:v11C13026r*a01*");
MODULE_ALIAS("hdaudio:v11C13055r*a01*");
MODULE_ALIAS("hdaudio:v11C13155r*a01*");
MODULE_ALIAS("hdaudio:v10573055r*a01*");
MODULE_ALIAS("hdaudio:v10573057r*a01*");
MODULE_ALIAS("hdaudio:v10573155r*a01*");
MODULE_ALIAS("hdaudio:v11063288r*a01*");
MODULE_ALIAS("hdaudio:v15433155r*a01*");
MODULE_ALIAS("hdaudio:v18540018r*a01*");
