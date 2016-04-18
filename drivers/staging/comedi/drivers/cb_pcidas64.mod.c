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
	{ 0xbb52fc7f, __VMLINUX_SYMBOL_STR(range_bipolar10) },
	{ 0xabd103b8, __VMLINUX_SYMBOL_STR(comedi_pci_auto_unconfig) },
	{ 0x9adc6c96, __VMLINUX_SYMBOL_STR(comedi_pci_driver_unregister) },
	{ 0x4a13f885, __VMLINUX_SYMBOL_STR(comedi_pci_driver_register) },
	{ 0xdb49d660, __VMLINUX_SYMBOL_STR(comedi_handle_events) },
	{ 0xb369765e, __VMLINUX_SYMBOL_STR(comedi_buf_write_samples) },
	{ 0xa35a583a, __VMLINUX_SYMBOL_STR(subdev_8255_init) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x6410a679, __VMLINUX_SYMBOL_STR(comedi_alloc_subdev_readback) },
	{ 0xdb2044b2, __VMLINUX_SYMBOL_STR(range_unipolar5) },
	{ 0x50f2236b, __VMLINUX_SYMBOL_STR(subdev_8255_mm_init) },
	{ 0x6566f328, __VMLINUX_SYMBOL_STR(comedi_alloc_subdevices) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xe6a9fa13, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x65bd2eb5, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x84aa94f0, __VMLINUX_SYMBOL_STR(comedi_pci_enable) },
	{ 0xcbbeac12, __VMLINUX_SYMBOL_STR(comedi_alloc_devpriv) },
	{ 0xa7c107da, __VMLINUX_SYMBOL_STR(comedi_buf_read_samples) },
	{ 0xe79c8714, __VMLINUX_SYMBOL_STR(comedi_nsamples_left) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xd0aef060, __VMLINUX_SYMBOL_STR(comedi_to_pci_dev) },
	{ 0x7c85c43f, __VMLINUX_SYMBOL_STR(comedi_pci_disable) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xb6787833, __VMLINUX_SYMBOL_STR(comedi_timeout) },
	{ 0x5cc2ff88, __VMLINUX_SYMBOL_STR(comedi_dio_insn_config) },
	{ 0xbb7d3182, __VMLINUX_SYMBOL_STR(comedi_dio_update_state) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x5f0098e8, __VMLINUX_SYMBOL_STR(comedi_pci_auto_config) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi,comedi_pci,comedi_8255";

MODULE_ALIAS("pci:v00001307d0000001Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000001Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000035sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000036sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000037sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000052sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000005Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000005Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000005Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000061sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000063sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000064sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000066sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000067sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000068sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000006Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000078sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000079sv*sd*bc*sc*i*");