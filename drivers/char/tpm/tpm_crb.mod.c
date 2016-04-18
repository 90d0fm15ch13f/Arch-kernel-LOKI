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
	{ 0x95e41919, __VMLINUX_SYMBOL_STR(tpm_pm_resume) },
	{ 0x7b223e27, __VMLINUX_SYMBOL_STR(tpm_pm_suspend) },
	{ 0x54f17d35, __VMLINUX_SYMBOL_STR(acpi_bus_unregister_driver) },
	{ 0xafc412ac, __VMLINUX_SYMBOL_STR(acpi_bus_register_driver) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1616cb30, __VMLINUX_SYMBOL_STR(acpi_evaluate_dsm) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x56a58126, __VMLINUX_SYMBOL_STR(tpm_chip_register) },
	{ 0x6490c2f7, __VMLINUX_SYMBOL_STR(tpm2_do_selftest) },
	{ 0xd1c27c9b, __VMLINUX_SYMBOL_STR(tpm_get_timeouts) },
	{ 0xbe3afb2f, __VMLINUX_SYMBOL_STR(devm_ioremap_nocache) },
	{ 0x936707c0, __VMLINUX_SYMBOL_STR(acpi_device_hid) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xb23227fb, __VMLINUX_SYMBOL_STR(tpmm_chip_alloc) },
	{ 0x81472677, __VMLINUX_SYMBOL_STR(acpi_get_table) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x2d0409d8, __VMLINUX_SYMBOL_STR(tpm_chip_unregister) },
	{ 0xea6a012b, __VMLINUX_SYMBOL_STR(tpm2_shutdown) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tpm";

MODULE_ALIAS("acpi*:MSFT0101:*");

MODULE_INFO(srcversion, "3BA6B45AC5DB27379BA9921");
