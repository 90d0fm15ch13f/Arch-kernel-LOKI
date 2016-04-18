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
	{ 0x77db9009, __VMLINUX_SYMBOL_STR(usb_serial_generic_get_icount) },
	{ 0x24a7860f, __VMLINUX_SYMBOL_STR(usb_serial_generic_tiocmiwait) },
	{ 0x2691155f, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0x9d722474, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x173ad2ac, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xcf14c2f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x97868aef, __VMLINUX_SYMBOL_STR(__kfifo_alloc) },
	{ 0x3a608744, __VMLINUX_SYMBOL_STR(usb_serial_generic_close) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x25a4dd41, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xd70a2bf5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xfd1d0c6, __VMLINUX_SYMBOL_STR(usb_serial_generic_write_start) },
	{ 0xa7e1f0b4, __VMLINUX_SYMBOL_STR(usb_serial_generic_submit_read_urbs) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf2997713, __VMLINUX_SYMBOL_STR(tty_termios_hw_change) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5c97b352, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x2198f29f, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xa0d2a319, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0x95a572aa, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_flags) },
	{ 0x539c9a68, __VMLINUX_SYMBOL_STR(usb_serial_handle_sysrq_char) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial,usbcore";

MODULE_ALIAS("usb:v110Ap1250d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1251d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1410d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1450d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1451d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1618d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1658d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1613d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v110Ap1653d*dc*dsc*dp*ic*isc*ip*in*");
