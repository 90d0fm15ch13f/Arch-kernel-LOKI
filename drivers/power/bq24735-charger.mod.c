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
	{ 0xb1181af, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x8b705af2, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8733aade, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xe088b8c4, __VMLINUX_SYMBOL_STR(devm_gpio_request) },
	{ 0x509b66df, __VMLINUX_SYMBOL_STR(devm_kasprintf) },
	{ 0x8b57226d, __VMLINUX_SYMBOL_STR(devm_power_supply_register) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x6b4c4146, __VMLINUX_SYMBOL_STR(power_supply_changed) },
	{ 0xc92cb278, __VMLINUX_SYMBOL_STR(i2c_smbus_write_word_data) },
	{ 0x6b85a7dc, __VMLINUX_SYMBOL_STR(power_supply_get_drvdata) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x30812946, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value_cansleep) },
	{ 0x2056b5eb, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xdc01bc0b, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cti,bq24735");
MODULE_ALIAS("i2c:bq24735-charger");
