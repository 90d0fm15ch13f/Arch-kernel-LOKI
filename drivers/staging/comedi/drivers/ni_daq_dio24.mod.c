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
	{ 0xa35a583a, __VMLINUX_SYMBOL_STR(subdev_8255_init) },
	{ 0x6566f328, __VMLINUX_SYMBOL_STR(comedi_alloc_subdevices) },
	{ 0x2abf5ca1, __VMLINUX_SYMBOL_STR(comedi_pcmcia_enable) },
	{ 0xfc4b687f, __VMLINUX_SYMBOL_STR(comedi_to_pcmcia_dev) },
	{ 0x93d4895d, __VMLINUX_SYMBOL_STR(comedi_pcmcia_auto_config) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi_pcmcia,comedi_8255,comedi";

MODULE_ALIAS("pcmcia:m010Bc475Cf*fn*pfn*pa*pb*pc*pd*");
