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
	{ 0xbd7942e8, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x3a7ca693, __VMLINUX_SYMBOL_STR(ndlc_probe) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0xb1181af, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x2056b5eb, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x3595192b, __VMLINUX_SYMBOL_STR(desc_to_gpio) },
	{ 0xbac44793, __VMLINUX_SYMBOL_STR(acpi_match_device) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x91fa0cf2, __VMLINUX_SYMBOL_STR(devm_gpiod_get_index) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe60aab89, __VMLINUX_SYMBOL_STR(irq_get_irq_data) },
	{ 0x1aae22af, __VMLINUX_SYMBOL_STR(ndlc_recv) },
	{ 0x8aab209b, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x8b705af2, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xec69a089, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0xcb0cf454, __VMLINUX_SYMBOL_STR(ndlc_remove) },
	{ 0x9b9d1ca3, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8733aade, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xc5d894e8, __VMLINUX_SYMBOL_STR(device_property_present) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=st-nci";

MODULE_ALIAS("acpi*:SMO2101:*");
MODULE_ALIAS("acpi*:SMO2102:*");
MODULE_ALIAS("of:N*T*Cst,st21nfcb-i2c");
MODULE_ALIAS("of:N*T*Cst,st21nfcb_i2c");
MODULE_ALIAS("of:N*T*Cst,st21nfcc-i2c");
MODULE_ALIAS("i2c:st_nci");
