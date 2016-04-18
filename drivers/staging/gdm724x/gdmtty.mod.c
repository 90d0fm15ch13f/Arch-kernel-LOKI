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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5e862211, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x72100f33, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x64d04588, __VMLINUX_SYMBOL_STR(tty_port_open) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x7c5c200d, __VMLINUX_SYMBOL_STR(tty_port_hangup) },
	{ 0x6a3f5477, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xa82845bf, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc7a9efe8, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x293cbcdd, __VMLINUX_SYMBOL_STR(tty_buffer_request_room) },
	{ 0x88a33d46, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe40527cb, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x1dbe5493, __VMLINUX_SYMBOL_STR(tty_port_put) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x76077512, __VMLINUX_SYMBOL_STR(tty_port_close) },
	{ 0xdb3bcca6, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4c108669, __VMLINUX_SYMBOL_STR(tty_port_register_device) },
	{ 0x5c97b352, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x7a728571, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0xa0d2a319, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xa51126b9, __VMLINUX_SYMBOL_STR(tty_vhangup) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x80824774, __VMLINUX_SYMBOL_STR(tty_port_tty_wakeup) },
	{ 0x5f50abad, __VMLINUX_SYMBOL_STR(tty_unregister_device) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x84e80a1e, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0x737db3b0, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xa86168ff, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x9d7cd5ad, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0xf2d376b0, __VMLINUX_SYMBOL_STR(tty_standard_install) },
	{ 0x4e17dc14, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x2c2d8bd6, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0x2198f29f, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd70a2bf5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x12c0fda4, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x25a4dd41, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore";

MODULE_ALIAS("usb:v1076p8000d*dc*dsc*dp*ic02isc02ip*in*");
MODULE_ALIAS("usb:v1076p8F00d*dc*dsc*dp*ic02isc02ip*in*");
MODULE_ALIAS("usb:v1076p9000d*dc*dsc*dp*ic02isc02ip*in*");
MODULE_ALIAS("usb:v1D74p2300d*dc*dsc*dp*ic02isc02ip*in*");
