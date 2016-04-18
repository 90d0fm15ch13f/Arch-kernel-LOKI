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
	{ 0xa5be1e1e, __VMLINUX_SYMBOL_STR(nft_redir_policy) },
	{ 0x5a05eb3e, __VMLINUX_SYMBOL_STR(nft_redir_validate) },
	{ 0xf57e4065, __VMLINUX_SYMBOL_STR(nft_redir_dump) },
	{ 0x2e7ba5aa, __VMLINUX_SYMBOL_STR(nft_redir_init) },
	{ 0xf196b82f, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0x373de4c8, __VMLINUX_SYMBOL_STR(nft_register_expr) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfe849a93, __VMLINUX_SYMBOL_STR(nf_nat_redirect_ipv6) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_redir,nf_tables,nf_nat_redirect";

