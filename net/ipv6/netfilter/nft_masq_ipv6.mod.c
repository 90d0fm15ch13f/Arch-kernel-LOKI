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
	{ 0xe3b8ea21, __VMLINUX_SYMBOL_STR(nft_masq_policy) },
	{ 0x30fae17e, __VMLINUX_SYMBOL_STR(nft_masq_validate) },
	{ 0xed6964b1, __VMLINUX_SYMBOL_STR(nft_masq_dump) },
	{ 0x3ed7694e, __VMLINUX_SYMBOL_STR(nft_masq_init) },
	{ 0x2293972c, __VMLINUX_SYMBOL_STR(nf_nat_masquerade_ipv6_unregister_notifier) },
	{ 0xf196b82f, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0x38d4401a, __VMLINUX_SYMBOL_STR(nf_nat_masquerade_ipv6_register_notifier) },
	{ 0x373de4c8, __VMLINUX_SYMBOL_STR(nft_register_expr) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2c2ba074, __VMLINUX_SYMBOL_STR(nf_nat_masquerade_ipv6) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_masq,nf_nat_masquerade_ipv6,nf_tables";

