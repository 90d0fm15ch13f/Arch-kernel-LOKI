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
	{ 0xca62b868, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x3369cba9, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xd2dc9b40, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xd2669c41, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x84ac7241, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x70c7b78e, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x896fb485, __VMLINUX_SYMBOL_STR(si476x_core_cmd_agc_status) },
	{ 0x5b07d4b9, __VMLINUX_SYMBOL_STR(si476x_core_cmd_fm_acf_status) },
	{ 0xae6fa9fe, __VMLINUX_SYMBOL_STR(si476x_core_cmd_fm_phase_div_status) },
	{ 0x77f9aa84, __VMLINUX_SYMBOL_STR(si476x_core_cmd_fm_rds_blockcount) },
	{ 0xb33b0b8e, __VMLINUX_SYMBOL_STR(si476x_core_cmd_fm_rsq_status) },
	{ 0x2dd79fb9, __VMLINUX_SYMBOL_STR(si476x_core_cmd_fm_seek_start) },
	{ 0xa09de8fa, __VMLINUX_SYMBOL_STR(si476x_core_cmd_fm_tune_freq) },
	{ 0xcf35507e, __VMLINUX_SYMBOL_STR(si476x_core_cmd_am_acf_status) },
	{ 0xcaa2ae9c, __VMLINUX_SYMBOL_STR(si476x_core_cmd_am_rsq_status) },
	{ 0x562fbbec, __VMLINUX_SYMBOL_STR(si476x_core_cmd_am_seek_start) },
	{ 0xd7455c3a, __VMLINUX_SYMBOL_STR(si476x_core_cmd_am_tune_freq) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xbad40823, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x8fbd2922, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xe3ec4df, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x87d82270, __VMLINUX_SYMBOL_STR(si476x_core_start) },
	{ 0xdc079a4f, __VMLINUX_SYMBOL_STR(si476x_core_stop) },
	{ 0xa940c984, __VMLINUX_SYMBOL_STR(si476x_core_cmd_fm_phase_diversity) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xae05d1ee, __VMLINUX_SYMBOL_STR(regcache_sync_region) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x16c745d, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xa56e18e4, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xeae2cb29, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x836a4033, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x7438d68e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu) },
	{ 0x888dcdf4, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x57c9a5f0, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x44130853, __VMLINUX_SYMBOL_STR(v4l2_device_set_name) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x85e3e31b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_custom) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x4578f528, __VMLINUX_SYMBOL_STR(__kfifo_to_user) },
	{ 0xa08727e7, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0xe1d76b32, __VMLINUX_SYMBOL_STR(si476x_core_set_power_state) },
	{ 0x40110c6e, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x998d5c2, __VMLINUX_SYMBOL_STR(v4l2_fh_is_singular) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3cf5840d, __VMLINUX_SYMBOL_STR(si476x_core_is_a_primary_tuner) },
	{ 0xc91c8a22, __VMLINUX_SYMBOL_STR(si476x_core_has_am) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xa4121462, __VMLINUX_SYMBOL_STR(si476x_core_is_a_secondary_tuner) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2974e6b2, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x917f9921, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
	{ 0x4b3a5c42, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x9cda9e23, __VMLINUX_SYMBOL_STR(si476x_core_cmd_fm_rds_status) },
	{ 0xfe6478aa, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xc773202, __VMLINUX_SYMBOL_STR(si476x_core_is_in_am_receiver_mode) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x52869790, __VMLINUX_SYMBOL_STR(si476x_core_has_diversity) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xce53df1d, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xa33e8b13, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xb59704da, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x468937ed, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,si476x-core";

