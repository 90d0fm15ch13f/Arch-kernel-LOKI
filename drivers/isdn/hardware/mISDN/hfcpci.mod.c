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
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x9c9244d4, __VMLINUX_SYMBOL_STR(mISDN_unregister_device) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x1fa39043, __VMLINUX_SYMBOL_STR(driver_for_each_device) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x4f4404cd, __VMLINUX_SYMBOL_STR(mISDN_freedchannel) },
	{ 0x96b891e4, __VMLINUX_SYMBOL_STR(mISDN_freebchannel) },
	{ 0x44c5af25, __VMLINUX_SYMBOL_STR(mISDN_register_device) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xedaa19a7, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xe6a9fa13, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x3d6ae464, __VMLINUX_SYMBOL_STR(mISDN_initbchannel) },
	{ 0xd634d59c, __VMLINUX_SYMBOL_STR(mISDN_initdchannel) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x962f9817, __VMLINUX_SYMBOL_STR(queue_ch_frame) },
	{ 0xc4bde566, __VMLINUX_SYMBOL_STR(dchannel_senddata) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xa34e33ac, __VMLINUX_SYMBOL_STR(create_l1) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x419d3f61, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x431b4daa, __VMLINUX_SYMBOL_STR(recv_Dchannel) },
	{ 0x5351fa80, __VMLINUX_SYMBOL_STR(get_next_dframe) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7dd38c65, __VMLINUX_SYMBOL_STR(bchannel_get_rxbuf) },
	{ 0x60ecec48, __VMLINUX_SYMBOL_STR(recv_Bchannel) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x5b60bd2b, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x588886a6, __VMLINUX_SYMBOL_STR(l1_event) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x339b4475, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x5b90cf8d, __VMLINUX_SYMBOL_STR(bchannel_senddata) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x419bfe43, __VMLINUX_SYMBOL_STR(get_next_bframe) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xda7f856d, __VMLINUX_SYMBOL_STR(mISDN_ctrl_bchannel) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x3a2e1462, __VMLINUX_SYMBOL_STR(mISDN_clear_bchannel) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mISDN_core";

MODULE_ALIAS("pci:v00001397d00002BD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B00Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B00Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B00Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B700sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d0000B701sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013D1d00002BD1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001043d00000675sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000871d0000FFA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000871d0000FFA1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001051d00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B0d00002BD0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000070sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000071sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000072sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000114Fd00000073sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000182Dd00003069sv*sd*bc*sc*i*");
