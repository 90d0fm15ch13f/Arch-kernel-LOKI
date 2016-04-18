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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3f9e8089, __VMLINUX_SYMBOL_STR(snd_hda_gen_free) },
	{ 0x38c08dbd, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pin_target) },
	{ 0x2b0cdda1, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_put) },
	{ 0x375cacd5, __VMLINUX_SYMBOL_STR(snd_hda_input_mux_info) },
	{ 0x50e7f12a, __VMLINUX_SYMBOL_STR(snd_hda_gen_parse_auto_config) },
	{ 0x30c174ef, __VMLINUX_SYMBOL_STR(snd_hda_apply_fixup) },
	{ 0x550fdbeb, __VMLINUX_SYMBOL_STR(snd_hda_pick_fixup) },
	{ 0x33a88eb3, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_tlv) },
	{ 0xfd92ac96, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_pcms) },
	{ 0x865c36f0, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0xdf0da3cc, __VMLINUX_SYMBOL_STR(acpi_get_devices) },
	{ 0xfa5a422a, __VMLINUX_SYMBOL_STR(snd_hda_gen_update_outputs) },
	{ 0x7aaeaced, __VMLINUX_SYMBOL_STR(snd_hda_get_path_from_idx) },
	{ 0xa311b266, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_get) },
	{ 0x4cdf4adf, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_write_raw) },
	{ 0x155accd5, __VMLINUX_SYMBOL_STR(snd_hda_gen_check_power_status) },
	{ 0x366434d, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_pin_target) },
	{ 0xeccd55f7, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_power_to_all) },
	{ 0x3c13c50d, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_add_vendor_verb) },
	{ 0x351f7b5b, __VMLINUX_SYMBOL_STR(snd_hda_activate_path) },
	{ 0xe4f56496, __VMLINUX_SYMBOL_STR(snd_hda_gen_init) },
	{ 0x8f3282f4, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0x92cb7ab2, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0x931904bb, __VMLINUX_SYMBOL_STR(snd_hda_override_amp_caps) },
	{ 0x4078d4c0, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x9ebddb2d, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_state) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xce50e362, __VMLINUX_SYMBOL_STR(snd_hda_ctl_add) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf2f93a0a, __VMLINUX_SYMBOL_STR(_snd_hdac_read_parm) },
	{ 0xa4b245a9, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put_beep) },
	{ 0xc4e9245d, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x16758d91, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get_beep) },
	{ 0x7af215f6, __VMLINUX_SYMBOL_STR(snd_hdac_codec_write) },
	{ 0x6eac89ff, __VMLINUX_SYMBOL_STR(snd_hda_add_new_path) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8636f936, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0x38ced31, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_info) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x56f4136b, __VMLINUX_SYMBOL_STR(snd_hda_gen_spec_init) },
	{ 0xa5eb01dc, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_read_raw) },
	{ 0x7a94332a, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_info) },
	{ 0x5147a3a5, __VMLINUX_SYMBOL_STR(query_amp_caps) },
	{ 0xf99cb0dd, __VMLINUX_SYMBOL_STR(snd_hda_gen_mic_autoswitch) },
	{ 0x9ef3e833, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_controls) },
	{ 0x7be2f997, __VMLINUX_SYMBOL_STR(snd_hda_add_new_ctls) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-codec,snd-hda-core,snd";

MODULE_ALIAS("hdaudio:v14F12008r*a01*");
MODULE_ALIAS("hdaudio:v14F15045r*a01*");
MODULE_ALIAS("hdaudio:v14F15047r*a01*");
MODULE_ALIAS("hdaudio:v14F15051r*a01*");
MODULE_ALIAS("hdaudio:v14F15066r*a01*");
MODULE_ALIAS("hdaudio:v14F15067r*a01*");
MODULE_ALIAS("hdaudio:v14F15068r*a01*");
MODULE_ALIAS("hdaudio:v14F15069r*a01*");
MODULE_ALIAS("hdaudio:v14F1506Cr*a01*");
MODULE_ALIAS("hdaudio:v14F1506Er*a01*");
MODULE_ALIAS("hdaudio:v14F15097r*a01*");
MODULE_ALIAS("hdaudio:v14F15098r*a01*");
MODULE_ALIAS("hdaudio:v14F150A1r*a01*");
MODULE_ALIAS("hdaudio:v14F150A2r*a01*");
MODULE_ALIAS("hdaudio:v14F150ABr*a01*");
MODULE_ALIAS("hdaudio:v14F150ACr*a01*");
MODULE_ALIAS("hdaudio:v14F150B8r*a01*");
MODULE_ALIAS("hdaudio:v14F150B9r*a01*");
MODULE_ALIAS("hdaudio:v14F150F1r*a01*");
MODULE_ALIAS("hdaudio:v14F150F2r*a01*");
MODULE_ALIAS("hdaudio:v14F150F3r*a01*");
MODULE_ALIAS("hdaudio:v14F150F4r*a01*");
MODULE_ALIAS("hdaudio:v14F1510Fr*a01*");
MODULE_ALIAS("hdaudio:v14F15110r*a01*");
MODULE_ALIAS("hdaudio:v14F15111r*a01*");
MODULE_ALIAS("hdaudio:v14F15113r*a01*");
MODULE_ALIAS("hdaudio:v14F15114r*a01*");
MODULE_ALIAS("hdaudio:v14F15115r*a01*");
MODULE_ALIAS("hdaudio:v14F151D7r*a01*");
