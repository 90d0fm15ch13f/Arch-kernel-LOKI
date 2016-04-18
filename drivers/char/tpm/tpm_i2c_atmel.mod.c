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
	{ 0x95e41919, __VMLINUX_SYMBOL_STR(tpm_pm_resume) },
	{ 0x7b223e27, __VMLINUX_SYMBOL_STR(tpm_pm_suspend) },
	{ 0xb1181af, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x8b705af2, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x56a58126, __VMLINUX_SYMBOL_STR(tpm_chip_register) },
	{ 0x17ffd424, __VMLINUX_SYMBOL_STR(tpm_do_selftest) },
	{ 0xd1c27c9b, __VMLINUX_SYMBOL_STR(tpm_get_timeouts) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xb23227fb, __VMLINUX_SYMBOL_STR(tpmm_chip_alloc) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbd7942e8, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xec69a089, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x2d0409d8, __VMLINUX_SYMBOL_STR(tpm_chip_unregister) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tpm";

MODULE_ALIAS("i2c:tpm_i2c_atmel");
