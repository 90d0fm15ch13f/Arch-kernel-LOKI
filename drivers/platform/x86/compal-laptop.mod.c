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
	{ 0x14a4e0b4, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xb33ea282, __VMLINUX_SYMBOL_STR(backlight_device_unregister) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x879dcb22, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0x5ebb681b, __VMLINUX_SYMBOL_STR(platform_device_del) },
	{ 0x83eb21c, __VMLINUX_SYMBOL_STR(rfkill_unregister) },
	{ 0xdb68bbad, __VMLINUX_SYMBOL_STR(rfkill_destroy) },
	{ 0x25277497, __VMLINUX_SYMBOL_STR(rfkill_register) },
	{ 0xa22f74cc, __VMLINUX_SYMBOL_STR(rfkill_alloc) },
	{ 0xe260d833, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x2232533c, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x74265b1, __VMLINUX_SYMBOL_STR(backlight_device_register) },
	{ 0x6de7f7ff, __VMLINUX_SYMBOL_STR(acpi_video_get_backlight_type) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0x1a45cb6c, __VMLINUX_SYMBOL_STR(acpi_disabled) },
	{ 0x6512c663, __VMLINUX_SYMBOL_STR(power_supply_unregister) },
	{ 0x97999817, __VMLINUX_SYMBOL_STR(rfkill_set_hw_state) },
	{ 0xa89638c3, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xfb1bf9a1, __VMLINUX_SYMBOL_STR(power_supply_register) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xe6ac5f2b, __VMLINUX_SYMBOL_STR(devm_hwmon_device_register_with_groups) },
	{ 0x958c688a, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x779a18af, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0x6b85a7dc, __VMLINUX_SYMBOL_STR(power_supply_get_drvdata) },
	{ 0x27ae7d0c, __VMLINUX_SYMBOL_STR(ec_transaction) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x876dafc3, __VMLINUX_SYMBOL_STR(ec_write) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xba2d8594, __VMLINUX_SYMBOL_STR(ec_read) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rfkill,video";

MODULE_ALIAS("dmi*:rn*IFL90*:rvr*IFT00*:");
MODULE_ALIAS("dmi*:rn*IFL90*:rvr*REFERENCE*:");
MODULE_ALIAS("dmi*:rn*IFL91*:rvr*IFT00*:");
MODULE_ALIAS("dmi*:rn*JFL92*:rvr*IFT00*:");
MODULE_ALIAS("dmi*:rn*IFT00*:rvr*IFT00*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Inspiron910*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Inspiron1010*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Inspiron1011*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Inspiron1012*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Inspiron1110*:");
MODULE_ALIAS("dmi*:svn*DellInc.*:pn*Inspiron1210*:");
MODULE_ALIAS("dmi*:rn*JHL90*:rvr*REFERENCE*:");
MODULE_ALIAS("dmi*:rn*KHLB2*:rvr*REFERENCE*:");

MODULE_INFO(srcversion, "C81BD10D25032FF95FA6E63");
