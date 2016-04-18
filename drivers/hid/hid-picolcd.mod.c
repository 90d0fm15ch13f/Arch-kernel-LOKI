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
	{ 0xa78deb61, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x42a25e97, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0x7129e5f8, __VMLINUX_SYMBOL_STR(hex_asc) },
	{ 0xb38cc013, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x897792e3, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x3386efc1, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xdeae2349, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0x7ed41a18, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0xb97785f1, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xe8101219, __VMLINUX_SYMBOL_STR(fb_sys_read) },
	{ 0x74265b1, __VMLINUX_SYMBOL_STR(backlight_device_register) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xa1cf306a, __VMLINUX_SYMBOL_STR(__hid_request) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x16c745d, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x8348eb15, __VMLINUX_SYMBOL_STR(sys_copyarea) },
	{ 0x8e9ddd80, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xa17e6d0a, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x89733a7f, __VMLINUX_SYMBOL_STR(hid_debug_event) },
	{ 0x5495392, __VMLINUX_SYMBOL_STR(hid_debug) },
	{ 0x42c00678, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd805a922, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x8ac9bd71, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0x4a4fd348, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x65e8a892, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0xbcbe0ae2, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc7f1212d, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0xc6b501d1, __VMLINUX_SYMBOL_STR(lcd_device_unregister) },
	{ 0x84c88379, __VMLINUX_SYMBOL_STR(hid_set_field) },
	{ 0x84ac7241, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0xdcf8f6bf, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x47082821, __VMLINUX_SYMBOL_STR(hid_alloc_report_buf) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xc16b4743, __VMLINUX_SYMBOL_STR(sys_fillrect) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb3ed5ffb, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x15f98235, __VMLINUX_SYMBOL_STR(sys_imageblit) },
	{ 0xc21d019, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0xa31c26f4, __VMLINUX_SYMBOL_STR(fb_sys_write) },
	{ 0x57251682, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x878cd015, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x846a4eda, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0x8b65b399, __VMLINUX_SYMBOL_STR(fb_deferred_io_cleanup) },
	{ 0x6fd3e55e, __VMLINUX_SYMBOL_STR(fb_deferred_io_init) },
	{ 0xdb02a8c6, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xf1230fcf, __VMLINUX_SYMBOL_STR(lcd_device_register) },
	{ 0x723b74aa, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x883866e0, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x7c49c773, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0x3a3b142e, __VMLINUX_SYMBOL_STR(ir_raw_event_store) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x2f31b3ec, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xb33ea282, __VMLINUX_SYMBOL_STR(backlight_device_unregister) },
	{ 0x60d1ccca, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0xbd7554d5, __VMLINUX_SYMBOL_STR(hid_output_report) },
	{ 0x4fd35f87, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x1bb67b39, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core,hid,led-class,fb_sys_fops,syscopyarea,lcd,sysfillrect,sysimgblt";

MODULE_ALIAS("hid:b0003g*v000004D8p0000C002");
MODULE_ALIAS("hid:b0003g*v000004D8p0000F002");
