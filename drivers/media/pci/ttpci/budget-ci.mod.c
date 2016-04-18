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
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x3c7bf0ea, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x5754657a, __VMLINUX_SYMBOL_STR(saa7146_unregister_extension) },
	{ 0xe9d4f949, __VMLINUX_SYMBOL_STR(saa7146_register_extension) },
	{ 0xcf14c2f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x944907a1, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x6cb49019, __VMLINUX_SYMBOL_STR(dvb_ca_en50221_init) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0xf0f0fdcf, __VMLINUX_SYMBOL_STR(ttpci_budget_init_hooks) },
	{ 0xd82225d7, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x65e8a892, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0xd805a922, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa17e6d0a, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0xd66999f9, __VMLINUX_SYMBOL_STR(ttpci_budget_init) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7f0e330f, __VMLINUX_SYMBOL_STR(ttpci_budget_set_video_port) },
	{ 0x80c4307, __VMLINUX_SYMBOL_STR(dvb_ca_en50221_camready_irq) },
	{ 0xf9360e5a, __VMLINUX_SYMBOL_STR(dvb_ca_en50221_camchange_irq) },
	{ 0x256e96c2, __VMLINUX_SYMBOL_STR(dvb_ca_en50221_frda_irq) },
	{ 0xbb5d3bed, __VMLINUX_SYMBOL_STR(rc_keydown) },
	{ 0x765de10d, __VMLINUX_SYMBOL_STR(ttpci_budget_debiread) },
	{ 0x53d3da06, __VMLINUX_SYMBOL_STR(dvb_ca_en50221_release) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbcb24bb4, __VMLINUX_SYMBOL_STR(ttpci_budget_deinit) },
	{ 0x3a6284d1, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0xff370a9a, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0x42a25e97, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xc49c1597, __VMLINUX_SYMBOL_STR(saa7146_setgpio) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x935841d8, __VMLINUX_SYMBOL_STR(ttpci_budget_debiwrite) },
	{ 0xeb7165bf, __VMLINUX_SYMBOL_STR(ttpci_budget_irq10_handler) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x7948c222, __VMLINUX_SYMBOL_STR(budget_debug) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=saa7146,dvb-core,budget-core,rc-core";

MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000100Cbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000100Fbc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001010bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001011bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001012bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001017bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000101Abc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001019bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000101Bbc*sc*i*");
