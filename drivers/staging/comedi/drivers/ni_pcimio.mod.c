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
	{ 0xabd103b8, __VMLINUX_SYMBOL_STR(comedi_pci_auto_unconfig) },
	{ 0x9adc6c96, __VMLINUX_SYMBOL_STR(comedi_pci_driver_unregister) },
	{ 0x4a13f885, __VMLINUX_SYMBOL_STR(comedi_pci_driver_register) },
	{ 0x3431d96f, __VMLINUX_SYMBOL_STR(ni_tio_cancel) },
	{ 0x17583e9b, __VMLINUX_SYMBOL_STR(ni_tio_cmd) },
	{ 0x636b1555, __VMLINUX_SYMBOL_STR(ni_tio_acknowledge) },
	{ 0xb3cb591e, __VMLINUX_SYMBOL_STR(ni_tio_set_mite_channel) },
	{ 0xcd330f4, __VMLINUX_SYMBOL_STR(range_unknown) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xa35a583a, __VMLINUX_SYMBOL_STR(subdev_8255_init) },
	{ 0xaf7b8968, __VMLINUX_SYMBOL_STR(ni_tio_cmdtest) },
	{ 0xbed778c6, __VMLINUX_SYMBOL_STR(ni_tio_insn_config) },
	{ 0xf9392f56, __VMLINUX_SYMBOL_STR(ni_tio_insn_read) },
	{ 0xff7af41b, __VMLINUX_SYMBOL_STR(ni_tio_init_counter) },
	{ 0xb166aaad, __VMLINUX_SYMBOL_STR(ni_gpct_device_construct) },
	{ 0xdb2044b2, __VMLINUX_SYMBOL_STR(range_unipolar5) },
	{ 0x6410a679, __VMLINUX_SYMBOL_STR(comedi_alloc_subdev_readback) },
	{ 0x6566f328, __VMLINUX_SYMBOL_STR(comedi_alloc_subdevices) },
	{ 0x8c00284e, __VMLINUX_SYMBOL_STR(mite_alloc_ring) },
	{ 0xf67d832b, __VMLINUX_SYMBOL_STR(mite_setup2) },
	{ 0x2c5678, __VMLINUX_SYMBOL_STR(mite_alloc) },
	{ 0xcbbeac12, __VMLINUX_SYMBOL_STR(comedi_alloc_devpriv) },
	{ 0x84aa94f0, __VMLINUX_SYMBOL_STR(comedi_pci_enable) },
	{ 0xd0aef060, __VMLINUX_SYMBOL_STR(comedi_to_pci_dev) },
	{ 0xe6b6e9b4, __VMLINUX_SYMBOL_STR(comedi_buf_write_alloc) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xc9bf1b1b, __VMLINUX_SYMBOL_STR(comedi_is_subdevice_running) },
	{ 0xff3daaa3, __VMLINUX_SYMBOL_STR(mite_sync_output_dma) },
	{ 0xa61a38fc, __VMLINUX_SYMBOL_STR(mite_get_status) },
	{ 0xdb49d660, __VMLINUX_SYMBOL_STR(comedi_handle_events) },
	{ 0x63fe9fa9, __VMLINUX_SYMBOL_STR(ni_tio_handle_interrupt) },
	{ 0xb369765e, __VMLINUX_SYMBOL_STR(comedi_buf_write_samples) },
	{ 0x8fb974e, __VMLINUX_SYMBOL_STR(mite_bytes_in_transit) },
	{ 0xa1800e43, __VMLINUX_SYMBOL_STR(mite_sync_input_dma) },
	{ 0x5cc2ff88, __VMLINUX_SYMBOL_STR(comedi_dio_insn_config) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0x7c85c43f, __VMLINUX_SYMBOL_STR(comedi_pci_disable) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xc6534506, __VMLINUX_SYMBOL_STR(mite_detach) },
	{ 0x497ba08d, __VMLINUX_SYMBOL_STR(mite_free_ring) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xd323df3f, __VMLINUX_SYMBOL_STR(ni_gpct_device_destroy) },
	{ 0x20a3980, __VMLINUX_SYMBOL_STR(mite_dma_arm) },
	{ 0xceea0c93, __VMLINUX_SYMBOL_STR(mite_prep_dma) },
	{ 0xe5b1b252, __VMLINUX_SYMBOL_STR(comedi_buf_read_alloc) },
	{ 0xbb7d3182, __VMLINUX_SYMBOL_STR(comedi_dio_update_state) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x17decbdb, __VMLINUX_SYMBOL_STR(mite_request_channel_in_range) },
	{ 0xc36b2517, __VMLINUX_SYMBOL_STR(mite_release_channel) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x68b70f63, __VMLINUX_SYMBOL_STR(mite_buf_change) },
	{ 0x5f0098e8, __VMLINUX_SYMBOL_STR(comedi_pci_auto_config) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi,comedi_pci,ni_tiocmd,comedi_8255,ni_tio,mite";

MODULE_ALIAS("pci:v00001093d00000162sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001170sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001180sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001190sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000011B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000011C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000011D0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001270sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001330sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001340sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000014E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000014F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001580sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000015B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001880sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001870sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000018B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000018C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002410sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002420sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002430sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002890sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000028C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002A60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002A70sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002A80sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002AB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002B80sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002B90sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002C80sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00002CA0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070BDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070BFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070F2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000070F3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d0000710Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d0000716Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d0000716Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d0000717Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000071BCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d0000717Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000072E8sv*sd*bc*sc*i*");
