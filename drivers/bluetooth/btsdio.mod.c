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
	{ 0x16fe83a6, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0xf80ef3f2, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x28b137e6, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xdd89b658, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x685393bf, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x8e5ac859, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xefd24019, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0x85406752, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x677941d1, __VMLINUX_SYMBOL_STR(hci_register_dev) },
	{ 0xa83e3de6, __VMLINUX_SYMBOL_STR(hci_alloc_dev) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xcdf72977, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x92b22b5, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x15c03c40, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xa0eb2176, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xedd45401, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x65d33efb, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x94e48a7a, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x5b60bd2b, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x274cb35c, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x9db2e0a2, __VMLINUX_SYMBOL_STR(hci_free_dev) },
	{ 0x69a77971, __VMLINUX_SYMBOL_STR(hci_unregister_dev) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core,bluetooth";

MODULE_ALIAS("sdio:c02v*d*");
MODULE_ALIAS("sdio:c03v*d*");
MODULE_ALIAS("sdio:c09v*d*");

MODULE_INFO(srcversion, "F1379AB0160F65DDE2C2734");
