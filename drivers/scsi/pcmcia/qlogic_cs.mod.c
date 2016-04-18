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
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xe7578024, __VMLINUX_SYMBOL_STR(pcmcia_enable_device) },
	{ 0xa97b6d88, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x4350a31a, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x6de6bac1, __VMLINUX_SYMBOL_STR(qlogicfas408_queuecommand) },
	{ 0x94e180a2, __VMLINUX_SYMBOL_STR(pcmcia_register_driver) },
	{ 0x3c3f7234, __VMLINUX_SYMBOL_STR(qlogicfas408_abort) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc2f5bfc, __VMLINUX_SYMBOL_STR(pcmcia_request_io) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x231b98d3, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x61ac9c9, __VMLINUX_SYMBOL_STR(pcmcia_loop_config) },
	{ 0xd3fe78aa, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0xe76b3b20, __VMLINUX_SYMBOL_STR(qlogicfas408_get_chip_type) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x36142e50, __VMLINUX_SYMBOL_STR(qlogicfas408_bus_reset) },
	{ 0x1f55cd70, __VMLINUX_SYMBOL_STR(qlogicfas408_ihandl) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xca807607, __VMLINUX_SYMBOL_STR(pcmcia_unregister_driver) },
	{ 0xd2f3ca29, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0xf2b95199, __VMLINUX_SYMBOL_STR(qlogicfas408_setup) },
	{ 0x7c8d7611, __VMLINUX_SYMBOL_STR(qlogicfas408_biosparam) },
	{ 0xcb4626b0, __VMLINUX_SYMBOL_STR(pcmcia_disable_device) },
	{ 0xbeda3000, __VMLINUX_SYMBOL_STR(qlogicfas408_info) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pcmcia,scsi_mod,qlogicfas408";

MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa88395FA7pb33B7A5E6pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD361772Fpb299D1751pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa20841B68pbAB3C3B6Dpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa6534382ApbD67EEE79pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa18DF0BA0pb24662E8Apc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa82375A27pbF68E5BF7pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa82375A27pb68EACE54pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa3FAEE676pb194250ECpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD77B2930pbA85B2735pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paD77B2930pb70F8B5F8pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa3FAEE676pb81896B61pcF99F065Fpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa85C10E17pb1A2640C1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB4585A1ApbA6F06EBEpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paB4585A1Apb0A88DEA0pc*pd*");
