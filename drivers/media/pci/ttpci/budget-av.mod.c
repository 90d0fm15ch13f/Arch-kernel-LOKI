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
	{ 0x3c7bf0ea, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x5754657a, __VMLINUX_SYMBOL_STR(saa7146_unregister_extension) },
	{ 0xe9d4f949, __VMLINUX_SYMBOL_STR(saa7146_register_extension) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x60e27ede, __VMLINUX_SYMBOL_STR(saa7146_set_hps_source_and_sync) },
	{ 0xdf2347a8, __VMLINUX_SYMBOL_STR(saa7146_register_device) },
	{ 0x666aa566, __VMLINUX_SYMBOL_STR(saa7146_vv_init) },
	{ 0xf0f0fdcf, __VMLINUX_SYMBOL_STR(ttpci_budget_init_hooks) },
	{ 0x6cb49019, __VMLINUX_SYMBOL_STR(dvb_ca_en50221_init) },
	{ 0xd82225d7, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xd66999f9, __VMLINUX_SYMBOL_STR(ttpci_budget_init) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x935841d8, __VMLINUX_SYMBOL_STR(ttpci_budget_debiwrite) },
	{ 0xfba5a14b, __VMLINUX_SYMBOL_STR(dvb_frontend_reinitialise) },
	{ 0x765de10d, __VMLINUX_SYMBOL_STR(ttpci_budget_debiread) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x7f0e330f, __VMLINUX_SYMBOL_STR(ttpci_budget_set_video_port) },
	{ 0xcf14c2f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x944907a1, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x7d736d6a, __VMLINUX_SYMBOL_STR(saa7146_vv_release) },
	{ 0x50c404fb, __VMLINUX_SYMBOL_STR(saa7146_unregister_device) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x53d3da06, __VMLINUX_SYMBOL_STR(dvb_ca_en50221_release) },
	{ 0xc49c1597, __VMLINUX_SYMBOL_STR(saa7146_setgpio) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbcb24bb4, __VMLINUX_SYMBOL_STR(ttpci_budget_deinit) },
	{ 0x3a6284d1, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0xff370a9a, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xeb7165bf, __VMLINUX_SYMBOL_STR(ttpci_budget_irq10_handler) },
	{ 0x7948c222, __VMLINUX_SYMBOL_STR(budget_debug) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=saa7146,saa7146_vv,budget-core,dvb-core";

MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00004F56bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00000010bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000010bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001131sd00000011bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000011bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000014bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000015bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000016bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000018bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000019bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000001Dbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000001Ebc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000001Abc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000001Bbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000002Abc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000002Cbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd0000003Abc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000020bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000021bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000022bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000028bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000023bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000030bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv00001894sd00000031bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv0000153Bsd00001154bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv0000153Bsd00001155bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv0000153Bsd00001156bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv0000153Bsd00001176bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv0000153Bsd00001157bc*sc*i*");
