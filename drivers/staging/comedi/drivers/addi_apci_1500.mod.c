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
	{ 0x26091a8e, __VMLINUX_SYMBOL_STR(comedi_pci_detach) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xcd330f4, __VMLINUX_SYMBOL_STR(range_unknown) },
	{ 0xdb2044b2, __VMLINUX_SYMBOL_STR(range_unipolar5) },
	{ 0x6566f328, __VMLINUX_SYMBOL_STR(comedi_alloc_subdevices) },
	{ 0x84aa94f0, __VMLINUX_SYMBOL_STR(comedi_pci_enable) },
	{ 0xcbbeac12, __VMLINUX_SYMBOL_STR(comedi_alloc_devpriv) },
	{ 0xd0aef060, __VMLINUX_SYMBOL_STR(comedi_to_pci_dev) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xdb49d660, __VMLINUX_SYMBOL_STR(comedi_handle_events) },
	{ 0xb369765e, __VMLINUX_SYMBOL_STR(comedi_buf_write_samples) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xbb7d3182, __VMLINUX_SYMBOL_STR(comedi_dio_update_state) },
	{ 0x5f0098e8, __VMLINUX_SYMBOL_STR(comedi_pci_auto_config) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi_pci,comedi";

MODULE_ALIAS("pci:v000010E8d000080FCsv*sd*bc*sc*i*");
