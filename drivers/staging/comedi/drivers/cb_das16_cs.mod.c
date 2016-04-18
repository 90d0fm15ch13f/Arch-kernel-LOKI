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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5e862211, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xc549cdb9, __VMLINUX_SYMBOL_STR(comedi_pcmcia_disable) },
	{ 0xdb32a1f9, __VMLINUX_SYMBOL_STR(comedi_pcmcia_auto_unconfig) },
	{ 0xc40e7810, __VMLINUX_SYMBOL_STR(comedi_pcmcia_driver_unregister) },
	{ 0xf73cdc7d, __VMLINUX_SYMBOL_STR(comedi_pcmcia_driver_register) },
	{ 0xb6787833, __VMLINUX_SYMBOL_STR(comedi_timeout) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xbb7d3182, __VMLINUX_SYMBOL_STR(comedi_dio_update_state) },
	{ 0x5cc2ff88, __VMLINUX_SYMBOL_STR(comedi_dio_insn_config) },
	{ 0x6410a679, __VMLINUX_SYMBOL_STR(comedi_alloc_subdev_readback) },
	{ 0xbb52fc7f, __VMLINUX_SYMBOL_STR(range_bipolar10) },
	{ 0x9c282323, __VMLINUX_SYMBOL_STR(comedi_8254_set_busy) },
	{ 0x8566e3e2, __VMLINUX_SYMBOL_STR(comedi_8254_subdevice_init) },
	{ 0xdb2044b2, __VMLINUX_SYMBOL_STR(range_unipolar5) },
	{ 0x6566f328, __VMLINUX_SYMBOL_STR(comedi_alloc_subdevices) },
	{ 0x845ac03e, __VMLINUX_SYMBOL_STR(comedi_8254_init) },
	{ 0xcbbeac12, __VMLINUX_SYMBOL_STR(comedi_alloc_devpriv) },
	{ 0x2abf5ca1, __VMLINUX_SYMBOL_STR(comedi_pcmcia_enable) },
	{ 0xfc4b687f, __VMLINUX_SYMBOL_STR(comedi_to_pcmcia_dev) },
	{ 0x93d4895d, __VMLINUX_SYMBOL_STR(comedi_pcmcia_auto_config) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi_pcmcia,comedi,comedi_8254";

MODULE_ALIAS("pcmcia:m01C5c0039f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m01C5c4009f*fn*pfn*pa*pb*pc*pd*");
