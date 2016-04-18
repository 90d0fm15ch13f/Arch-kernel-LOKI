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
	{ 0xbd7942e8, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x6a44369d, __VMLINUX_SYMBOL_STR(component_add) },
	{ 0xb1181af, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xd13aedd3, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_reset) },
	{ 0xee0ad904, __VMLINUX_SYMBOL_STR(drm_helper_probe_single_connector_modes) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xcb936989, __VMLINUX_SYMBOL_STR(hdmi_infoframe_pack) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4318d5b4, __VMLINUX_SYMBOL_STR(drm_kms_helper_hotplug_event) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x6ba61e6a, __VMLINUX_SYMBOL_STR(drm_encoder_init) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x702a6e64, __VMLINUX_SYMBOL_STR(drm_connector_cleanup) },
	{ 0x639d28de, __VMLINUX_SYMBOL_STR(drm_do_get_edid) },
	{ 0x2536bc5a, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_duplicate_state) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1beb4114, __VMLINUX_SYMBOL_STR(drm_helper_connector_dpms) },
	{ 0xf2b859f6, __VMLINUX_SYMBOL_STR(i2c_new_dummy) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x672f6cee, __VMLINUX_SYMBOL_STR(drm_mode_connector_attach_encoder) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe60aab89, __VMLINUX_SYMBOL_STR(irq_get_irq_data) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x8aa778d0, __VMLINUX_SYMBOL_STR(drm_add_edid_modes) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xa0dd51ff, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x5c15bab1, __VMLINUX_SYMBOL_STR(drm_connector_init) },
	{ 0x47dc8aa8, __VMLINUX_SYMBOL_STR(drm_mode_connector_update_edid_property) },
	{ 0x8b705af2, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x20645642, __VMLINUX_SYMBOL_STR(drm_debug) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x6c3d728d, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_destroy_state) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x1a770ac3, __VMLINUX_SYMBOL_STR(drm_detect_hdmi_monitor) },
	{ 0xec69a089, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x23b5a32f, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_dpms) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x970c4501, __VMLINUX_SYMBOL_STR(drm_connector_unregister) },
	{ 0x60cd4b4f, __VMLINUX_SYMBOL_STR(drm_encoder_cleanup) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4d96163f, __VMLINUX_SYMBOL_STR(drm_hdmi_avi_infoframe_from_display_mode) },
	{ 0xcafa7d5d, __VMLINUX_SYMBOL_STR(component_del) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf5c2d34d, __VMLINUX_SYMBOL_STR(hdmi_audio_infoframe_init) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xc360e7e2, __VMLINUX_SYMBOL_STR(drm_ut_debug_printk) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x3e4a4621, __VMLINUX_SYMBOL_STR(drm_connector_register) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm_kms_helper,drm";

MODULE_ALIAS("i2c:tda998x");
