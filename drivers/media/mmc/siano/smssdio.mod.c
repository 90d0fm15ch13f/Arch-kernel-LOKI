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
	{ 0xc101e4bb, __VMLINUX_SYMBOL_STR(smscore_start_device) },
	{ 0xcdf72977, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x6b2f6ff0, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x92b22b5, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xbd32b97c, __VMLINUX_SYMBOL_STR(smscore_set_board_id) },
	{ 0x300066f7, __VMLINUX_SYMBOL_STR(smscore_register_device) },
	{ 0x844539ae, __VMLINUX_SYMBOL_STR(sms_get_board) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x30d12acd, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0x37d91069, __VMLINUX_SYMBOL_STR(smsendian_handle_tx_message) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x268cfd46, __VMLINUX_SYMBOL_STR(smscore_getbuffer) },
	{ 0xf9ea7549, __VMLINUX_SYMBOL_STR(smscore_onresponse) },
	{ 0x45284ae9, __VMLINUX_SYMBOL_STR(smsendian_handle_rx_message) },
	{ 0xfa5ba5ff, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0x85406752, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x15c03c40, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xa0eb2176, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xedd45401, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x94e48a7a, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x8ce2b338, __VMLINUX_SYMBOL_STR(smscore_unregister_device) },
	{ 0x1c740a9b, __VMLINUX_SYMBOL_STR(smscore_putbuffer) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core,smsmdtv";

MODULE_ALIAS("sdio:c*v039Ad5347*");
MODULE_ALIAS("sdio:c*v039Ad1100*");
MODULE_ALIAS("sdio:c*v039Ad0201*");
MODULE_ALIAS("sdio:c*v039Ad0300*");
MODULE_ALIAS("sdio:c*v039Ad0301*");
MODULE_ALIAS("sdio:c*v039Ad0302*");
MODULE_ALIAS("sdio:c*v039Ad0500*");
MODULE_ALIAS("sdio:c*v039Ad0600*");
MODULE_ALIAS("sdio:c*v039Ad0700*");
MODULE_ALIAS("sdio:c*v039Ad0800*");
