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
	{ 0xa35a583a, __VMLINUX_SYMBOL_STR(subdev_8255_init) },
	{ 0x6410a679, __VMLINUX_SYMBOL_STR(comedi_alloc_subdev_readback) },
	{ 0x6566f328, __VMLINUX_SYMBOL_STR(comedi_alloc_subdevices) },
	{ 0x845ac03e, __VMLINUX_SYMBOL_STR(comedi_8254_init) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x84aa94f0, __VMLINUX_SYMBOL_STR(comedi_pci_enable) },
	{ 0xcbbeac12, __VMLINUX_SYMBOL_STR(comedi_alloc_devpriv) },
	{ 0xd0aef060, __VMLINUX_SYMBOL_STR(comedi_to_pci_dev) },
	{ 0xb369765e, __VMLINUX_SYMBOL_STR(comedi_buf_write_samples) },
	{ 0xdb49d660, __VMLINUX_SYMBOL_STR(comedi_handle_events) },
	{ 0x245ccad5, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0xa7c107da, __VMLINUX_SYMBOL_STR(comedi_buf_read_samples) },
	{ 0xe79c8714, __VMLINUX_SYMBOL_STR(comedi_nsamples_left) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa68344a2, __VMLINUX_SYMBOL_STR(comedi_8254_cascade_ns_to_timer) },
	{ 0x26091a8e, __VMLINUX_SYMBOL_STR(comedi_pci_detach) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb88c5caf, __VMLINUX_SYMBOL_STR(comedi_8254_pacer_enable) },
	{ 0xf0277aeb, __VMLINUX_SYMBOL_STR(comedi_8254_update_divisors) },
	{ 0xb6787833, __VMLINUX_SYMBOL_STR(comedi_timeout) },
	{ 0x5f0098e8, __VMLINUX_SYMBOL_STR(comedi_pci_auto_config) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi_pci,comedi_8255,comedi,comedi_8254";

MODULE_ALIAS("pci:v00001307d00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000000Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d00000019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000001Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000004Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000001Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001307d0000001Bsv*sd*bc*sc*i*");
