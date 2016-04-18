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
	{ 0x86a2caf0, __VMLINUX_SYMBOL_STR(parport_unregister_driver) },
	{ 0xc3ac7e7a, __VMLINUX_SYMBOL_STR(__parport_register_driver) },
	{ 0x914721df, __VMLINUX_SYMBOL_STR(spi_bitbang_stop) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x66029afb, __VMLINUX_SYMBOL_STR(spi_new_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x4fb9f94, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x21428eb8, __VMLINUX_SYMBOL_STR(parport_unregister_device) },
	{ 0xb3e1bb0f, __VMLINUX_SYMBOL_STR(parport_release) },
	{ 0x8bde3308, __VMLINUX_SYMBOL_STR(spi_bitbang_start) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x8e1226e2, __VMLINUX_SYMBOL_STR(parport_claim) },
	{ 0x1965bfb7, __VMLINUX_SYMBOL_STR(parport_register_dev_model) },
	{ 0x20c37981, __VMLINUX_SYMBOL_STR(spi_alloc_master) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=parport,spi-bitbang";

