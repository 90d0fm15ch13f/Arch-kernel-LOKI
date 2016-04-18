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
	{ 0xe3b8c66e, __VMLINUX_SYMBOL_STR(saa7146_vfree_destroy_pgtable) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x9da54278, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x1fca5e55, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0xb6c51671, __VMLINUX_SYMBOL_STR(saa7146_vmalloc_build_pgtable) },
	{ 0xc49c1597, __VMLINUX_SYMBOL_STR(saa7146_setgpio) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xc1a83fe8, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb9f9ae95, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0xa9e32c5f, __VMLINUX_SYMBOL_STR(ttpci_eeprom_parse_mac) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x1efa54a0, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x28a82d5e, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x296df6b1, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x2e6e5c27, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x631af55c, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter_packets) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xc906433a, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7c472002, __VMLINUX_SYMBOL_STR(saa7146_i2c_adapter_prepare) },
	{ 0xfd5e97f7, __VMLINUX_SYMBOL_STR(saa7146_wait_for_debi_done) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x73f4a9b1, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=saa7146,dvb-core,ttpci-eeprom";

