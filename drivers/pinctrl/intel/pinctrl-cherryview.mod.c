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
	{ 0x1bc5eebe, __VMLINUX_SYMBOL_STR(pinctrl_gpio_direction_input) },
	{ 0x1b8822d8, __VMLINUX_SYMBOL_STR(pinctrl_gpio_direction_output) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x7ceaf0d5, __VMLINUX_SYMBOL_STR(generic_handle_irq) },
	{ 0xac6b04ad, __VMLINUX_SYMBOL_STR(irq_find_mapping) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x1993f1ef, __VMLINUX_SYMBOL_STR(gpiochip_set_chained_irqchip) },
	{ 0xe5ca6d15, __VMLINUX_SYMBOL_STR(_gpiochip_irqchip_add) },
	{ 0x3c9509f6, __VMLINUX_SYMBOL_STR(handle_simple_irq) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x10ab05ba, __VMLINUX_SYMBOL_STR(gpiochip_add_pin_range) },
	{ 0xe8358f9a, __VMLINUX_SYMBOL_STR(gpiochip_add_data) },
	{ 0x31df9f4d, __VMLINUX_SYMBOL_STR(gpiochip_generic_free) },
	{ 0x55e3a893, __VMLINUX_SYMBOL_STR(gpiochip_generic_request) },
	{ 0xf560de5b, __VMLINUX_SYMBOL_STR(pinctrl_register) },
	{ 0x1df660c1, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x9d4a0a9f, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x7267942f, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x57000eee, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x7e886bdc, __VMLINUX_SYMBOL_STR(pinctrl_dev_get_drvdata) },
	{ 0x83225a27, __VMLINUX_SYMBOL_STR(pinctrl_unregister) },
	{ 0xf10fc3ca, __VMLINUX_SYMBOL_STR(gpiochip_remove) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x397880b7, __VMLINUX_SYMBOL_STR(handle_level_irq) },
	{ 0xc1dac661, __VMLINUX_SYMBOL_STR(handle_edge_irq) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:INT33FF:*");
