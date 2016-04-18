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
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xa78deb61, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x9a2db7e9, __VMLINUX_SYMBOL_STR(hwmon_device_unregister) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8733aade, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x29d223f8, __VMLINUX_SYMBOL_STR(hwmon_device_register_with_groups) },
	{ 0xdcf8f6bf, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x93780674, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x779a18af, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8824503a, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte) },
	{ 0x6ec1abd6, __VMLINUX_SYMBOL_STR(i2c_smbus_xfer) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x1bc05b6, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:adm1032");
MODULE_ALIAS("i2c:adt7461");
MODULE_ALIAS("i2c:adt7461a");
MODULE_ALIAS("i2c:g781");
MODULE_ALIAS("i2c:lm90");
MODULE_ALIAS("i2c:lm86");
MODULE_ALIAS("i2c:lm89");
MODULE_ALIAS("i2c:lm99");
MODULE_ALIAS("i2c:max6646");
MODULE_ALIAS("i2c:max6647");
MODULE_ALIAS("i2c:max6649");
MODULE_ALIAS("i2c:max6657");
MODULE_ALIAS("i2c:max6658");
MODULE_ALIAS("i2c:max6659");
MODULE_ALIAS("i2c:max6680");
MODULE_ALIAS("i2c:max6681");
MODULE_ALIAS("i2c:max6695");
MODULE_ALIAS("i2c:max6696");
MODULE_ALIAS("i2c:nct1008");
MODULE_ALIAS("i2c:w83l771");
MODULE_ALIAS("i2c:sa56004");
MODULE_ALIAS("i2c:tmp451");
