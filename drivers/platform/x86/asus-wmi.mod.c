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
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x8a490c90, __VMLINUX_SYMBOL_STR(rfkill_set_sw_state) },
	{ 0xeae734d8, __VMLINUX_SYMBOL_STR(pci_scan_single_device) },
	{ 0x29d223f8, __VMLINUX_SYMBOL_STR(hwmon_device_register_with_groups) },
	{ 0xa56e18e4, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x2bb55d6e, __VMLINUX_SYMBOL_STR(acpi_remove_notify_handler) },
	{ 0x3386efc1, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x7ed41a18, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0xd9091363, __VMLINUX_SYMBOL_STR(acpi_install_notify_handler) },
	{ 0x4ccedd1f, __VMLINUX_SYMBOL_STR(pci_stop_and_remove_bus_device) },
	{ 0xb97785f1, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xe8fa44fc, __VMLINUX_SYMBOL_STR(pci_get_slot) },
	{ 0x9cab34a6, __VMLINUX_SYMBOL_STR(rfkill_set_led_trigger_name) },
	{ 0x74265b1, __VMLINUX_SYMBOL_STR(backlight_device_register) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x5790e7a0, __VMLINUX_SYMBOL_STR(pci_unlock_rescan_remove) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb10cf5cc, __VMLINUX_SYMBOL_STR(debugfs_create_x32) },
	{ 0x25277497, __VMLINUX_SYMBOL_STR(rfkill_register) },
	{ 0xd2c5774c, __VMLINUX_SYMBOL_STR(pci_bus_assign_resources) },
	{ 0x16c745d, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x4352b3b6, __VMLINUX_SYMBOL_STR(__pci_hp_register) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xce53df1d, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x8e9ddd80, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xa89638c3, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xa48bf824, __VMLINUX_SYMBOL_STR(pci_hp_deregister) },
	{ 0x9e788ced, __VMLINUX_SYMBOL_STR(sparse_keymap_setup) },
	{ 0x1ae445aa, __VMLINUX_SYMBOL_STR(sparse_keymap_report_event) },
	{ 0xa22f74cc, __VMLINUX_SYMBOL_STR(rfkill_alloc) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x958c688a, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x3ecf6cfc, __VMLINUX_SYMBOL_STR(wmi_install_notify_handler) },
	{ 0xe92ca535, __VMLINUX_SYMBOL_STR(acpi_video_set_dmi_backlight_type) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xc9d4d6d1, __VMLINUX_SYMBOL_STR(wmi_has_guid) },
	{ 0x14a4e0b4, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x81ad6983, __VMLINUX_SYMBOL_STR(pci_find_bus) },
	{ 0x6de7f7ff, __VMLINUX_SYMBOL_STR(acpi_video_get_backlight_type) },
	{ 0x2bfeb410, __VMLINUX_SYMBOL_STR(acpi_get_handle) },
	{ 0x561c634a, __VMLINUX_SYMBOL_STR(wmi_evaluate_method) },
	{ 0xaad6d92f, __VMLINUX_SYMBOL_STR(rfkill_init_sw_state) },
	{ 0xcd265af1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb3ed5ffb, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x6daaaebe, __VMLINUX_SYMBOL_STR(__platform_create_bundle) },
	{ 0x57251682, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xddbeeecc, __VMLINUX_SYMBOL_STR(pci_lock_rescan_remove) },
	{ 0xdb02a8c6, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x723b74aa, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69ad2f20, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0xdb68bbad, __VMLINUX_SYMBOL_STR(rfkill_destroy) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x883866e0, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xcdd142a3, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xb5a6ebe2, __VMLINUX_SYMBOL_STR(wmi_remove_notify_handler) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x3e1f40a3, __VMLINUX_SYMBOL_STR(backlight_force_update) },
	{ 0x83eb21c, __VMLINUX_SYMBOL_STR(rfkill_unregister) },
	{ 0xb33ea282, __VMLINUX_SYMBOL_STR(backlight_device_unregister) },
	{ 0xb38e820, __VMLINUX_SYMBOL_STR(pci_bus_add_device) },
	{ 0x8c803238, __VMLINUX_SYMBOL_STR(sparse_keymap_free) },
	{ 0x876d29f1, __VMLINUX_SYMBOL_STR(wmi_get_event_data) },
	{ 0x4fd35f87, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x81e6b37f, __VMLINUX_SYMBOL_STR(dmi_get_system_info) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rfkill,led-class,sparse-keymap,wmi,video";

