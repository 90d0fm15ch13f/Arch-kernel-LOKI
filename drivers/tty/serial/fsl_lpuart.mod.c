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
	{ 0xb6f8f809, __VMLINUX_SYMBOL_STR(uart_unregister_driver) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xc693619d, __VMLINUX_SYMBOL_STR(uart_register_driver) },
	{ 0x1022c75a, __VMLINUX_SYMBOL_STR(uart_resume_port) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xc48bae63, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x1a035509, __VMLINUX_SYMBOL_STR(uart_remove_one_port) },
	{ 0x6acb973d, __VMLINUX_SYMBOL_STR(iowrite32be) },
	{ 0xfdb9b629, __VMLINUX_SYMBOL_STR(ioread32be) },
	{ 0x522afed0, __VMLINUX_SYMBOL_STR(uart_suspend_port) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cfsl,vf610-lpuart");
MODULE_ALIAS("of:N*T*Cfsl,ls1021a-lpuart");
