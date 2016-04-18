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
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x54f17d35, __VMLINUX_SYMBOL_STR(acpi_bus_unregister_driver) },
	{ 0xafc412ac, __VMLINUX_SYMBOL_STR(acpi_bus_register_driver) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x57251682, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x4352b3b6, __VMLINUX_SYMBOL_STR(__pci_hp_register) },
	{ 0x81ad6983, __VMLINUX_SYMBOL_STR(pci_find_bus) },
	{ 0x74265b1, __VMLINUX_SYMBOL_STR(backlight_device_register) },
	{ 0x879dcb22, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0x5ebb681b, __VMLINUX_SYMBOL_STR(platform_device_del) },
	{ 0x14a4e0b4, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xa89638c3, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xb33ea282, __VMLINUX_SYMBOL_STR(backlight_device_unregister) },
	{ 0x883866e0, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x8c803238, __VMLINUX_SYMBOL_STR(sparse_keymap_free) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x7ed41a18, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xe6ac5f2b, __VMLINUX_SYMBOL_STR(devm_hwmon_device_register_with_groups) },
	{ 0xb3ed5ffb, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x9e788ced, __VMLINUX_SYMBOL_STR(sparse_keymap_setup) },
	{ 0x4fd35f87, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x6de7f7ff, __VMLINUX_SYMBOL_STR(acpi_video_get_backlight_type) },
	{ 0x958c688a, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xe260d833, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x2232533c, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x8b64eff8, __VMLINUX_SYMBOL_STR(acpi_bus_get_status) },
	{ 0x81e6b37f, __VMLINUX_SYMBOL_STR(dmi_get_system_info) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x25277497, __VMLINUX_SYMBOL_STR(rfkill_register) },
	{ 0xaad6d92f, __VMLINUX_SYMBOL_STR(rfkill_init_sw_state) },
	{ 0xa22f74cc, __VMLINUX_SYMBOL_STR(rfkill_alloc) },
	{ 0xd9091363, __VMLINUX_SYMBOL_STR(acpi_install_notify_handler) },
	{ 0xa48bf824, __VMLINUX_SYMBOL_STR(pci_hp_deregister) },
	{ 0xdb68bbad, __VMLINUX_SYMBOL_STR(rfkill_destroy) },
	{ 0x83eb21c, __VMLINUX_SYMBOL_STR(rfkill_unregister) },
	{ 0x2bb55d6e, __VMLINUX_SYMBOL_STR(acpi_remove_notify_handler) },
	{ 0x2bfeb410, __VMLINUX_SYMBOL_STR(acpi_get_handle) },
	{ 0xb38e820, __VMLINUX_SYMBOL_STR(pci_bus_add_device) },
	{ 0xd2c5774c, __VMLINUX_SYMBOL_STR(pci_bus_assign_resources) },
	{ 0xeae734d8, __VMLINUX_SYMBOL_STR(pci_scan_single_device) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5790e7a0, __VMLINUX_SYMBOL_STR(pci_unlock_rescan_remove) },
	{ 0xcdd142a3, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x4ccedd1f, __VMLINUX_SYMBOL_STR(pci_stop_and_remove_bus_device) },
	{ 0xe8fa44fc, __VMLINUX_SYMBOL_STR(pci_get_slot) },
	{ 0xcd265af1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xe9d70da5, __VMLINUX_SYMBOL_STR(acpi_get_pci_dev) },
	{ 0xddbeeecc, __VMLINUX_SYMBOL_STR(pci_lock_rescan_remove) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8a490c90, __VMLINUX_SYMBOL_STR(rfkill_set_sw_state) },
	{ 0x691001b5, __VMLINUX_SYMBOL_STR(acpi_evaluate_integer) },
	{ 0x3e1f40a3, __VMLINUX_SYMBOL_STR(backlight_force_update) },
	{ 0xe0ac8bd2, __VMLINUX_SYMBOL_STR(acpi_bus_generate_netlink_event) },
	{ 0x1ae445aa, __VMLINUX_SYMBOL_STR(sparse_keymap_report_event) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x876dafc3, __VMLINUX_SYMBOL_STR(ec_write) },
	{ 0xba2d8594, __VMLINUX_SYMBOL_STR(ec_read) },
	{ 0x1de74f72, __VMLINUX_SYMBOL_STR(acpi_execute_simple_method) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xdb02a8c6, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sparse-keymap,led-class,video,rfkill";

MODULE_ALIAS("acpi*:ASUS010:*");
