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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xa56e18e4, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xb0b00201, __VMLINUX_SYMBOL_STR(mfd_remove_devices) },
	{ 0x871da799, __VMLINUX_SYMBOL_STR(clk_register_fractional_divider) },
	{ 0xaf70d9c2, __VMLINUX_SYMBOL_STR(dev_pm_qos_hide_latency_tolerance) },
	{ 0xb10cf5cc, __VMLINUX_SYMBOL_STR(debugfs_create_x32) },
	{ 0x21e992a5, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0xd679af25, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x63150e06, __VMLINUX_SYMBOL_STR(clk_get_parent) },
	{ 0xce53df1d, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x27882b9b, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x83832c84, __VMLINUX_SYMBOL_STR(mfd_add_devices) },
	{ 0x4a4fd348, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x7a319404, __VMLINUX_SYMBOL_STR(clk_register_fixed_rate) },
	{ 0xe1b60dea, __VMLINUX_SYMBOL_STR(devm_kmemdup) },
	{ 0xbea7e0af, __VMLINUX_SYMBOL_STR(device_for_each_child_reverse) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9e55446e, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0x7757b51a, __VMLINUX_SYMBOL_STR(clk_unregister) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x5932b12d, __VMLINUX_SYMBOL_STR(clkdev_drop) },
	{ 0xcfd3221a, __VMLINUX_SYMBOL_STR(clkdev_create) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb1e1908c, __VMLINUX_SYMBOL_STR(dev_pm_qos_expose_latency_tolerance) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xd2e88de5, __VMLINUX_SYMBOL_STR(clk_register_gate) },
	{ 0xc569d8ce, __VMLINUX_SYMBOL_STR(__clk_get_name) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

