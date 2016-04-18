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
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x2f0ad9d3, __VMLINUX_SYMBOL_STR(range_bipolar5) },
	{ 0x6410a679, __VMLINUX_SYMBOL_STR(comedi_alloc_subdev_readback) },
	{ 0xb6787833, __VMLINUX_SYMBOL_STR(comedi_timeout) },
	{ 0xbb7d3182, __VMLINUX_SYMBOL_STR(comedi_dio_update_state) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdb2044b2, __VMLINUX_SYMBOL_STR(range_unipolar5) },
	{ 0x845ac03e, __VMLINUX_SYMBOL_STR(comedi_8254_init) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xcd330f4, __VMLINUX_SYMBOL_STR(range_unknown) },
	{ 0x245ccad5, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x8566e3e2, __VMLINUX_SYMBOL_STR(comedi_8254_subdevice_init) },
	{ 0xa35a583a, __VMLINUX_SYMBOL_STR(subdev_8255_init) },
	{ 0x6566f328, __VMLINUX_SYMBOL_STR(comedi_alloc_subdevices) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi,comedi_8254,comedi_8255";

