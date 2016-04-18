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
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xf4b8c0e8, __VMLINUX_SYMBOL_STR(v4l2_event_subdev_unsubscribe) },
	{ 0xb1181af, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x8b705af2, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x5bf891d1, __VMLINUX_SYMBOL_STR(media_entity_pads_init) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x7438d68e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu) },
	{ 0x85e3e31b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_custom) },
	{ 0x836a4033, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x888dcdf4, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xaa0684fb, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xbad40823, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0xf2b859f6, __VMLINUX_SYMBOL_STR(i2c_new_dummy) },
	{ 0xa301747d, __VMLINUX_SYMBOL_STR(v4l2_subdev_notify_event) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x4103badb, __VMLINUX_SYMBOL_STR(v4l2_print_dv_timings) },
	{ 0x6f344bb9, __VMLINUX_SYMBOL_STR(v4l2_calc_aspect_ratio) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x468937ed, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x455725fc, __VMLINUX_SYMBOL_STR(v4l2_device_unregister_subdev) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xdb3bcca6, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x33144395, __VMLINUX_SYMBOL_STR(__v4l2_ctrl_s_ctrl) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x793c93af, __VMLINUX_SYMBOL_STR(v4l2_ctrl_g_ctrl) },
	{ 0x5a3f1dc6, __VMLINUX_SYMBOL_STR(hdmi_infoframe_log) },
	{ 0x55d481c9, __VMLINUX_SYMBOL_STR(hdmi_infoframe_unpack) },
	{ 0x15ed7e9a, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subdev_subscribe_event) },
	{ 0x8c7b4387, __VMLINUX_SYMBOL_STR(v4l2_src_change_event_subdev_subscribe) },
	{ 0xf98d0f9d, __VMLINUX_SYMBOL_STR(v4l2_detect_gtf) },
	{ 0xae15a915, __VMLINUX_SYMBOL_STR(v4l2_detect_cvt) },
	{ 0xdfa5a008, __VMLINUX_SYMBOL_STR(v4l2_valid_dv_timings) },
	{ 0xb0891da2, __VMLINUX_SYMBOL_STR(v4l2_dv_timings_presets) },
	{ 0xf0e1988c, __VMLINUX_SYMBOL_STR(v4l2_find_dv_timings_cap) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x363ad524, __VMLINUX_SYMBOL_STR(v4l2_match_dv_timings) },
	{ 0x5491c182, __VMLINUX_SYMBOL_STR(v4l2_enum_dv_timings_cap) },
	{ 0xa0dd51ff, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6ec1abd6, __VMLINUX_SYMBOL_STR(i2c_smbus_xfer) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,media,v4l2-common,v4l2-dv-timings";

MODULE_ALIAS("i2c:adv7842");
