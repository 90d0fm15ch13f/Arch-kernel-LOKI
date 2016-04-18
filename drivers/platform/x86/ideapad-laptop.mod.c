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
	{ 0xb97785f1, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x8e9ddd80, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x723b74aa, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x74265b1, __VMLINUX_SYMBOL_STR(backlight_device_register) },
	{ 0x57251682, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x3ecf6cfc, __VMLINUX_SYMBOL_STR(wmi_install_notify_handler) },
	{ 0x25277497, __VMLINUX_SYMBOL_STR(rfkill_register) },
	{ 0xaad6d92f, __VMLINUX_SYMBOL_STR(rfkill_init_sw_state) },
	{ 0xa22f74cc, __VMLINUX_SYMBOL_STR(rfkill_alloc) },
	{ 0xd9091363, __VMLINUX_SYMBOL_STR(acpi_install_notify_handler) },
	{ 0x6de7f7ff, __VMLINUX_SYMBOL_STR(acpi_video_get_backlight_type) },
	{ 0xb3ed5ffb, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x9e788ced, __VMLINUX_SYMBOL_STR(sparse_keymap_setup) },
	{ 0x4fd35f87, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x16c745d, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xa56e18e4, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x958c688a, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8f45676b, __VMLINUX_SYMBOL_STR(acpi_bus_get_device) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x3e1f40a3, __VMLINUX_SYMBOL_STR(backlight_force_update) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x3386efc1, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xa89638c3, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xce53df1d, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x883866e0, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x8c803238, __VMLINUX_SYMBOL_STR(sparse_keymap_free) },
	{ 0xdb68bbad, __VMLINUX_SYMBOL_STR(rfkill_destroy) },
	{ 0x83eb21c, __VMLINUX_SYMBOL_STR(rfkill_unregister) },
	{ 0xb33ea282, __VMLINUX_SYMBOL_STR(backlight_device_unregister) },
	{ 0x2bb55d6e, __VMLINUX_SYMBOL_STR(acpi_remove_notify_handler) },
	{ 0xb5a6ebe2, __VMLINUX_SYMBOL_STR(wmi_remove_notify_handler) },
	{ 0x1ae445aa, __VMLINUX_SYMBOL_STR(sparse_keymap_report_event) },
	{ 0x4fdee897, __VMLINUX_SYMBOL_STR(i8042_command) },
	{ 0x97999817, __VMLINUX_SYMBOL_STR(rfkill_set_hw_state) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x691001b5, __VMLINUX_SYMBOL_STR(acpi_evaluate_integer) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x44a81d5f, __VMLINUX_SYMBOL_STR(acpi_evaluate_object) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wmi,rfkill,video,sparse-keymap,i8042";

MODULE_ALIAS("acpi*:VPC2004:*");
