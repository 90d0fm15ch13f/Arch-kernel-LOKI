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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x70e62fc2, __VMLINUX_SYMBOL_STR(oxygen_read16) },
	{ 0x5924793a, __VMLINUX_SYMBOL_STR(oxygen_pci_remove) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x12759ddf, __VMLINUX_SYMBOL_STR(oxygen_write8_masked) },
	{ 0xbb1e4046, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x75afdcce, __VMLINUX_SYMBOL_STR(oxygen_write16_masked) },
	{ 0xa8741b9f, __VMLINUX_SYMBOL_STR(oxygen_write_ac97_masked) },
	{ 0xcca5e171, __VMLINUX_SYMBOL_STR(snd_ctl_notify) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x54dcbc12, __VMLINUX_SYMBOL_STR(oxygen_write_spi) },
	{ 0x8efddda4, __VMLINUX_SYMBOL_STR(dev_crit) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5bd88d05, __VMLINUX_SYMBOL_STR(oxygen_pci_probe) },
	{ 0x14a2ded2, __VMLINUX_SYMBOL_STR(snd_jack_new) },
	{ 0x4078d4c0, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x7ada4c5c, __VMLINUX_SYMBOL_STR(oxygen_write16) },
	{ 0x81b69e41, __VMLINUX_SYMBOL_STR(snd_ctl_enum_info) },
	{ 0x79e7ed18, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xe56cea1a, __VMLINUX_SYMBOL_STR(snd_component_add) },
	{ 0xea2bc887, __VMLINUX_SYMBOL_STR(oxygen_read8) },
	{ 0x1ec44924, __VMLINUX_SYMBOL_STR(oxygen_reset_uart) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xc4e9245d, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x4f1e18de, __VMLINUX_SYMBOL_STR(oxygen_write_uart) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xa8a336ef, __VMLINUX_SYMBOL_STR(oxygen_write_i2c) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xe54dd406, __VMLINUX_SYMBOL_STR(oxygen_pci_pm) },
	{ 0xeddf81b1, __VMLINUX_SYMBOL_STR(oxygen_pci_shutdown) },
	{ 0x14018f08, __VMLINUX_SYMBOL_STR(snd_jack_report) },
	{ 0x83180130, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-oxygen-lib,snd";

MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008269bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008275bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd000082B7bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008314bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008327bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000834Fbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000835Cbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000835Dbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000835Ebc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000838Ebc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008428bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008522bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd000085F4bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000013F6sd00008788bc*sc*i*");
