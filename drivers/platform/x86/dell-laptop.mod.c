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
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x14a4e0b4, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xb33ea282, __VMLINUX_SYMBOL_STR(backlight_device_unregister) },
	{ 0xdb02a8c6, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xce53df1d, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x6de7f7ff, __VMLINUX_SYMBOL_STR(acpi_video_get_backlight_type) },
	{ 0x16c745d, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xa56e18e4, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x7ed41a18, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x879dcb22, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0x5ebb681b, __VMLINUX_SYMBOL_STR(platform_device_del) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x74265b1, __VMLINUX_SYMBOL_STR(backlight_device_register) },
	{ 0x4521cc52, __VMLINUX_SYMBOL_STR(i8042_install_filter) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x25277497, __VMLINUX_SYMBOL_STR(rfkill_register) },
	{ 0xa22f74cc, __VMLINUX_SYMBOL_STR(rfkill_alloc) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x81e6b37f, __VMLINUX_SYMBOL_STR(dmi_get_system_info) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xe260d833, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x2232533c, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x56947347, __VMLINUX_SYMBOL_STR(dmi_walk) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0x97999817, __VMLINUX_SYMBOL_STR(rfkill_set_hw_state) },
	{ 0xc0763484, __VMLINUX_SYMBOL_STR(rfkill_blocked) },
	{ 0x8a490c90, __VMLINUX_SYMBOL_STR(rfkill_set_sw_state) },
	{ 0x4fdee897, __VMLINUX_SYMBOL_STR(i8042_command) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x2276db98, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0xdb68bbad, __VMLINUX_SYMBOL_STR(rfkill_destroy) },
	{ 0x83eb21c, __VMLINUX_SYMBOL_STR(rfkill_unregister) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x48902dbb, __VMLINUX_SYMBOL_STR(i8042_remove_filter) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x5f005368, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2c208607, __VMLINUX_SYMBOL_STR(power_supply_is_system_supplied) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa75079d6, __VMLINUX_SYMBOL_STR(dcdbas_smi_request) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x7c2d098f, __VMLINUX_SYMBOL_STR(krealloc) },
	{ 0x3386efc1, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=led-class,video,i8042,rfkill,dcdbas";

MODULE_ALIAS("dmi*:svn*DellInc.*:ct*8*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:ct*9*:");
MODULE_ALIAS("dmi*:svn*DellComputerCorporation*:ct*8*:");
