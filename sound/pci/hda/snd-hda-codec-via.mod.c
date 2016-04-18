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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x3f9e8089, __VMLINUX_SYMBOL_STR(snd_hda_gen_free) },
	{ 0x2b0cdda1, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_put) },
	{ 0xc4b33c76, __VMLINUX_SYMBOL_STR(snd_hdac_codec_read) },
	{ 0x64958c7d, __VMLINUX_SYMBOL_STR(snd_hda_enum_helper_info) },
	{ 0x50e7f12a, __VMLINUX_SYMBOL_STR(snd_hda_gen_parse_auto_config) },
	{ 0x30c174ef, __VMLINUX_SYMBOL_STR(snd_hda_apply_fixup) },
	{ 0x550fdbeb, __VMLINUX_SYMBOL_STR(snd_hda_pick_fixup) },
	{ 0x33a88eb3, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_tlv) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xfd92ac96, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_pcms) },
	{ 0x8acebd68, __VMLINUX_SYMBOL_STR(snd_hda_override_conn_list) },
	{ 0x18a27a1c, __VMLINUX_SYMBOL_STR(snd_hda_check_amp_list_power) },
	{ 0x865c36f0, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0xdb993b41, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_pincfg) },
	{ 0x521403ba, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put) },
	{ 0xa311b266, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_get) },
	{ 0xf04e14e5, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_name) },
	{ 0xda096c7d, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get) },
	{ 0xe4f56496, __VMLINUX_SYMBOL_STR(snd_hda_gen_init) },
	{ 0x8f3282f4, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0x92cb7ab2, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0x931904bb, __VMLINUX_SYMBOL_STR(snd_hda_override_amp_caps) },
	{ 0x4078d4c0, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0xf8e72805, __VMLINUX_SYMBOL_STR(snd_hda_sequence_write) },
	{ 0x1c28065, __VMLINUX_SYMBOL_STR(snd_hda_get_bool_hint) },
	{ 0xce50e362, __VMLINUX_SYMBOL_STR(snd_hda_ctl_add) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf2f93a0a, __VMLINUX_SYMBOL_STR(_snd_hdac_read_parm) },
	{ 0xa4b245a9, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put_beep) },
	{ 0xc4e9245d, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x16758d91, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get_beep) },
	{ 0x7af215f6, __VMLINUX_SYMBOL_STR(snd_hdac_codec_write) },
	{ 0x6f59dee1, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pincfg) },
	{ 0x8636f936, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0x38ced31, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_info) },
	{ 0x56f4136b, __VMLINUX_SYMBOL_STR(snd_hda_gen_spec_init) },
	{ 0xa5eb01dc, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_read_raw) },
	{ 0x7a94332a, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_info) },
	{ 0xe37714c3, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x9ef3e833, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_controls) },
	{ 0x7a04983e, __VMLINUX_SYMBOL_STR(snd_hda_get_connections) },
	{ 0x7be2f997, __VMLINUX_SYMBOL_STR(snd_hda_add_new_ctls) },
	{ 0xa064d4b8, __VMLINUX_SYMBOL_STR(snd_hda_shutup_pins) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-codec,snd-hda-core,snd";

MODULE_ALIAS("hdaudio:v11061708r*a01*");
MODULE_ALIAS("hdaudio:v11061709r*a01*");
MODULE_ALIAS("hdaudio:v1106170Ar*a01*");
MODULE_ALIAS("hdaudio:v1106170Br*a01*");
MODULE_ALIAS("hdaudio:v1106E710r*a01*");
MODULE_ALIAS("hdaudio:v1106E711r*a01*");
MODULE_ALIAS("hdaudio:v1106E712r*a01*");
MODULE_ALIAS("hdaudio:v1106E713r*a01*");
MODULE_ALIAS("hdaudio:v1106E714r*a01*");
MODULE_ALIAS("hdaudio:v1106E715r*a01*");
MODULE_ALIAS("hdaudio:v1106E716r*a01*");
MODULE_ALIAS("hdaudio:v1106E717r*a01*");
MODULE_ALIAS("hdaudio:v1106E720r*a01*");
MODULE_ALIAS("hdaudio:v1106E721r*a01*");
MODULE_ALIAS("hdaudio:v1106E722r*a01*");
MODULE_ALIAS("hdaudio:v1106E723r*a01*");
MODULE_ALIAS("hdaudio:v1106E724r*a01*");
MODULE_ALIAS("hdaudio:v1106E725r*a01*");
MODULE_ALIAS("hdaudio:v1106E726r*a01*");
MODULE_ALIAS("hdaudio:v1106E727r*a01*");
MODULE_ALIAS("hdaudio:v11060397r*a01*");
MODULE_ALIAS("hdaudio:v11061397r*a01*");
MODULE_ALIAS("hdaudio:v11062397r*a01*");
MODULE_ALIAS("hdaudio:v11063397r*a01*");
MODULE_ALIAS("hdaudio:v11064397r*a01*");
MODULE_ALIAS("hdaudio:v11065397r*a01*");
MODULE_ALIAS("hdaudio:v11066397r*a01*");
MODULE_ALIAS("hdaudio:v11067397r*a01*");
MODULE_ALIAS("hdaudio:v11060398r*a01*");
MODULE_ALIAS("hdaudio:v11061398r*a01*");
MODULE_ALIAS("hdaudio:v11062398r*a01*");
MODULE_ALIAS("hdaudio:v11063398r*a01*");
MODULE_ALIAS("hdaudio:v11064398r*a01*");
MODULE_ALIAS("hdaudio:v11065398r*a01*");
MODULE_ALIAS("hdaudio:v11066398r*a01*");
MODULE_ALIAS("hdaudio:v11067398r*a01*");
MODULE_ALIAS("hdaudio:v11060428r*a01*");
MODULE_ALIAS("hdaudio:v11064428r*a01*");
MODULE_ALIAS("hdaudio:v11060441r*a01*");
MODULE_ALIAS("hdaudio:v11064441r*a01*");
MODULE_ALIAS("hdaudio:v11060433r*a01*");
MODULE_ALIAS("hdaudio:v1106A721r*a01*");
MODULE_ALIAS("hdaudio:v11060438r*a01*");
MODULE_ALIAS("hdaudio:v11064438r*a01*");
MODULE_ALIAS("hdaudio:v11060448r*a01*");
MODULE_ALIAS("hdaudio:v11060440r*a01*");
MODULE_ALIAS("hdaudio:v11060446r*a01*");
MODULE_ALIAS("hdaudio:v11068446r*a01*");
MODULE_ALIAS("hdaudio:v11064760r*a01*");
MODULE_ALIAS("hdaudio:v11064761r*a01*");
MODULE_ALIAS("hdaudio:v11064762r*a01*");
