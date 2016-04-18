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
	{ 0xabd103b8, __VMLINUX_SYMBOL_STR(comedi_pci_auto_unconfig) },
	{ 0x9adc6c96, __VMLINUX_SYMBOL_STR(comedi_pci_driver_unregister) },
	{ 0x4a13f885, __VMLINUX_SYMBOL_STR(comedi_pci_driver_register) },
	{ 0xc36b2517, __VMLINUX_SYMBOL_STR(mite_release_channel) },
	{ 0x4c93a32d, __VMLINUX_SYMBOL_STR(mite_dma_disarm) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x68b70f63, __VMLINUX_SYMBOL_STR(mite_buf_change) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x7c85c43f, __VMLINUX_SYMBOL_STR(comedi_pci_disable) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xc6534506, __VMLINUX_SYMBOL_STR(mite_detach) },
	{ 0x497ba08d, __VMLINUX_SYMBOL_STR(mite_free_ring) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xdb2044b2, __VMLINUX_SYMBOL_STR(range_unipolar5) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x6566f328, __VMLINUX_SYMBOL_STR(comedi_alloc_subdevices) },
	{ 0xcdb7f682, __VMLINUX_SYMBOL_STR(comedi_load_firmware) },
	{ 0x8c00284e, __VMLINUX_SYMBOL_STR(mite_alloc_ring) },
	{ 0xf67d832b, __VMLINUX_SYMBOL_STR(mite_setup2) },
	{ 0x2c5678, __VMLINUX_SYMBOL_STR(mite_alloc) },
	{ 0xcbbeac12, __VMLINUX_SYMBOL_STR(comedi_alloc_devpriv) },
	{ 0x84aa94f0, __VMLINUX_SYMBOL_STR(comedi_pci_enable) },
	{ 0xd0aef060, __VMLINUX_SYMBOL_STR(comedi_to_pci_dev) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x3356b90b, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x5cc2ff88, __VMLINUX_SYMBOL_STR(comedi_dio_insn_config) },
	{ 0xbb7d3182, __VMLINUX_SYMBOL_STR(comedi_dio_update_state) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x20a3980, __VMLINUX_SYMBOL_STR(mite_dma_arm) },
	{ 0xceea0c93, __VMLINUX_SYMBOL_STR(mite_prep_dma) },
	{ 0xe6b6e9b4, __VMLINUX_SYMBOL_STR(comedi_buf_write_alloc) },
	{ 0x17decbdb, __VMLINUX_SYMBOL_STR(mite_request_channel_in_range) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xdb49d660, __VMLINUX_SYMBOL_STR(comedi_handle_events) },
	{ 0xa61a38fc, __VMLINUX_SYMBOL_STR(mite_get_status) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xa1800e43, __VMLINUX_SYMBOL_STR(mite_sync_input_dma) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x5f0098e8, __VMLINUX_SYMBOL_STR(comedi_pci_auto_config) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi_pci,mite,comedi";

MODULE_ALIAS("pci:v00001093d00001150sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d000012B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001093d00001320sv*sd*bc*sc*i*");
