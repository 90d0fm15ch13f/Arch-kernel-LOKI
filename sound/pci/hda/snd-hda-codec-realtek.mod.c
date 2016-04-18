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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x3f9e8089, __VMLINUX_SYMBOL_STR(snd_hda_gen_free) },
	{ 0x38c08dbd, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pin_target) },
	{ 0x2b0cdda1, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_put) },
	{ 0xc4b33c76, __VMLINUX_SYMBOL_STR(snd_hdac_codec_read) },
	{ 0x50e7f12a, __VMLINUX_SYMBOL_STR(snd_hda_gen_parse_auto_config) },
	{ 0x30c174ef, __VMLINUX_SYMBOL_STR(snd_hda_apply_fixup) },
	{ 0x8ee7de23, __VMLINUX_SYMBOL_STR(snd_hda_add_verbs) },
	{ 0x550fdbeb, __VMLINUX_SYMBOL_STR(snd_hda_pick_fixup) },
	{ 0x47a1508a, __VMLINUX_SYMBOL_STR(snd_hda_mixer_bind_ctls_put) },
	{ 0x38a5e384, __VMLINUX_SYMBOL_STR(snd_pci_quirk_lookup) },
	{ 0x33a88eb3, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_tlv) },
	{ 0xfd92ac96, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_pcms) },
	{ 0x676f5ac, __VMLINUX_SYMBOL_STR(snd_hda_get_input_pin_attr) },
	{ 0x8acebd68, __VMLINUX_SYMBOL_STR(snd_hda_override_conn_list) },
	{ 0x865c36f0, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0xdf0da3cc, __VMLINUX_SYMBOL_STR(acpi_get_devices) },
	{ 0xfa5a422a, __VMLINUX_SYMBOL_STR(snd_hda_gen_update_outputs) },
	{ 0x7a61ab81, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable_callback) },
	{ 0x42c00678, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xa311b266, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_get) },
	{ 0xf04e14e5, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_name) },
	{ 0x4cdf4adf, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_write_raw) },
	{ 0x8dc44e03, __VMLINUX_SYMBOL_STR(_snd_hda_set_pin_ctl) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x63bdb760, __VMLINUX_SYMBOL_STR(snd_hda_gen_hp_automute) },
	{ 0x155accd5, __VMLINUX_SYMBOL_STR(snd_hda_gen_check_power_status) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x366434d, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_pin_target) },
	{ 0x6add5c9a, __VMLINUX_SYMBOL_STR(dmi_find_device) },
	{ 0xeccd55f7, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_power_to_all) },
	{ 0xcfbc3f4d, __VMLINUX_SYMBOL_STR(snd_hda_mixer_bind_ctls_get) },
	{ 0x1639be01, __VMLINUX_SYMBOL_STR(snd_hda_mixer_bind_ctls_info) },
	{ 0x9e5cfc25, __VMLINUX_SYMBOL_STR(snd_hda_gen_path_power_filter) },
	{ 0xe4f56496, __VMLINUX_SYMBOL_STR(snd_hda_gen_init) },
	{ 0x8f3282f4, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0x53c11035, __VMLINUX_SYMBOL_STR(snd_hda_jack_set_gating_jack) },
	{ 0x92cb7ab2, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0x931904bb, __VMLINUX_SYMBOL_STR(snd_hda_override_amp_caps) },
	{ 0x9ebddb2d, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_state) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x67b70b5c, __VMLINUX_SYMBOL_STR(snd_hda_find_mixer_ctl) },
	{ 0xf8e72805, __VMLINUX_SYMBOL_STR(snd_hda_sequence_write) },
	{ 0xce50e362, __VMLINUX_SYMBOL_STR(snd_hda_ctl_add) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2af09de, __VMLINUX_SYMBOL_STR(snd_hdac_override_parm) },
	{ 0x6a404d18, __VMLINUX_SYMBOL_STR(snd_hda_bind_sw) },
	{ 0xcda4b64b, __VMLINUX_SYMBOL_STR(snd_hda_pick_pin_fixup) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb3ed5ffb, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xf2f93a0a, __VMLINUX_SYMBOL_STR(_snd_hdac_read_parm) },
	{ 0xa4b245a9, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put_beep) },
	{ 0xc4e9245d, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x57251682, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x883866e0, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x16758d91, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get_beep) },
	{ 0x7af215f6, __VMLINUX_SYMBOL_STR(snd_hdac_codec_write) },
	{ 0x6f59dee1, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pincfg) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x37ce02ef, __VMLINUX_SYMBOL_STR(snd_hda_apply_pincfgs) },
	{ 0x8636f936, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0x38ced31, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_info) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x56f4136b, __VMLINUX_SYMBOL_STR(snd_hda_gen_spec_init) },
	{ 0x7a94332a, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_info) },
	{ 0x5147a3a5, __VMLINUX_SYMBOL_STR(query_amp_caps) },
	{ 0xe37714c3, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x9ef3e833, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_controls) },
	{ 0x7be2f997, __VMLINUX_SYMBOL_STR(snd_hda_add_new_ctls) },
	{ 0x4fd35f87, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0xa064d4b8, __VMLINUX_SYMBOL_STR(snd_hda_shutup_pins) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-codec,snd-hda-core,snd";

MODULE_ALIAS("hdaudio:v10EC0221r*a01*");
MODULE_ALIAS("hdaudio:v10EC0225r*a01*");
MODULE_ALIAS("hdaudio:v10EC0231r*a01*");
MODULE_ALIAS("hdaudio:v10EC0233r*a01*");
MODULE_ALIAS("hdaudio:v10EC0235r*a01*");
MODULE_ALIAS("hdaudio:v10EC0255r*a01*");
MODULE_ALIAS("hdaudio:v10EC0256r*a01*");
MODULE_ALIAS("hdaudio:v10EC0260r*a01*");
MODULE_ALIAS("hdaudio:v10EC0262r*a01*");
MODULE_ALIAS("hdaudio:v10EC0267r*a01*");
MODULE_ALIAS("hdaudio:v10EC0268r*a01*");
MODULE_ALIAS("hdaudio:v10EC0269r*a01*");
MODULE_ALIAS("hdaudio:v10EC0270r*a01*");
MODULE_ALIAS("hdaudio:v10EC0272r*a01*");
MODULE_ALIAS("hdaudio:v10EC0275r*a01*");
MODULE_ALIAS("hdaudio:v10EC0276r*a01*");
MODULE_ALIAS("hdaudio:v10EC0280r*a01*");
MODULE_ALIAS("hdaudio:v10EC0282r*a01*");
MODULE_ALIAS("hdaudio:v10EC0283r*a01*");
MODULE_ALIAS("hdaudio:v10EC0284r*a01*");
MODULE_ALIAS("hdaudio:v10EC0285r*a01*");
MODULE_ALIAS("hdaudio:v10EC0286r*a01*");
MODULE_ALIAS("hdaudio:v10EC0288r*a01*");
MODULE_ALIAS("hdaudio:v10EC0290r*a01*");
MODULE_ALIAS("hdaudio:v10EC0292r*a01*");
MODULE_ALIAS("hdaudio:v10EC0293r*a01*");
MODULE_ALIAS("hdaudio:v10EC0298r*a01*");
MODULE_ALIAS("hdaudio:v10EC0861r00100340a01*");
MODULE_ALIAS("hdaudio:v10EC0660r*a01*");
MODULE_ALIAS("hdaudio:v10EC0861r*a01*");
MODULE_ALIAS("hdaudio:v10EC0862r*a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100002a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100300a01*");
MODULE_ALIAS("hdaudio:v10EC0663r*a01*");
MODULE_ALIAS("hdaudio:v10EC0665r*a01*");
MODULE_ALIAS("hdaudio:v10EC0667r*a01*");
MODULE_ALIAS("hdaudio:v10EC0668r*a01*");
MODULE_ALIAS("hdaudio:v10EC0670r*a01*");
MODULE_ALIAS("hdaudio:v10EC0671r*a01*");
MODULE_ALIAS("hdaudio:v10EC0680r*a01*");
MODULE_ALIAS("hdaudio:v10EC0867r*a01*");
MODULE_ALIAS("hdaudio:v10EC0880r*a01*");
MODULE_ALIAS("hdaudio:v10EC0882r*a01*");
MODULE_ALIAS("hdaudio:v10EC0883r*a01*");
MODULE_ALIAS("hdaudio:v10EC0885r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0885r00100103a01*");
MODULE_ALIAS("hdaudio:v10EC0885r*a01*");
MODULE_ALIAS("hdaudio:v10EC0887r*a01*");
MODULE_ALIAS("hdaudio:v10EC0888r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0888r*a01*");
MODULE_ALIAS("hdaudio:v10EC0889r*a01*");
MODULE_ALIAS("hdaudio:v10EC0892r*a01*");
MODULE_ALIAS("hdaudio:v10EC0899r*a01*");
MODULE_ALIAS("hdaudio:v10EC0900r*a01*");
