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
	{ 0xb8cc2569, __VMLINUX_SYMBOL_STR(xt_unregister_match) },
	{ 0x3df3a838, __VMLINUX_SYMBOL_STR(xt_register_match) },
	{ 0xbf36c664, __VMLINUX_SYMBOL_STR(nfnl_acct_overquota) },
	{ 0x3c62277e, __VMLINUX_SYMBOL_STR(nfnl_acct_update) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdc3a2981, __VMLINUX_SYMBOL_STR(nfnl_acct_find_get) },
	{ 0xbecf5d14, __VMLINUX_SYMBOL_STR(nfnl_acct_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nfnetlink_acct";

