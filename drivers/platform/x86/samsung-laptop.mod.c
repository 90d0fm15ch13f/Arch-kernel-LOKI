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
	{ 0x7681946c, __VMLINUX_SYMBOL_STR(unregister_pm_notifier) },
	{ 0x9cc4f70a, __VMLINUX_SYMBOL_STR(register_pm_notifier) },
	{ 0xce53df1d, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x16c745d, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x7dd1e8b1, __VMLINUX_SYMBOL_STR(debugfs_create_blob) },
	{ 0x58dc7e35, __VMLINUX_SYMBOL_STR(debugfs_create_u8) },
	{ 0xe5bfd18, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0xb17145c9, __VMLINUX_SYMBOL_STR(debugfs_create_u16) },
	{ 0xa56e18e4, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xa89638c3, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xb33ea282, __VMLINUX_SYMBOL_STR(backlight_device_unregister) },
	{ 0x7ed41a18, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x74265b1, __VMLINUX_SYMBOL_STR(backlight_device_register) },
	{ 0x958c688a, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x14a4e0b4, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x8074028d, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0x6de7f7ff, __VMLINUX_SYMBOL_STR(acpi_video_get_backlight_type) },
	{ 0xe92ca535, __VMLINUX_SYMBOL_STR(acpi_video_set_dmi_backlight_type) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8723ded6, __VMLINUX_SYMBOL_STR(efi) },
	{ 0x83eb21c, __VMLINUX_SYMBOL_STR(rfkill_unregister) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xdb02a8c6, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x3386efc1, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x8a490c90, __VMLINUX_SYMBOL_STR(rfkill_set_sw_state) },
	{ 0xdb68bbad, __VMLINUX_SYMBOL_STR(rfkill_destroy) },
	{ 0x25277497, __VMLINUX_SYMBOL_STR(rfkill_register) },
	{ 0xaad6d92f, __VMLINUX_SYMBOL_STR(rfkill_init_sw_state) },
	{ 0xa22f74cc, __VMLINUX_SYMBOL_STR(rfkill_alloc) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2276db98, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=led-class,video,rfkill";

MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:ct*8*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:ct*9*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:ct*10*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:ct*14*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*R40/R41*:rn*R40/R41*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*N150P*:rn*N150P*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*N145P/N250P/N260P*:rn*N145P/N250P/N260P*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*N150/N210/N220*:rn*N150/N210/N220*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*NF110/NF210/NF310*:rn*NF110/NF210/NF310*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*X360*:rn*X360*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*N250P*:rn*N250P*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*NC210/NC110*:rn*NC210/NC110*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*730U3E/740U3E*:");
MODULE_ALIAS("dmi*:svn*SAMSUNGELECTRONICSCO.,LTD.*:pn*300V3Z/300V4Z/300V5Z*:");
