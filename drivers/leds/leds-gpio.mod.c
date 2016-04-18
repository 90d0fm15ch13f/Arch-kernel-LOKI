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
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf88c07d6, __VMLINUX_SYMBOL_STR(fwnode_handle_put) },
	{ 0x13f4e47b, __VMLINUX_SYMBOL_STR(devm_get_gpiod_from_child) },
	{ 0xee9f39d, __VMLINUX_SYMBOL_STR(device_get_next_child_node) },
	{ 0xe74a742f, __VMLINUX_SYMBOL_STR(fwnode_property_present) },
	{ 0xf37a8e3e, __VMLINUX_SYMBOL_STR(fwnode_property_read_string) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xb5c84fec, __VMLINUX_SYMBOL_STR(device_get_child_node_count) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdd608b7f, __VMLINUX_SYMBOL_STR(gpiod_get_value_cansleep) },
	{ 0x2056b5eb, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x8aab209b, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x7ed41a18, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x89a4d29e, __VMLINUX_SYMBOL_STR(gpiod_direction_output) },
	{ 0x1e40a00b, __VMLINUX_SYMBOL_STR(gpiod_cansleep) },
	{ 0xdb02a8c6, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x58780176, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0x97d35fc8, __VMLINUX_SYMBOL_STR(gpiod_set_value) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=led-class";

MODULE_ALIAS("of:N*T*Cgpio-leds");
