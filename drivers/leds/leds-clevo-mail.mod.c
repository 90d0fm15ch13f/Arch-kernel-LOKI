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
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x14a4e0b4, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x56a32036, __VMLINUX_SYMBOL_STR(__platform_driver_probe) },
	{ 0x8074028d, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0xdb02a8c6, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x4fdee897, __VMLINUX_SYMBOL_STR(i8042_command) },
	{ 0x1b8b95ad, __VMLINUX_SYMBOL_STR(i8042_unlock_chip) },
	{ 0x17f341a0, __VMLINUX_SYMBOL_STR(i8042_lock_chip) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x7ed41a18, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=led-class,i8042";

MODULE_ALIAS("dmi*:svn*VIA*:pn*K8N800*:pvr*VT8204B*:");
MODULE_ALIAS("dmi*:svn*CLEVOCo.*:pn*M5x0N*:");
MODULE_ALIAS("dmi*:pvr*VT6198*:rvn*CLEVOCo.*:rn*M5X0V*:");
MODULE_ALIAS("dmi*:pvr*0106*:rvn*Clevo*:rn*D400P*:rvr*Rev.A*:");
MODULE_ALIAS("dmi*:pvr*Rev.A1*:rvn*Clevo,Co.*:rn*D400V/D470V*:rvr*SS78B*:");
