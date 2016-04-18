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
	{ 0x20a3980, __VMLINUX_SYMBOL_STR(mite_dma_arm) },
	{ 0xa61a38fc, __VMLINUX_SYMBOL_STR(mite_get_status) },
	{ 0x4c93a32d, __VMLINUX_SYMBOL_STR(mite_dma_disarm) },
	{ 0x5fb48cef, __VMLINUX_SYMBOL_STR(ni_tio_set_gate_src) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x79e7ed18, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xceea0c93, __VMLINUX_SYMBOL_STR(mite_prep_dma) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa1800e43, __VMLINUX_SYMBOL_STR(mite_sync_input_dma) },
	{ 0xe6b6e9b4, __VMLINUX_SYMBOL_STR(comedi_buf_write_alloc) },
	{ 0x568dd445, __VMLINUX_SYMBOL_STR(mite_done) },
	{ 0xaeee80f5, __VMLINUX_SYMBOL_STR(ni_tio_arm) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mite,ni_tio,comedi";

