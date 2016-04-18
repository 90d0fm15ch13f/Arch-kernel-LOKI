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
	{ 0xf79af5bc, __VMLINUX_SYMBOL_STR(wusbhc_rh_start_port_reset) },
	{ 0x14d3dedc, __VMLINUX_SYMBOL_STR(wusbhc_rh_control) },
	{ 0x15446769, __VMLINUX_SYMBOL_STR(wusbhc_rh_status_data) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xd472a4ac, __VMLINUX_SYMBOL_STR(wusbhc_b_create) },
	{ 0xe4aa1687, __VMLINUX_SYMBOL_STR(device_wakeup_enable) },
	{ 0xc54cc9b2, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0x997c311a, __VMLINUX_SYMBOL_STR(wa_create) },
	{ 0x9da4582, __VMLINUX_SYMBOL_STR(wusbhc_create) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9924c496, __VMLINUX_SYMBOL_STR(__usb_get_extra_descriptor) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xe8cc681a, __VMLINUX_SYMBOL_STR(usb_get_intf) },
	{ 0x737db3b0, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x6d7db16, __VMLINUX_SYMBOL_STR(usb_init_urb) },
	{ 0xbd816f0, __VMLINUX_SYMBOL_STR(wa_process_errored_transfers_run) },
	{ 0x122f15ac, __VMLINUX_SYMBOL_STR(wa_urb_enqueue_run) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1f988a63, __VMLINUX_SYMBOL_STR(usb_create_hcd) },
	{ 0x9042a893, __VMLINUX_SYMBOL_STR(wa_dti_start) },
	{ 0x84e80a1e, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfe2e17d7, __VMLINUX_SYMBOL_STR(wusb_et_name) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x6a3f5477, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xbb6bf5e, __VMLINUX_SYMBOL_STR(wusb_cluster_id_get) },
	{ 0x5c97b352, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xb725d128, __VMLINUX_SYMBOL_STR(wusb_cluster_id_put) },
	{ 0x75f8aee7, __VMLINUX_SYMBOL_STR(usb_get_current_frame_number) },
	{ 0x791f97cb, __VMLINUX_SYMBOL_STR(wa_urb_enqueue) },
	{ 0xc7939e2a, __VMLINUX_SYMBOL_STR(wa_urb_dequeue) },
	{ 0x53c35538, __VMLINUX_SYMBOL_STR(rpipe_ep_disable) },
	{ 0xb2da8e0a, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0xec5ad261, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0xf41149cb, __VMLINUX_SYMBOL_STR(wusbhc_b_destroy) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa86168ff, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x84bb0969, __VMLINUX_SYMBOL_STR(usb_put_intf) },
	{ 0x4f81edc0, __VMLINUX_SYMBOL_STR(uwb_rc_put) },
	{ 0x309086ca, __VMLINUX_SYMBOL_STR(wusbhc_destroy) },
	{ 0xfe03455e, __VMLINUX_SYMBOL_STR(__wa_destroy) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wusbcore,usbcore,wusb-wa,uwb";

MODULE_ALIAS("usb:v13DCp5310d*dc*dsc*dp*icE0isc02ip01in*");
MODULE_ALIAS("usb:v13DCp5611d*dc*dsc*dp*icE0isc02ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc02ip01in*");
