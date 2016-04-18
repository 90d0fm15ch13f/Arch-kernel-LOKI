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
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2691155f, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0x9d722474, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xfe632894, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x173ad2ac, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xcf14c2f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x49aafb02, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0xf1fa7158, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xdcf8f6bf, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xa78deb61, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6a3f5477, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x1eec8479, __VMLINUX_SYMBOL_STR(tty_encode_baud_rate) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5c97b352, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x2198f29f, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xa0d2a319, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0x2c2d8bd6, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0x72100f33, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0x93f1d19a, __VMLINUX_SYMBOL_STR(tty_wakeup) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0x84e80a1e, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial,usbcore";

MODULE_ALIAS("usb:v1608p0215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0241d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0305d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0306d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p030Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p030Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p030Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0205d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p021Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0207d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p020Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p020Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0217d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0206d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p021Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p021Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p021Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p021Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0242d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0244d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0243d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0212d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0247d*dc*dsc*dp*ic*isc*ip*in*");
