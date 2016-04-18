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
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xda7f856d, __VMLINUX_SYMBOL_STR(mISDN_ctrl_bchannel) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xa34e33ac, __VMLINUX_SYMBOL_STR(create_l1) },
	{ 0x419d3f61, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xc3401729, __VMLINUX_SYMBOL_STR(mISDN_register_clock) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x44c5af25, __VMLINUX_SYMBOL_STR(mISDN_register_device) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3d6ae464, __VMLINUX_SYMBOL_STR(mISDN_initbchannel) },
	{ 0xd634d59c, __VMLINUX_SYMBOL_STR(mISDN_initdchannel) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8a4e99fb, __VMLINUX_SYMBOL_STR(mISDN_clock_update) },
	{ 0x1010680f, __VMLINUX_SYMBOL_STR(recv_Bchannel_skb) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x2eacf29d, __VMLINUX_SYMBOL_STR(recv_Dchannel_skb) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x431b4daa, __VMLINUX_SYMBOL_STR(recv_Dchannel) },
	{ 0x60ecec48, __VMLINUX_SYMBOL_STR(recv_Bchannel) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7dd38c65, __VMLINUX_SYMBOL_STR(bchannel_get_rxbuf) },
	{ 0x962f9817, __VMLINUX_SYMBOL_STR(queue_ch_frame) },
	{ 0xc4bde566, __VMLINUX_SYMBOL_STR(dchannel_senddata) },
	{ 0x5b60bd2b, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x5b90cf8d, __VMLINUX_SYMBOL_STR(bchannel_senddata) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x5351fa80, __VMLINUX_SYMBOL_STR(get_next_dframe) },
	{ 0x419bfe43, __VMLINUX_SYMBOL_STR(get_next_bframe) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x3a2e1462, __VMLINUX_SYMBOL_STR(mISDN_clear_bchannel) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe8f617eb, __VMLINUX_SYMBOL_STR(mISDN_unregister_clock) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xff7559e4, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x339b4475, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x588886a6, __VMLINUX_SYMBOL_STR(l1_event) },
	{ 0x9c9244d4, __VMLINUX_SYMBOL_STR(mISDN_unregister_device) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x4f4404cd, __VMLINUX_SYMBOL_STR(mISDN_freedchannel) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x96b891e4, __VMLINUX_SYMBOL_STR(mISDN_freebchannel) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mISDN_core";

MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B567bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B566bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B569bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B560bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B568bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd000008B4bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B520bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B620bc*sc*i*");
MODULE_ALIAS("pci:v0000D161d0000B410sv0000D161sd0000B410bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B540bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B550bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd00001234bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000E888bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000E884bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B761bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv00001397sd0000B762bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B562bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B56Bbc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd000016B8bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B521bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B522bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B552bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B622bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000E998bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv00001397sd0000B55Bbc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000B563bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000B56Abc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000B565bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000B564bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd000030B1bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000B523bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000C523bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv00001397sd00003136bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv00001397sd00003137bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv00001397sd0000B553bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000008B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000016B8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001397d000030B1sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F0A9CA8F04A3A3F4E479A67");
