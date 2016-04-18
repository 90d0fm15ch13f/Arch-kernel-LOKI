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
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xc48a3366, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0xfa359847, __VMLINUX_SYMBOL_STR(serial8250_do_pm) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x79fc2151, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xd5957482, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x666f1d12, __VMLINUX_SYMBOL_STR(serial8250_register_8250_port) },
	{ 0x9b0aaca8, __VMLINUX_SYMBOL_STR(platform_get_resource_byname) },
	{ 0xb2210d64, __VMLINUX_SYMBOL_STR(reset_control_deassert) },
	{ 0x6c01f45a, __VMLINUX_SYMBOL_STR(devm_reset_control_get) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x6190fcd, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x95e76255, __VMLINUX_SYMBOL_STR(device_property_read_u32_array) },
	{ 0xc5d894e8, __VMLINUX_SYMBOL_STR(device_property_present) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x9e55446e, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0x1df660c1, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x7267942f, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xfc9da134, __VMLINUX_SYMBOL_STR(serial8250_do_set_termios) },
	{ 0x76d9b876, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0x43f81957, __VMLINUX_SYMBOL_STR(clk_round_rate) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0x6cf9d522, __VMLINUX_SYMBOL_STR(serial8250_handle_irq) },
	{ 0xa2cf3517, __VMLINUX_SYMBOL_STR(serial8250_clear_and_reinit_fifos) },
	{ 0xbdf58c59, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x6c4b6684, __VMLINUX_SYMBOL_STR(reset_control_assert) },
	{ 0xcefcd99a, __VMLINUX_SYMBOL_STR(serial8250_unregister_port) },
	{ 0xd679af25, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xcc248d26, __VMLINUX_SYMBOL_STR(serial8250_suspend_port) },
	{ 0xc7208c3a, __VMLINUX_SYMBOL_STR(serial8250_resume_port) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:INT33C4:*");
MODULE_ALIAS("acpi*:INT33C5:*");
MODULE_ALIAS("acpi*:INT3434:*");
MODULE_ALIAS("acpi*:INT3435:*");
MODULE_ALIAS("acpi*:80860F0A:*");
MODULE_ALIAS("acpi*:8086228A:*");
MODULE_ALIAS("acpi*:APMC0D08:*");
MODULE_ALIAS("acpi*:AMD0020:*");
MODULE_ALIAS("of:N*T*Csnps,dw-apb-uart");
MODULE_ALIAS("of:N*T*Ccavium,octeon-3860-uart");
