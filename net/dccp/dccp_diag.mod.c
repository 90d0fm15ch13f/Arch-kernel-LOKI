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
	{ 0xa0e9a5e, __VMLINUX_SYMBOL_STR(inet_diag_dump_icsk) },
	{ 0x23672cd0, __VMLINUX_SYMBOL_STR(dccp_hashinfo) },
	{ 0xf0c9650, __VMLINUX_SYMBOL_STR(inet_diag_unregister) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x1e9345c7, __VMLINUX_SYMBOL_STR(inet_diag_dump_one_icsk) },
	{ 0x1a5f320, __VMLINUX_SYMBOL_STR(inet_diag_register) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inet_diag,dccp";

