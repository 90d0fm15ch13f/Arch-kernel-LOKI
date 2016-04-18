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
	{ 0x24a94b26, __VMLINUX_SYMBOL_STR(snd_info_get_line) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf06b5c47, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable) },
	{ 0xaadfc33f, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_prepare) },
	{ 0xc4b33c76, __VMLINUX_SYMBOL_STR(snd_hdac_codec_read) },
	{ 0x6d8efbba, __VMLINUX_SYMBOL_STR(snd_hdac_i915_exit) },
	{ 0x9a8e1877, __VMLINUX_SYMBOL_STR(snd_array_free) },
	{ 0x598ee473, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_step) },
	{ 0x781d6c90, __VMLINUX_SYMBOL_STR(snd_device_free) },
	{ 0xbe7dd7dc, __VMLINUX_SYMBOL_STR(snd_array_new) },
	{ 0x914ffd01, __VMLINUX_SYMBOL_STR(snd_info_create_card_entry) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xeda3a721, __VMLINUX_SYMBOL_STR(snd_print_pcm_bits) },
	{ 0x97f58926, __VMLINUX_SYMBOL_STR(snd_hdac_get_sub_nodes) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9e913c1, __VMLINUX_SYMBOL_STR(snd_pcm_alt_chmaps) },
	{ 0x8acebd68, __VMLINUX_SYMBOL_STR(snd_hda_override_conn_list) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2c263b81, __VMLINUX_SYMBOL_STR(snd_hda_spdif_ctls_unassign) },
	{ 0x7a61ab81, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable_callback) },
	{ 0xa9173f34, __VMLINUX_SYMBOL_STR(snd_hdac_check_power_state) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x5419d954, __VMLINUX_SYMBOL_STR(snd_hdac_acomp_get_eld) },
	{ 0xa2e57ffb, __VMLINUX_SYMBOL_STR(snd_hda_pin_sense) },
	{ 0x4cdf4adf, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_write_raw) },
	{ 0x1288c37d, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x2e2b40d2, __VMLINUX_SYMBOL_STR(strncat) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xeccd55f7, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_power_to_all) },
	{ 0x3c13c50d, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_add_vendor_verb) },
	{ 0xcca5e171, __VMLINUX_SYMBOL_STR(snd_ctl_notify) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8b4433b0, __VMLINUX_SYMBOL_STR(snd_hdac_power_down_pm) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x14a2ded2, __VMLINUX_SYMBOL_STR(snd_jack_new) },
	{ 0x87f360aa, __VMLINUX_SYMBOL_STR(snd_hda_spdif_ctls_assign) },
	{ 0x2b96b5fd, __VMLINUX_SYMBOL_STR(is_jack_detectable) },
	{ 0x92cb7ab2, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0xdd42b4a6, __VMLINUX_SYMBOL_STR(snd_hda_spdif_out_of_nid) },
	{ 0x747aacef, __VMLINUX_SYMBOL_STR(snd_hda_jack_tbl_get) },
	{ 0xf8e72805, __VMLINUX_SYMBOL_STR(snd_hda_sequence_write) },
	{ 0xce50e362, __VMLINUX_SYMBOL_STR(snd_hda_ctl_add) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x7fe25ece, __VMLINUX_SYMBOL_STR(snd_hdac_i915_register_notifier) },
	{ 0xf8a39c42, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_close) },
	{ 0xa470adba, __VMLINUX_SYMBOL_STR(snd_hda_create_dig_out_ctls) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf2f93a0a, __VMLINUX_SYMBOL_STR(_snd_hdac_read_parm) },
	{ 0xc4e9245d, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x8081e3b5, __VMLINUX_SYMBOL_STR(snd_hda_codec_update_widgets) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xba387b39, __VMLINUX_SYMBOL_STR(__snd_hda_codec_cleanup_stream) },
	{ 0xeeee0ab6, __VMLINUX_SYMBOL_STR(snd_hda_codec_pcm_new) },
	{ 0x6f31c3cd, __VMLINUX_SYMBOL_STR(snd_hda_jack_add_kctl) },
	{ 0xcaf3312e, __VMLINUX_SYMBOL_STR(snd_hdac_query_supported_pcm) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb83d4ad7, __VMLINUX_SYMBOL_STR(snd_info_free_entry) },
	{ 0x7baa537c, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_open) },
	{ 0xc246c64b, __VMLINUX_SYMBOL_STR(snd_hda_jack_tbl_get_from_tag) },
	{ 0x7af215f6, __VMLINUX_SYMBOL_STR(snd_hdac_codec_write) },
	{ 0x6f59dee1, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pincfg) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8636f936, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0x89868aff, __VMLINUX_SYMBOL_STR(snd_pcm_add_chmap_ctls) },
	{ 0x9b6d5e8a, __VMLINUX_SYMBOL_STR(snd_hda_codec_setup_stream) },
	{ 0x14018f08, __VMLINUX_SYMBOL_STR(snd_jack_report) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xc064e8b6, __VMLINUX_SYMBOL_STR(snd_hda_jack_set_dirty_all) },
	{ 0x812f654a, __VMLINUX_SYMBOL_STR(snd_hda_jack_report_sync) },
	{ 0xe37714c3, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0xc40550a0, __VMLINUX_SYMBOL_STR(snd_hdac_sync_audio_rate) },
	{ 0x52accb8b, __VMLINUX_SYMBOL_STR(snd_hdac_power_up_pm) },
	{ 0x7a04983e, __VMLINUX_SYMBOL_STR(snd_hda_get_connections) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd,snd-hda-codec,snd-hda-core,snd-pcm";

MODULE_ALIAS("hdaudio:v1002793Cr*a01*");
MODULE_ALIAS("hdaudio:v10027919r*a01*");
MODULE_ALIAS("hdaudio:v1002791Ar*a01*");
MODULE_ALIAS("hdaudio:v1002AA01r*a01*");
MODULE_ALIAS("hdaudio:v10951390r*a01*");
MODULE_ALIAS("hdaudio:v10951392r*a01*");
MODULE_ALIAS("hdaudio:v17E80047r*a01*");
MODULE_ALIAS("hdaudio:v10DE0002r*a01*");
MODULE_ALIAS("hdaudio:v10DE0003r*a01*");
MODULE_ALIAS("hdaudio:v10DE0005r*a01*");
MODULE_ALIAS("hdaudio:v10DE0006r*a01*");
MODULE_ALIAS("hdaudio:v10DE0007r*a01*");
MODULE_ALIAS("hdaudio:v10DE000Ar*a01*");
MODULE_ALIAS("hdaudio:v10DE000Br*a01*");
MODULE_ALIAS("hdaudio:v10DE000Cr*a01*");
MODULE_ALIAS("hdaudio:v10DE000Dr*a01*");
MODULE_ALIAS("hdaudio:v10DE0010r*a01*");
MODULE_ALIAS("hdaudio:v10DE0011r*a01*");
MODULE_ALIAS("hdaudio:v10DE0012r*a01*");
MODULE_ALIAS("hdaudio:v10DE0013r*a01*");
MODULE_ALIAS("hdaudio:v10DE0014r*a01*");
MODULE_ALIAS("hdaudio:v10DE0015r*a01*");
MODULE_ALIAS("hdaudio:v10DE0016r*a01*");
MODULE_ALIAS("hdaudio:v10DE0018r*a01*");
MODULE_ALIAS("hdaudio:v10DE0019r*a01*");
MODULE_ALIAS("hdaudio:v10DE001Ar*a01*");
MODULE_ALIAS("hdaudio:v10DE001Br*a01*");
MODULE_ALIAS("hdaudio:v10DE001Cr*a01*");
MODULE_ALIAS("hdaudio:v10DE0020r*a01*");
MODULE_ALIAS("hdaudio:v10DE0022r*a01*");
MODULE_ALIAS("hdaudio:v10DE0028r*a01*");
MODULE_ALIAS("hdaudio:v10DE0029r*a01*");
MODULE_ALIAS("hdaudio:v10DE0040r*a01*");
MODULE_ALIAS("hdaudio:v10DE0041r*a01*");
MODULE_ALIAS("hdaudio:v10DE0042r*a01*");
MODULE_ALIAS("hdaudio:v10DE0043r*a01*");
MODULE_ALIAS("hdaudio:v10DE0044r*a01*");
MODULE_ALIAS("hdaudio:v10DE0051r*a01*");
MODULE_ALIAS("hdaudio:v10DE0060r*a01*");
MODULE_ALIAS("hdaudio:v10DE0067r*a01*");
MODULE_ALIAS("hdaudio:v10DE0070r*a01*");
MODULE_ALIAS("hdaudio:v10DE0071r*a01*");
MODULE_ALIAS("hdaudio:v10DE0072r*a01*");
MODULE_ALIAS("hdaudio:v10DE007Dr*a01*");
MODULE_ALIAS("hdaudio:v10DE0082r*a01*");
MODULE_ALIAS("hdaudio:v10DE0083r*a01*");
MODULE_ALIAS("hdaudio:v10DE8001r*a01*");
MODULE_ALIAS("hdaudio:v11069F80r*a01*");
MODULE_ALIAS("hdaudio:v11069F81r*a01*");
MODULE_ALIAS("hdaudio:v11069F84r*a01*");
MODULE_ALIAS("hdaudio:v11069F85r*a01*");
MODULE_ALIAS("hdaudio:v80860054r*a01*");
MODULE_ALIAS("hdaudio:v80862801r*a01*");
MODULE_ALIAS("hdaudio:v80862802r*a01*");
MODULE_ALIAS("hdaudio:v80862803r*a01*");
MODULE_ALIAS("hdaudio:v80862804r*a01*");
MODULE_ALIAS("hdaudio:v80862805r*a01*");
MODULE_ALIAS("hdaudio:v80862806r*a01*");
MODULE_ALIAS("hdaudio:v80862807r*a01*");
MODULE_ALIAS("hdaudio:v80862808r*a01*");
MODULE_ALIAS("hdaudio:v80862809r*a01*");
MODULE_ALIAS("hdaudio:v8086280Ar*a01*");
MODULE_ALIAS("hdaudio:v8086280Br*a01*");
MODULE_ALIAS("hdaudio:v80862880r*a01*");
MODULE_ALIAS("hdaudio:v80862882r*a01*");
MODULE_ALIAS("hdaudio:v80862883r*a01*");
MODULE_ALIAS("hdaudio:v808629FBr*a01*");
MODULE_ALIAS("hdaudio:v00000101r*a01*");
