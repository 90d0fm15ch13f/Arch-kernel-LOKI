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
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x14a4e0b4, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x5ebb681b, __VMLINUX_SYMBOL_STR(platform_device_del) },
	{ 0xe260d833, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xcd3f89ef, __VMLINUX_SYMBOL_STR(platform_device_add_data) },
	{ 0x879dcb22, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0x2232533c, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x19a304ba, __VMLINUX_SYMBOL_STR(usb_disabled) },
	{ 0x9fd42321, __VMLINUX_SYMBOL_STR(usb_add_gadget_udc) },
	{ 0xa86168ff, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x7f8d3818, __VMLINUX_SYMBOL_STR(sg_miter_stop) },
	{ 0xcab8c2ed, __VMLINUX_SYMBOL_STR(sg_miter_next) },
	{ 0xc3bdaf83, __VMLINUX_SYMBOL_STR(sg_miter_start) },
	{ 0x44eaa3cf, __VMLINUX_SYMBOL_STR(usb_hcd_giveback_urb) },
	{ 0xff7b2eaf, __VMLINUX_SYMBOL_STR(usb_hcd_unlink_urb_from_ep) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xdcf8f6bf, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x2055333b, __VMLINUX_SYMBOL_STR(usb_hcd_is_primary_hcd) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x737db3b0, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x31d6ecc, __VMLINUX_SYMBOL_STR(usb_hcd_link_urb_to_ep) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2d9bbb2b, __VMLINUX_SYMBOL_STR(usb_hcd_check_unlink_urb) },
	{ 0x1293d74a, __VMLINUX_SYMBOL_STR(usb_hcd_resume_root_hub) },
	{ 0xcc9006bb, __VMLINUX_SYMBOL_STR(usb_create_shared_hcd) },
	{ 0xc54cc9b2, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0x1f988a63, __VMLINUX_SYMBOL_STR(usb_create_hcd) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb2da8e0a, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0xec5ad261, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd56b5f64, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe384a102, __VMLINUX_SYMBOL_STR(usb_speed_string) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x3fdb3171, __VMLINUX_SYMBOL_STR(usb_del_gadget_udc) },
	{ 0xa78deb61, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xc1a59d86, __VMLINUX_SYMBOL_STR(usb_gadget_udc_reset) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xa4744dba, __VMLINUX_SYMBOL_STR(usb_gadget_giveback_request) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xf8d71db9, __VMLINUX_SYMBOL_STR(usb_hcd_poll_rh_status) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore,udc-core,usb-common";

