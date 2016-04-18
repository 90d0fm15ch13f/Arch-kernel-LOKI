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
	{ 0x56860d4, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0x149a370c, __VMLINUX_SYMBOL_STR(xt_unregister_matches) },
	{ 0xd4d4fe5e, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x13634ca8, __VMLINUX_SYMBOL_STR(xt_register_matches) },
	{ 0x4a260bb0, __VMLINUX_SYMBOL_STR(ip_set_test) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe6d2bbc5, __VMLINUX_SYMBOL_STR(ip_set_del) },
	{ 0x4da5da10, __VMLINUX_SYMBOL_STR(ip_set_add) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdc739891, __VMLINUX_SYMBOL_STR(ip_set_nfnl_get_byindex) },
	{ 0x8396ceb8, __VMLINUX_SYMBOL_STR(ip_set_nfnl_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,ip_set";
