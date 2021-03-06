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
	{ 0xa59e8efc, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x566a4ec5, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x38fd2095, __VMLINUX_SYMBOL_STR(st_magn_common_probe) },
	{ 0x873ebfad, __VMLINUX_SYMBOL_STR(st_sensors_spi_configure) },
	{ 0x14cedccb, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x993f8282, __VMLINUX_SYMBOL_STR(st_magn_common_remove) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=st_magn,st_sensors_spi,industrialio";

MODULE_ALIAS("spi:lsm303dlhc_magn");
MODULE_ALIAS("spi:lsm303dlm_magn");
MODULE_ALIAS("spi:lis3mdl");
MODULE_ALIAS("spi:lsm303agr_magn");
