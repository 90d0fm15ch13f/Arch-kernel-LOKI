#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5e862211, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xa66a42ee, __VMLINUX_SYMBOL_STR(rt2800_disable_wpdma) },
	{ 0x9764eb86, __VMLINUX_SYMBOL_STR(rt2x00lib_beacondone) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0x52ce5541, __VMLINUX_SYMBOL_STR(rt2800_config) },
	{ 0xf4822b76, __VMLINUX_SYMBOL_STR(rt2800_get_txwi_rxwi_size) },
	{ 0xd09facf8, __VMLINUX_SYMBOL_STR(rt2x00lib_pretbtt) },
	{ 0x1df8f259, __VMLINUX_SYMBOL_STR(rt2800_wait_wpdma_ready) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xec151e79, __VMLINUX_SYMBOL_STR(rt2800_process_rxwi) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xec1cfde3, __VMLINUX_SYMBOL_STR(rt2x00queue_for_each_entry) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xf5c58b1c, __VMLINUX_SYMBOL_STR(rt2x00queue_get_entry) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x1d979ded, __VMLINUX_SYMBOL_STR(rt2x00mmio_rxdone) },
	{ 0x95034f2d, __VMLINUX_SYMBOL_STR(rt2800_txdone_entry) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xdd26e457, __VMLINUX_SYMBOL_STR(rt2800_enable_radio) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2800lib,rt2x00lib,rt2x00mmio";


MODULE_INFO(srcversion, "CE7AF32206FE06E486C8BF3");
