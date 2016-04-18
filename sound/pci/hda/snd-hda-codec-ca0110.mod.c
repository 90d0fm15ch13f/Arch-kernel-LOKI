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
	{ 0x3f9e8089, __VMLINUX_SYMBOL_STR(snd_hda_gen_free) },
	{ 0x50e7f12a, __VMLINUX_SYMBOL_STR(snd_hda_gen_parse_auto_config) },
	{ 0xfd92ac96, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_pcms) },
	{ 0x865c36f0, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0xe4f56496, __VMLINUX_SYMBOL_STR(snd_hda_gen_init) },
	{ 0x8f3282f4, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0x92cb7ab2, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x8636f936, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0x56f4136b, __VMLINUX_SYMBOL_STR(snd_hda_gen_spec_init) },
	{ 0x9ef3e833, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_controls) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-codec";

MODULE_ALIAS("hdaudio:v1102000Ar*a01*");
MODULE_ALIAS("hdaudio:v1102000Br*a01*");
MODULE_ALIAS("hdaudio:v1102000Dr*a01*");
