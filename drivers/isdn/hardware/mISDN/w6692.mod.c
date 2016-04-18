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
	{ 0xd8998f40, __VMLINUX_SYMBOL_STR(param_get_uint) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xa34e33ac, __VMLINUX_SYMBOL_STR(create_l1) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x44c5af25, __VMLINUX_SYMBOL_STR(mISDN_register_device) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x3d6ae464, __VMLINUX_SYMBOL_STR(mISDN_initbchannel) },
	{ 0xd634d59c, __VMLINUX_SYMBOL_STR(mISDN_initdchannel) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x431b4daa, __VMLINUX_SYMBOL_STR(recv_Dchannel) },
	{ 0x5351fa80, __VMLINUX_SYMBOL_STR(get_next_dframe) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x60ecec48, __VMLINUX_SYMBOL_STR(recv_Bchannel) },
	{ 0x419bfe43, __VMLINUX_SYMBOL_STR(get_next_bframe) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xd20f3020, __VMLINUX_SYMBOL_STR(_raw_write_unlock_irqrestore) },
	{ 0xea3f725d, __VMLINUX_SYMBOL_STR(_raw_write_lock_irqsave) },
	{ 0x4f4404cd, __VMLINUX_SYMBOL_STR(mISDN_freedchannel) },
	{ 0x96b891e4, __VMLINUX_SYMBOL_STR(mISDN_freebchannel) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xff7559e4, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0x9c9244d4, __VMLINUX_SYMBOL_STR(mISDN_unregister_device) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xb10820e4, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0x179651ac, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xb984aefc, __VMLINUX_SYMBOL_STR(param_set_uint) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x7dd38c65, __VMLINUX_SYMBOL_STR(bchannel_get_rxbuf) },
	{ 0x962f9817, __VMLINUX_SYMBOL_STR(queue_ch_frame) },
	{ 0xc4bde566, __VMLINUX_SYMBOL_STR(dchannel_senddata) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x419d3f61, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x5b90cf8d, __VMLINUX_SYMBOL_STR(bchannel_senddata) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xda7f856d, __VMLINUX_SYMBOL_STR(mISDN_ctrl_bchannel) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x5b60bd2b, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x588886a6, __VMLINUX_SYMBOL_STR(l1_event) },
	{ 0x3a2e1462, __VMLINUX_SYMBOL_STR(mISDN_clear_bchannel) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mISDN_core";

MODULE_ALIAS("pci:v00000675d00001702sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001050d00006692sv000016ECsd00003409bc*sc*i*");
MODULE_ALIAS("pci:v00001050d00006692sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F3284E518F4E7547575C3C7");