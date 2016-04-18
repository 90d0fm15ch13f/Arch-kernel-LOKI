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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x90892a31, __VMLINUX_SYMBOL_STR(mantis_stream_control) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x1c645deb, __VMLINUX_SYMBOL_STR(mantis_i2c_exit) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc62e643d, __VMLINUX_SYMBOL_STR(mantis_gpio_set_bits) },
	{ 0x944907a1, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xb2e39c3b, __VMLINUX_SYMBOL_STR(mantis_dvb_init) },
	{ 0x5a1bcf35, __VMLINUX_SYMBOL_STR(mantis_i2c_init) },
	{ 0x64c6b7d9, __VMLINUX_SYMBOL_STR(mantis_pci_exit) },
	{ 0x41cf5803, __VMLINUX_SYMBOL_STR(mantis_uart_exit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6c858509, __VMLINUX_SYMBOL_STR(mantis_input_init) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x86d4e911, __VMLINUX_SYMBOL_STR(mantis_get_mac) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x632207a, __VMLINUX_SYMBOL_STR(mantis_dma_init) },
	{ 0x404db2a4, __VMLINUX_SYMBOL_STR(mantis_dma_exit) },
	{ 0x519763c7, __VMLINUX_SYMBOL_STR(mantis_pci_init) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x95c01a5c, __VMLINUX_SYMBOL_STR(mantis_input_exit) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb3698751, __VMLINUX_SYMBOL_STR(mantis_frontend_power) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x234e1ce3, __VMLINUX_SYMBOL_STR(mantis_frontend_soft_reset) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x9ca7262b, __VMLINUX_SYMBOL_STR(mantis_uart_init) },
	{ 0xf49c0ee5, __VMLINUX_SYMBOL_STR(mantis_dvb_exit) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mantis_core";

MODULE_ALIAS("pci:v00001822d00004E35sv00001AE4sd00000002bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001AE4sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001AE4sd00000003bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv0000153Bsd00001178bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv0000153Bsd00001179bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000014bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000031bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000008bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000043bc*sc*i*");
MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000024bc*sc*i*");
