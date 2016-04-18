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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x29a13841, __VMLINUX_SYMBOL_STR(snd_hda_codec_load_dsp_prepare) },
	{ 0xaadfc33f, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_prepare) },
	{ 0x2b0cdda1, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_put) },
	{ 0xc4b33c76, __VMLINUX_SYMBOL_STR(snd_hdac_codec_read) },
	{ 0x1600a531, __VMLINUX_SYMBOL_STR(snd_hda_codec_amp_stereo) },
	{ 0x9827e63, __VMLINUX_SYMBOL_STR(snd_hda_codec_load_dsp_trigger) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x38a5e384, __VMLINUX_SYMBOL_STR(snd_pci_quirk_lookup) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x33a88eb3, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_tlv) },
	{ 0xabc1c037, __VMLINUX_SYMBOL_STR(snd_hda_jack_add_kctls) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x865c36f0, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x521403ba, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put) },
	{ 0x7a61ab81, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable_callback) },
	{ 0xa311b266, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_get) },
	{ 0x8dc44e03, __VMLINUX_SYMBOL_STR(_snd_hda_set_pin_ctl) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xda096c7d, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get) },
	{ 0x8b4433b0, __VMLINUX_SYMBOL_STR(snd_hdac_power_down_pm) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7b20b150, __VMLINUX_SYMBOL_STR(snd_hda_create_spdif_in_ctls) },
	{ 0x8f3282f4, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0x92cb7ab2, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0x931904bb, __VMLINUX_SYMBOL_STR(snd_hda_override_amp_caps) },
	{ 0xdd9a804a, __VMLINUX_SYMBOL_STR(snd_hdac_calc_stream_format) },
	{ 0x9ebddb2d, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_state) },
	{ 0x747aacef, __VMLINUX_SYMBOL_STR(snd_hda_jack_tbl_get) },
	{ 0xf8e72805, __VMLINUX_SYMBOL_STR(snd_hda_sequence_write) },
	{ 0xb4e4fea0, __VMLINUX_SYMBOL_STR(snd_hda_create_spdif_share_sw) },
	{ 0xce50e362, __VMLINUX_SYMBOL_STR(snd_hda_ctl_add) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf8a39c42, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_close) },
	{ 0xa470adba, __VMLINUX_SYMBOL_STR(snd_hda_create_dig_out_ctls) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf2f93a0a, __VMLINUX_SYMBOL_STR(_snd_hdac_read_parm) },
	{ 0xc4e9245d, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x8081e3b5, __VMLINUX_SYMBOL_STR(snd_hda_codec_update_widgets) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xa1b87dca, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_cleanup) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xba387b39, __VMLINUX_SYMBOL_STR(__snd_hda_codec_cleanup_stream) },
	{ 0xeeee0ab6, __VMLINUX_SYMBOL_STR(snd_hda_codec_pcm_new) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7baa537c, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_open) },
	{ 0x7af215f6, __VMLINUX_SYMBOL_STR(snd_hdac_codec_write) },
	{ 0xcf14c2f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x37ce02ef, __VMLINUX_SYMBOL_STR(snd_hda_apply_pincfgs) },
	{ 0x8636f936, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0x38ced31, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_info) },
	{ 0xbf942760, __VMLINUX_SYMBOL_STR(snd_hdac_power_down) },
	{ 0x9b6d5e8a, __VMLINUX_SYMBOL_STR(snd_hda_codec_setup_stream) },
	{ 0xc5d123e6, __VMLINUX_SYMBOL_STR(snd_hda_codec_load_dsp_cleanup) },
	{ 0x7a94332a, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_info) },
	{ 0x812f654a, __VMLINUX_SYMBOL_STR(snd_hda_jack_report_sync) },
	{ 0x173ad2ac, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x52accb8b, __VMLINUX_SYMBOL_STR(snd_hdac_power_up_pm) },
	{ 0x7be2f997, __VMLINUX_SYMBOL_STR(snd_hda_add_new_ctls) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x6d396d32, __VMLINUX_SYMBOL_STR(snd_hda_codec_amp_update) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-core,snd-hda-codec,snd";

MODULE_ALIAS("hdaudio:v11020011r*a01*");
