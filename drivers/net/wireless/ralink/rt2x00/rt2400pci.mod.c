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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5e862211, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x41136b6e, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0x697a47c2, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0x5c11d0ce, __VMLINUX_SYMBOL_STR(rt2x00mac_get_antenna) },
	{ 0x55e30312, __VMLINUX_SYMBOL_STR(rt2x00mac_set_antenna) },
	{ 0x29e23ad, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0x761fddcb, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0x9a525d40, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0xd70f0d6f, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0x8e995bc8, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0x5c85cc58, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0xa3cfddae, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0xa9bc1b81, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0x7d4786db, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0xced9b0a6, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x20f7465b, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0x4c7948d1, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0x67c1b3a, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0x2a140118, __VMLINUX_SYMBOL_STR(rt2x00mmio_flush_queue) },
	{ 0xea33f952, __VMLINUX_SYMBOL_STR(rt2x00mmio_uninitialize) },
	{ 0xe4659abf, __VMLINUX_SYMBOL_STR(rt2x00mmio_initialize) },
	{ 0x553259d6, __VMLINUX_SYMBOL_STR(rt2x00pci_resume) },
	{ 0xfeab285, __VMLINUX_SYMBOL_STR(rt2x00pci_suspend) },
	{ 0xc27e1775, __VMLINUX_SYMBOL_STR(rt2x00pci_remove) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x27cb133b, __VMLINUX_SYMBOL_STR(eeprom_93cx6_multiread) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xb5848bae, __VMLINUX_SYMBOL_STR(__iowrite32_copy) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0xf5c58b1c, __VMLINUX_SYMBOL_STR(rt2x00queue_get_entry) },
	{ 0xfe21b142, __VMLINUX_SYMBOL_STR(rt2x00lib_txdone) },
	{ 0x9764eb86, __VMLINUX_SYMBOL_STR(rt2x00lib_beacondone) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x1d979ded, __VMLINUX_SYMBOL_STR(rt2x00mmio_rxdone) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb2eb21dc, __VMLINUX_SYMBOL_STR(rt2x00queue_map_txskb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe747dbe0, __VMLINUX_SYMBOL_STR(rt2x00mmio_regbusy_read) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb6ef6830, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0x6eb1065a, __VMLINUX_SYMBOL_STR(rt2x00pci_probe) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,rt2x00mmio,rt2x00pci,eeprom_93cx6";

MODULE_ALIAS("pci:v00001814d00000101sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "92F8ABD133F803D4398D4C8");
