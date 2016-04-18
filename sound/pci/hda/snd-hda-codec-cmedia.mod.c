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
	{ 0x2b0cdda1, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_put) },
	{ 0x50e7f12a, __VMLINUX_SYMBOL_STR(snd_hda_gen_parse_auto_config) },
	{ 0x33a88eb3, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_tlv) },
	{ 0xfd92ac96, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_pcms) },
	{ 0x865c36f0, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0xa311b266, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_get) },
	{ 0xe4f56496, __VMLINUX_SYMBOL_STR(snd_hda_gen_init) },
	{ 0x8f3282f4, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0x92cb7ab2, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1c879c17, __VMLINUX_SYMBOL_STR(snd_hda_gen_add_kctl) },
	{ 0x6f59dee1, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pincfg) },
	{ 0x8636f936, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0x56f4136b, __VMLINUX_SYMBOL_STR(snd_hda_gen_spec_init) },
	{ 0x7a94332a, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_info) },
	{ 0x9ef3e833, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_controls) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-codec";

MODULE_ALIAS("hdaudio:v13F68888r*a01*");
MODULE_ALIAS("hdaudio:v13F69880r*a01*");
MODULE_ALIAS("hdaudio:v434D4980r*a01*");
