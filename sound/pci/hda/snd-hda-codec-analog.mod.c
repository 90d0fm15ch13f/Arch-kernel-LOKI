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
	{ 0x64958c7d, __VMLINUX_SYMBOL_STR(snd_hda_enum_helper_info) },
	{ 0x50e7f12a, __VMLINUX_SYMBOL_STR(snd_hda_gen_parse_auto_config) },
	{ 0x30c174ef, __VMLINUX_SYMBOL_STR(snd_hda_apply_fixup) },
	{ 0x550fdbeb, __VMLINUX_SYMBOL_STR(snd_hda_pick_fixup) },
	{ 0xbe7dd7dc, __VMLINUX_SYMBOL_STR(snd_array_new) },
	{ 0x33a88eb3, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_tlv) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfd92ac96, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_pcms) },
	{ 0x8acebd68, __VMLINUX_SYMBOL_STR(snd_hda_override_conn_list) },
	{ 0x865c36f0, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0x7aaeaced, __VMLINUX_SYMBOL_STR(snd_hda_get_path_from_idx) },
	{ 0xa311b266, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_get) },
	{ 0x4cdf4adf, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_write_raw) },
	{ 0xff26696d, __VMLINUX_SYMBOL_STR(snd_hda_get_path_idx) },
	{ 0x155accd5, __VMLINUX_SYMBOL_STR(snd_hda_gen_check_power_status) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x351f7b5b, __VMLINUX_SYMBOL_STR(snd_hda_activate_path) },
	{ 0xe4f56496, __VMLINUX_SYMBOL_STR(snd_hda_gen_init) },
	{ 0x8f3282f4, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0x92cb7ab2, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0x931904bb, __VMLINUX_SYMBOL_STR(snd_hda_override_amp_caps) },
	{ 0xce50e362, __VMLINUX_SYMBOL_STR(snd_hda_ctl_add) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf2f93a0a, __VMLINUX_SYMBOL_STR(_snd_hdac_read_parm) },
	{ 0xa4b245a9, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put_beep) },
	{ 0xc4e9245d, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1c879c17, __VMLINUX_SYMBOL_STR(snd_hda_gen_add_kctl) },
	{ 0x16758d91, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get_beep) },
	{ 0x7af215f6, __VMLINUX_SYMBOL_STR(snd_hdac_codec_write) },
	{ 0x8636f936, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0x38ced31, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_info) },
	{ 0x56f4136b, __VMLINUX_SYMBOL_STR(snd_hda_gen_spec_init) },
	{ 0x7a94332a, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_info) },
	{ 0x9ef3e833, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_controls) },
	{ 0x7a04983e, __VMLINUX_SYMBOL_STR(snd_hda_get_connections) },
	{ 0xa064d4b8, __VMLINUX_SYMBOL_STR(snd_hda_shutup_pins) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-codec,snd-hda-core,snd";

MODULE_ALIAS("hdaudio:v11D4184Ar*a01*");
MODULE_ALIAS("hdaudio:v11D41882r*a01*");
MODULE_ALIAS("hdaudio:v11D41883r*a01*");
MODULE_ALIAS("hdaudio:v11D41884r*a01*");
MODULE_ALIAS("hdaudio:v11D4194Ar*a01*");
MODULE_ALIAS("hdaudio:v11D4194Br*a01*");
MODULE_ALIAS("hdaudio:v11D41981r*a01*");
MODULE_ALIAS("hdaudio:v11D41983r*a01*");
MODULE_ALIAS("hdaudio:v11D41984r*a01*");
MODULE_ALIAS("hdaudio:v11D41986r*a01*");
MODULE_ALIAS("hdaudio:v11D41988r*a01*");
MODULE_ALIAS("hdaudio:v11D4198Br*a01*");
MODULE_ALIAS("hdaudio:v11D4882Ar*a01*");
MODULE_ALIAS("hdaudio:v11D4989Ar*a01*");
MODULE_ALIAS("hdaudio:v11D4989Br*a01*");
