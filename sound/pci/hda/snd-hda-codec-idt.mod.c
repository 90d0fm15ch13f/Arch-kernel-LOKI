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
	{ 0x23d155d4, __VMLINUX_SYMBOL_STR(snd_hdac_power_up) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x3f9e8089, __VMLINUX_SYMBOL_STR(snd_hda_gen_free) },
	{ 0x375cacd5, __VMLINUX_SYMBOL_STR(snd_hda_input_mux_info) },
	{ 0x2b0cdda1, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_put) },
	{ 0xe41dd579, __VMLINUX_SYMBOL_STR(snd_hda_codec_eapd_power_filter) },
	{ 0xc4b33c76, __VMLINUX_SYMBOL_STR(snd_hdac_codec_read) },
	{ 0x50e7f12a, __VMLINUX_SYMBOL_STR(snd_hda_gen_parse_auto_config) },
	{ 0x8ee7de23, __VMLINUX_SYMBOL_STR(snd_hda_add_verbs) },
	{ 0x30c174ef, __VMLINUX_SYMBOL_STR(snd_hda_apply_fixup) },
	{ 0x550fdbeb, __VMLINUX_SYMBOL_STR(snd_hda_pick_fixup) },
	{ 0x70d493d, __VMLINUX_SYMBOL_STR(snd_hda_input_mux_put) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x33a88eb3, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_tlv) },
	{ 0xfd92ac96, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_pcms) },
	{ 0x676f5ac, __VMLINUX_SYMBOL_STR(snd_hda_get_input_pin_attr) },
	{ 0x865c36f0, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0xdb993b41, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_pincfg) },
	{ 0x521403ba, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put) },
	{ 0xfa5a422a, __VMLINUX_SYMBOL_STR(snd_hda_gen_update_outputs) },
	{ 0x7a61ab81, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable_callback) },
	{ 0xa311b266, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_get) },
	{ 0x4cdf4adf, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_write_raw) },
	{ 0x8dc44e03, __VMLINUX_SYMBOL_STR(_snd_hda_set_pin_ctl) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x88ed4a82, __VMLINUX_SYMBOL_STR(snd_hda_gen_fix_pin_power) },
	{ 0x6add5c9a, __VMLINUX_SYMBOL_STR(dmi_find_device) },
	{ 0xda096c7d, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get) },
	{ 0x3c13c50d, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_add_vendor_verb) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x9e5cfc25, __VMLINUX_SYMBOL_STR(snd_hda_gen_path_power_filter) },
	{ 0x2b96b5fd, __VMLINUX_SYMBOL_STR(is_jack_detectable) },
	{ 0xe4f56496, __VMLINUX_SYMBOL_STR(snd_hda_gen_init) },
	{ 0x8f3282f4, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0x92cb7ab2, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0x931904bb, __VMLINUX_SYMBOL_STR(snd_hda_override_amp_caps) },
	{ 0x4078d4c0, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x2e9bca16, __VMLINUX_SYMBOL_STR(snd_hda_get_int_hint) },
	{ 0x9ebddb2d, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_state) },
	{ 0x747aacef, __VMLINUX_SYMBOL_STR(snd_hda_jack_tbl_get) },
	{ 0x1c28065, __VMLINUX_SYMBOL_STR(snd_hda_get_bool_hint) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf2f93a0a, __VMLINUX_SYMBOL_STR(_snd_hdac_read_parm) },
	{ 0x1d01c029, __VMLINUX_SYMBOL_STR(snd_hda_add_imux_item) },
	{ 0xa4b245a9, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put_beep) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xc13ab97b, __VMLINUX_SYMBOL_STR(snd_hda_enable_beep_device) },
	{ 0x1c879c17, __VMLINUX_SYMBOL_STR(snd_hda_gen_add_kctl) },
	{ 0x16758d91, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get_beep) },
	{ 0x7af215f6, __VMLINUX_SYMBOL_STR(snd_hdac_codec_write) },
	{ 0x6f59dee1, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pincfg) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x37ce02ef, __VMLINUX_SYMBOL_STR(snd_hda_apply_pincfgs) },
	{ 0x8636f936, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0x38ced31, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_info) },
	{ 0xbf942760, __VMLINUX_SYMBOL_STR(snd_hdac_power_down) },
	{ 0x56f4136b, __VMLINUX_SYMBOL_STR(snd_hda_gen_spec_init) },
	{ 0x7a94332a, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_info) },
	{ 0x5147a3a5, __VMLINUX_SYMBOL_STR(query_amp_caps) },
	{ 0xcf6f6b81, __VMLINUX_SYMBOL_STR(snd_hda_codec_amp_init_stereo) },
	{ 0x9ef3e833, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_controls) },
	{ 0x7a04983e, __VMLINUX_SYMBOL_STR(snd_hda_get_connections) },
	{ 0xa064d4b8, __VMLINUX_SYMBOL_STR(snd_hda_shutup_pins) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-core,snd-hda-codec-generic,snd-hda-codec,snd";

MODULE_ALIAS("hdaudio:v83847690r*a01*");
MODULE_ALIAS("hdaudio:v83847882r*a01*");
MODULE_ALIAS("hdaudio:v83847680r*a01*");
MODULE_ALIAS("hdaudio:v83847880r*a01*");
MODULE_ALIAS("hdaudio:v83847681r*a01*");
MODULE_ALIAS("hdaudio:v83847682r*a01*");
MODULE_ALIAS("hdaudio:v83847683r*a01*");
MODULE_ALIAS("hdaudio:v83847618r*a01*");
MODULE_ALIAS("hdaudio:v83847619r*a01*");
MODULE_ALIAS("hdaudio:v83847616r*a01*");
MODULE_ALIAS("hdaudio:v83847617r*a01*");
MODULE_ALIAS("hdaudio:v83847614r*a01*");
MODULE_ALIAS("hdaudio:v83847615r*a01*");
MODULE_ALIAS("hdaudio:v83847620r*a01*");
MODULE_ALIAS("hdaudio:v83847621r*a01*");
MODULE_ALIAS("hdaudio:v83847622r*a01*");
MODULE_ALIAS("hdaudio:v83847623r*a01*");
MODULE_ALIAS("hdaudio:v83847624r*a01*");
MODULE_ALIAS("hdaudio:v83847625r*a01*");
MODULE_ALIAS("hdaudio:v83847626r*a01*");
MODULE_ALIAS("hdaudio:v83847627r*a01*");
MODULE_ALIAS("hdaudio:v83847628r*a01*");
MODULE_ALIAS("hdaudio:v83847629r*a01*");
MODULE_ALIAS("hdaudio:v83847632r*a01*");
MODULE_ALIAS("hdaudio:v83847633r*a01*");
MODULE_ALIAS("hdaudio:v83847634r*a01*");
MODULE_ALIAS("hdaudio:v83847635r*a01*");
MODULE_ALIAS("hdaudio:v83847636r*a01*");
MODULE_ALIAS("hdaudio:v83847637r*a01*");
MODULE_ALIAS("hdaudio:v83847645r*a01*");
MODULE_ALIAS("hdaudio:v83847646r*a01*");
MODULE_ALIAS("hdaudio:v83847661r*a01*");
MODULE_ALIAS("hdaudio:v83847662r*a01*");
MODULE_ALIAS("hdaudio:v83847664r*a01*");
MODULE_ALIAS("hdaudio:v83847698r*a01*");
MODULE_ALIAS("hdaudio:v838476A0r*a01*");
MODULE_ALIAS("hdaudio:v838476A1r*a01*");
MODULE_ALIAS("hdaudio:v838476A2r*a01*");
MODULE_ALIAS("hdaudio:v838476A3r*a01*");
MODULE_ALIAS("hdaudio:v838476A4r*a01*");
MODULE_ALIAS("hdaudio:v838476A5r*a01*");
MODULE_ALIAS("hdaudio:v838476A6r*a01*");
MODULE_ALIAS("hdaudio:v838476A7r*a01*");
MODULE_ALIAS("hdaudio:v111D7603r*a01*");
MODULE_ALIAS("hdaudio:v111D7604r*a01*");
MODULE_ALIAS("hdaudio:v111D76D4r*a01*");
MODULE_ALIAS("hdaudio:v111D7605r*a01*");
MODULE_ALIAS("hdaudio:v111D76D5r*a01*");
MODULE_ALIAS("hdaudio:v111D76D1r*a01*");
MODULE_ALIAS("hdaudio:v111D76D9r*a01*");
MODULE_ALIAS("hdaudio:v111D7666r*a01*");
MODULE_ALIAS("hdaudio:v111D7667r*a01*");
MODULE_ALIAS("hdaudio:v111D7668r*a01*");
MODULE_ALIAS("hdaudio:v111D7669r*a01*");
MODULE_ALIAS("hdaudio:v111D7608r*a01*");
MODULE_ALIAS("hdaudio:v111D7674r*a01*");
MODULE_ALIAS("hdaudio:v111D7675r*a01*");
MODULE_ALIAS("hdaudio:v111D7676r*a01*");
MODULE_ALIAS("hdaudio:v111D7695r*a01*");
MODULE_ALIAS("hdaudio:v111D76B0r*a01*");
MODULE_ALIAS("hdaudio:v111D76B1r*a01*");
MODULE_ALIAS("hdaudio:v111D76B2r*a01*");
MODULE_ALIAS("hdaudio:v111D76B3r*a01*");
MODULE_ALIAS("hdaudio:v111D76B4r*a01*");
MODULE_ALIAS("hdaudio:v111D76B5r*a01*");
MODULE_ALIAS("hdaudio:v111D76B6r*a01*");
MODULE_ALIAS("hdaudio:v111D76B7r*a01*");
MODULE_ALIAS("hdaudio:v111D76C0r*a01*");
MODULE_ALIAS("hdaudio:v111D76C1r*a01*");
MODULE_ALIAS("hdaudio:v111D76C2r*a01*");
MODULE_ALIAS("hdaudio:v111D76C3r*a01*");
MODULE_ALIAS("hdaudio:v111D76C4r*a01*");
MODULE_ALIAS("hdaudio:v111D76C5r*a01*");
MODULE_ALIAS("hdaudio:v111D76C6r*a01*");
MODULE_ALIAS("hdaudio:v111D76C7r*a01*");
MODULE_ALIAS("hdaudio:v111D76C8r*a01*");
MODULE_ALIAS("hdaudio:v111D76C9r*a01*");
MODULE_ALIAS("hdaudio:v111D76CAr*a01*");
MODULE_ALIAS("hdaudio:v111D76CBr*a01*");
MODULE_ALIAS("hdaudio:v111D76CCr*a01*");
MODULE_ALIAS("hdaudio:v111D76CDr*a01*");
MODULE_ALIAS("hdaudio:v111D76CEr*a01*");
MODULE_ALIAS("hdaudio:v111D76DFr*a01*");
MODULE_ALIAS("hdaudio:v111D76E0r*a01*");
MODULE_ALIAS("hdaudio:v111D76E3r*a01*");
MODULE_ALIAS("hdaudio:v111D76E5r*a01*");
MODULE_ALIAS("hdaudio:v111D76E7r*a01*");
MODULE_ALIAS("hdaudio:v111D76E8r*a01*");
MODULE_ALIAS("hdaudio:v111D76E9r*a01*");
MODULE_ALIAS("hdaudio:v111D76EAr*a01*");
MODULE_ALIAS("hdaudio:v111D76EBr*a01*");
MODULE_ALIAS("hdaudio:v111D76ECr*a01*");
MODULE_ALIAS("hdaudio:v111D76EDr*a01*");
MODULE_ALIAS("hdaudio:v111D76EEr*a01*");
MODULE_ALIAS("hdaudio:v111D76EFr*a01*");
MODULE_ALIAS("hdaudio:v111D76F0r*a01*");
MODULE_ALIAS("hdaudio:v111D76F1r*a01*");
MODULE_ALIAS("hdaudio:v111D76F2r*a01*");
MODULE_ALIAS("hdaudio:v111D76F3r*a01*");
