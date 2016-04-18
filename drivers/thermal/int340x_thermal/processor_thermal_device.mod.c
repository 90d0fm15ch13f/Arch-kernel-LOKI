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
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x584738f9, __VMLINUX_SYMBOL_STR(rdmsr_safe_on_cpu) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x5d870e54, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x78064b9d, __VMLINUX_SYMBOL_STR(intel_soc_dts_iosf_init) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x245ccad5, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0xde1fa012, __VMLINUX_SYMBOL_STR(int340x_thermal_zone_add) },
	{ 0x691001b5, __VMLINUX_SYMBOL_STR(acpi_evaluate_integer) },
	{ 0x958c688a, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x44a81d5f, __VMLINUX_SYMBOL_STR(acpi_evaluate_object) },
	{ 0x9196c03c, __VMLINUX_SYMBOL_STR(intel_soc_dts_iosf_interrupt_handler) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x1dea959e, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xa89638c3, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x650a480a, __VMLINUX_SYMBOL_STR(int340x_thermal_zone_remove) },
	{ 0x96691286, __VMLINUX_SYMBOL_STR(intel_soc_dts_iosf_exit) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=intel_soc_dts_iosf,int340x_thermal_zone";

MODULE_ALIAS("acpi*:INT3401:*");
MODULE_ALIAS("pci:v00008086d00001603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A03sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001903sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000022DCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004A8Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A8Csv*sd*bc*sc*i*");
