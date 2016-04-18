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
	{ 0x29fc5ca6, __VMLINUX_SYMBOL_STR(lib80211_unregister_crypto_ops) },
	{ 0xff5f8d1c, __VMLINUX_SYMBOL_STR(lib80211_register_crypto_ops) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xbde446b5, __VMLINUX_SYMBOL_STR(wireless_send_event) },
	{ 0xb54e53f2, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7cf4b098, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lib80211";
