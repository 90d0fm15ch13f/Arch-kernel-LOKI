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
	{ 0x2f0ad9d3, __VMLINUX_SYMBOL_STR(range_bipolar5) },
	{ 0xdb32a1f9, __VMLINUX_SYMBOL_STR(comedi_pcmcia_auto_unconfig) },
	{ 0xc40e7810, __VMLINUX_SYMBOL_STR(comedi_pcmcia_driver_unregister) },
	{ 0xf73cdc7d, __VMLINUX_SYMBOL_STR(comedi_pcmcia_driver_register) },
	{ 0xc9bf1b1b, __VMLINUX_SYMBOL_STR(comedi_is_subdevice_running) },
	{ 0xdb49d660, __VMLINUX_SYMBOL_STR(comedi_handle_events) },
	{ 0xcd330f4, __VMLINUX_SYMBOL_STR(range_unknown) },
	{ 0xa35a583a, __VMLINUX_SYMBOL_STR(subdev_8255_init) },
	{ 0xbed778c6, __VMLINUX_SYMBOL_STR(ni_tio_insn_config) },
	{ 0xf9392f56, __VMLINUX_SYMBOL_STR(ni_tio_insn_read) },
	{ 0xff7af41b, __VMLINUX_SYMBOL_STR(ni_tio_init_counter) },
	{ 0xb166aaad, __VMLINUX_SYMBOL_STR(ni_gpct_device_construct) },
	{ 0xdb2044b2, __VMLINUX_SYMBOL_STR(range_unipolar5) },
	{ 0x6410a679, __VMLINUX_SYMBOL_STR(comedi_alloc_subdev_readback) },
	{ 0x6566f328, __VMLINUX_SYMBOL_STR(comedi_alloc_subdevices) },
	{ 0xcbbeac12, __VMLINUX_SYMBOL_STR(comedi_alloc_devpriv) },
	{ 0x7bf9d5e2, __VMLINUX_SYMBOL_STR(pcmcia_request_irq) },
	{ 0x2abf5ca1, __VMLINUX_SYMBOL_STR(comedi_pcmcia_enable) },
	{ 0xfc4b687f, __VMLINUX_SYMBOL_STR(comedi_to_pcmcia_dev) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xe5b1b252, __VMLINUX_SYMBOL_STR(comedi_buf_read_alloc) },
	{ 0x5cc2ff88, __VMLINUX_SYMBOL_STR(comedi_dio_insn_config) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0xa73c750e, __VMLINUX_SYMBOL_STR(comedi_buf_read_n_available) },
	{ 0xc549cdb9, __VMLINUX_SYMBOL_STR(comedi_pcmcia_disable) },
	{ 0xd323df3f, __VMLINUX_SYMBOL_STR(ni_gpct_device_destroy) },
	{ 0xbb7d3182, __VMLINUX_SYMBOL_STR(comedi_dio_update_state) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xc2f5bfc, __VMLINUX_SYMBOL_STR(pcmcia_request_io) },
	{ 0xa7c107da, __VMLINUX_SYMBOL_STR(comedi_buf_read_samples) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb369765e, __VMLINUX_SYMBOL_STR(comedi_buf_write_samples) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x93d4895d, __VMLINUX_SYMBOL_STR(comedi_pcmcia_auto_config) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi,comedi_pcmcia,comedi_8255,ni_tio,pcmcia";

MODULE_ALIAS("pcmcia:m010Bc010Df*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m010Bc010Cf*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m010Bc02C4f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m010Bc075Ef*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m010Bc0245f*fn*pfn*pa*pb*pc*pd*");
