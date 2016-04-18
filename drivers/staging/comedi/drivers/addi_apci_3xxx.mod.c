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
	{ 0x6410a679, __VMLINUX_SYMBOL_STR(comedi_alloc_subdev_readback) },
	{ 0xdb2044b2, __VMLINUX_SYMBOL_STR(range_unipolar5) },
	{ 0x6566f328, __VMLINUX_SYMBOL_STR(comedi_alloc_subdevices) },
	{ 0x65bd2eb5, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0x84aa94f0, __VMLINUX_SYMBOL_STR(comedi_pci_enable) },
	{ 0xcbbeac12, __VMLINUX_SYMBOL_STR(comedi_alloc_devpriv) },
	{ 0xd0aef060, __VMLINUX_SYMBOL_STR(comedi_to_pci_dev) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x5cc2ff88, __VMLINUX_SYMBOL_STR(comedi_dio_insn_config) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xdb49d660, __VMLINUX_SYMBOL_STR(comedi_handle_events) },
	{ 0xb369765e, __VMLINUX_SYMBOL_STR(comedi_buf_write_samples) },
	{ 0xb6787833, __VMLINUX_SYMBOL_STR(comedi_timeout) },
	{ 0xbb7d3182, __VMLINUX_SYMBOL_STR(comedi_dio_update_state) },
	{ 0x5f0098e8, __VMLINUX_SYMBOL_STR(comedi_pci_auto_config) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi_pci,comedi";

MODULE_ALIAS("pci:v000015B8d00003010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d0000300Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d0000300Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003018sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003019sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d0000301Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d0000301Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d0000301Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d0000301Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d0000301Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d0000301Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003020sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003021sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003022sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d0000300Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B8d00003024sv*sd*bc*sc*i*");
