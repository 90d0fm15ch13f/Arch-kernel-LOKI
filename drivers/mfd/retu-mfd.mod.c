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
	{ 0x78d15f3e, __VMLINUX_SYMBOL_STR(__devm_regmap_init) },
	{ 0x131a5ed7, __VMLINUX_SYMBOL_STR(regmap_del_irq_chip) },
	{ 0xb1181af, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xc92cb278, __VMLINUX_SYMBOL_STR(i2c_smbus_write_word_data) },
	{ 0xb0b00201, __VMLINUX_SYMBOL_STR(mfd_remove_devices) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe3ec4df, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x6e89a560, __VMLINUX_SYMBOL_STR(regmap_irq_chip_get_base) },
	{ 0xdc01bc0b, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x83832c84, __VMLINUX_SYMBOL_STR(mfd_add_devices) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8b705af2, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x84802485, __VMLINUX_SYMBOL_STR(regmap_add_irq_chip) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x60a32ea9, __VMLINUX_SYMBOL_STR(pm_power_off) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xfe6478aa, __VMLINUX_SYMBOL_STR(regmap_write) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:retu-mfd");
MODULE_ALIAS("i2c:tahvo-mfd");