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
	{ 0xc4b33c76, __VMLINUX_SYMBOL_STR(snd_hdac_codec_read) },
	{ 0x50e7f12a, __VMLINUX_SYMBOL_STR(snd_hda_gen_parse_auto_config) },
	{ 0x30c174ef, __VMLINUX_SYMBOL_STR(snd_hda_apply_fixup) },
	{ 0x550fdbeb, __VMLINUX_SYMBOL_STR(snd_hda_pick_fixup) },
	{ 0xfd92ac96, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_pcms) },
	{ 0x865c36f0, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0xdb993b41, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_pincfg) },
	{ 0xfa5a422a, __VMLINUX_SYMBOL_STR(snd_hda_gen_update_outputs) },
	{ 0x7a61ab81, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable_callback) },
	{ 0x8dc44e03, __VMLINUX_SYMBOL_STR(_snd_hda_set_pin_ctl) },
	{ 0xe4f56496, __VMLINUX_SYMBOL_STR(snd_hda_gen_init) },
	{ 0x8f3282f4, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0x92cb7ab2, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0x931904bb, __VMLINUX_SYMBOL_STR(snd_hda_override_amp_caps) },
	{ 0x9ebddb2d, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_state) },
	{ 0x67b70b5c, __VMLINUX_SYMBOL_STR(snd_hda_find_mixer_ctl) },
	{ 0xf8e72805, __VMLINUX_SYMBOL_STR(snd_hda_sequence_write) },
	{ 0xce50e362, __VMLINUX_SYMBOL_STR(snd_hda_ctl_add) },
	{ 0xc4e9245d, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7af215f6, __VMLINUX_SYMBOL_STR(snd_hdac_codec_write) },
	{ 0x6f59dee1, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pincfg) },
	{ 0x37ce02ef, __VMLINUX_SYMBOL_STR(snd_hda_apply_pincfgs) },
	{ 0x8636f936, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0x56f4136b, __VMLINUX_SYMBOL_STR(snd_hda_gen_spec_init) },
	{ 0x5147a3a5, __VMLINUX_SYMBOL_STR(query_amp_caps) },
	{ 0x9ef3e833, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_controls) },
	{ 0xa064d4b8, __VMLINUX_SYMBOL_STR(snd_hda_shutup_pins) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-core,snd-hda-codec,snd";

MODULE_ALIAS("hdaudio:v10134206r*a01*");
MODULE_ALIAS("hdaudio:v10134207r*a01*");
MODULE_ALIAS("hdaudio:v10134208r*a01*");
MODULE_ALIAS("hdaudio:v10134210r*a01*");
MODULE_ALIAS("hdaudio:v10134213r*a01*");
