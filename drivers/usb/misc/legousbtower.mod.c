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
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x9651f7ff, __VMLINUX_SYMBOL_STR(usb_register_dev) },
	{ 0x25a4dd41, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd70a2bf5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9f515ac5, __VMLINUX_SYMBOL_STR(usb_deregister_dev) },
	{ 0x6a3f5477, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x84e80a1e, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x5c97b352, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf1fa7158, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbf0dee21, __VMLINUX_SYMBOL_STR(usb_find_interface) },
	{ 0x6fa9799d, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore";

MODULE_ALIAS("usb:v0694p0001d*dc*dsc*dp*ic*isc*ip*in*");