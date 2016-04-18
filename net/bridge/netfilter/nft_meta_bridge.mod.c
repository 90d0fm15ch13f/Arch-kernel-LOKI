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
	{ 0xb80e8358, __VMLINUX_SYMBOL_STR(nft_meta_policy) },
	{ 0xcabbec99, __VMLINUX_SYMBOL_STR(nft_meta_get_dump) },
	{ 0x52636243, __VMLINUX_SYMBOL_STR(nft_meta_set_dump) },
	{ 0x6c0eadbf, __VMLINUX_SYMBOL_STR(nft_meta_set_destroy) },
	{ 0x48781310, __VMLINUX_SYMBOL_STR(nft_meta_set_init) },
	{ 0x69b549fd, __VMLINUX_SYMBOL_STR(nft_meta_set_eval) },
	{ 0xf196b82f, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0x373de4c8, __VMLINUX_SYMBOL_STR(nft_register_expr) },
	{ 0x821b3d76, __VMLINUX_SYMBOL_STR(nft_validate_register_store) },
	{ 0x1e6b75a3, __VMLINUX_SYMBOL_STR(nft_parse_register) },
	{ 0xc21ffe17, __VMLINUX_SYMBOL_STR(nft_meta_get_init) },
	{ 0x1c202ec, __VMLINUX_SYMBOL_STR(nft_meta_get_eval) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_meta,nf_tables";

