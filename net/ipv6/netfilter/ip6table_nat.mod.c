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
	{ 0xbb01aa20, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xdd727d5a, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x5c173ac7, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x34b50929, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2c8ba556, __VMLINUX_SYMBOL_STR(ip6t_register_table) },
	{ 0xeb96cd5f, __VMLINUX_SYMBOL_STR(ip6t_alloc_initial_table) },
	{ 0xf4b45371, __VMLINUX_SYMBOL_STR(ip6t_unregister_table) },
	{ 0xe2bf37f9, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_in) },
	{ 0x30cef244, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_out) },
	{ 0x94de0e1a, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_local_fn) },
	{ 0x4c67137f, __VMLINUX_SYMBOL_STR(ip6t_do_table) },
	{ 0x88f474cb, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_fn) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip6_tables,nf_nat_ipv6";
