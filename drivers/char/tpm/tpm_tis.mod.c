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
	{ 0x7b223e27, __VMLINUX_SYMBOL_STR(tpm_pm_suspend) },
	{ 0x6c7a01fa, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x54f17d35, __VMLINUX_SYMBOL_STR(acpi_bus_unregister_driver) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x14a4e0b4, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x8074028d, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x801b26d6, __VMLINUX_SYMBOL_STR(pnp_unregister_driver) },
	{ 0xafc412ac, __VMLINUX_SYMBOL_STR(acpi_bus_register_driver) },
	{ 0xe9e380d2, __VMLINUX_SYMBOL_STR(pnp_register_driver) },
	{ 0x1a354fb8, __VMLINUX_SYMBOL_STR(devm_free_irq) },
	{ 0x26a3b191, __VMLINUX_SYMBOL_STR(pnpacpi_protocol) },
	{ 0x755aaba0, __VMLINUX_SYMBOL_STR(pnp_get_resource) },
	{ 0xdc6699cb, __VMLINUX_SYMBOL_STR(acpi_dev_free_resource_list) },
	{ 0x51f4d505, __VMLINUX_SYMBOL_STR(acpi_dev_get_resources) },
	{ 0x81472677, __VMLINUX_SYMBOL_STR(acpi_get_table) },
	{ 0x7f2b09ab, __VMLINUX_SYMBOL_STR(tpm2_startup) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xc5534d64, __VMLINUX_SYMBOL_STR(ioread16) },
	{ 0x56a58126, __VMLINUX_SYMBOL_STR(tpm_chip_register) },
	{ 0x6490c2f7, __VMLINUX_SYMBOL_STR(tpm2_do_selftest) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xd1c27c9b, __VMLINUX_SYMBOL_STR(tpm_get_timeouts) },
	{ 0x260d0f8c, __VMLINUX_SYMBOL_STR(tpm2_probe) },
	{ 0x9e55446e, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0xb23227fb, __VMLINUX_SYMBOL_STR(tpmm_chip_alloc) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2d0409d8, __VMLINUX_SYMBOL_STR(tpm_chip_unregister) },
	{ 0xea6a012b, __VMLINUX_SYMBOL_STR(tpm2_shutdown) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf1efebfb, __VMLINUX_SYMBOL_STR(tpm2_calc_ordinal_duration) },
	{ 0x8de4685d, __VMLINUX_SYMBOL_STR(tpm_calc_ordinal_duration) },
	{ 0x4d3c16fc, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x3356b90b, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x5584fc2a, __VMLINUX_SYMBOL_STR(tpm2_gen_interrupt) },
	{ 0xce352b10, __VMLINUX_SYMBOL_STR(tpm_gen_interrupt) },
	{ 0x8733aade, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xa206f4c4, __VMLINUX_SYMBOL_STR(wait_for_tpm_stat) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x61cde409, __VMLINUX_SYMBOL_STR(acpi_dev_resource_memory) },
	{ 0x6f402ba6, __VMLINUX_SYMBOL_STR(acpi_dev_resource_interrupt) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x17ffd424, __VMLINUX_SYMBOL_STR(tpm_do_selftest) },
	{ 0x95e41919, __VMLINUX_SYMBOL_STR(tpm_pm_resume) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tpm";

MODULE_ALIAS("acpi*:MSFT0101:*");
MODULE_ALIAS("acpi*:??????:*");
MODULE_ALIAS("pnp:dPNP0C31*");
MODULE_ALIAS("acpi*:PNP0C31:*");
MODULE_ALIAS("pnp:dATM1200*");
MODULE_ALIAS("acpi*:ATM1200:*");
MODULE_ALIAS("pnp:dIFX0102*");
MODULE_ALIAS("acpi*:IFX0102:*");
MODULE_ALIAS("pnp:dBCM0101*");
MODULE_ALIAS("acpi*:BCM0101:*");
MODULE_ALIAS("pnp:dBCM0102*");
MODULE_ALIAS("acpi*:BCM0102:*");
MODULE_ALIAS("pnp:dNSC1200*");
MODULE_ALIAS("acpi*:NSC1200:*");
MODULE_ALIAS("pnp:dICO0102*");
MODULE_ALIAS("acpi*:ICO0102:*");
MODULE_ALIAS("pnp:d*");
MODULE_ALIAS("acpi*::*");

MODULE_INFO(srcversion, "20BDBF6991D2B5E0CA24849");
