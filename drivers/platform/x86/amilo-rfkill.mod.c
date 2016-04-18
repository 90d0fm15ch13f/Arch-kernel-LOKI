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
	{ 0x14a4e0b4, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x8074028d, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x25277497, __VMLINUX_SYMBOL_STR(rfkill_register) },
	{ 0xa22f74cc, __VMLINUX_SYMBOL_STR(rfkill_alloc) },
	{ 0x50877b9, __VMLINUX_SYMBOL_STR(dmi_first_match) },
	{ 0xdb68bbad, __VMLINUX_SYMBOL_STR(rfkill_destroy) },
	{ 0x83eb21c, __VMLINUX_SYMBOL_STR(rfkill_unregister) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1b8b95ad, __VMLINUX_SYMBOL_STR(i8042_unlock_chip) },
	{ 0x4fdee897, __VMLINUX_SYMBOL_STR(i8042_command) },
	{ 0x17f341a0, __VMLINUX_SYMBOL_STR(i8042_lock_chip) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rfkill,i8042";

MODULE_ALIAS("dmi*:svn*FUJITSUSIEMENS*:rn*AMILOA1655*:");
MODULE_ALIAS("dmi*:svn*FUJITSUSIEMENS*:rn*AMILOL1310*:");
MODULE_ALIAS("dmi*:svn*FUJITSUSIEMENS*:rn*AMILOM7440*:");
