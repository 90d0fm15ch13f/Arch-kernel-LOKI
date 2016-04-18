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
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8733aade, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xfb213f2f, __VMLINUX_SYMBOL_STR(pps_register_source) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xee645217, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0x398896b4, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0xe088b8c4, __VMLINUX_SYMBOL_STR(devm_gpio_request) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8b6ac89d, __VMLINUX_SYMBOL_STR(pps_event) },
	{ 0x38dc6617, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0x2056b5eb, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x211f68f1, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x3ee3b530, __VMLINUX_SYMBOL_STR(pps_unregister_source) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pps_core";

MODULE_ALIAS("of:N*T*Cpps-gpio");

MODULE_INFO(srcversion, "D2C22B0A465DA63746EFB59");
