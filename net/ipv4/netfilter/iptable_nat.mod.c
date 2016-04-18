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
	{ 0x26da21cc, __VMLINUX_SYMBOL_STR(ipt_register_table) },
	{ 0x6a53a159, __VMLINUX_SYMBOL_STR(ipt_alloc_initial_table) },
	{ 0xc453490b, __VMLINUX_SYMBOL_STR(ipt_unregister_table) },
	{ 0x774e7b7e, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_in) },
	{ 0x15b483d9, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_out) },
	{ 0x5b946c21, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_local_fn) },
	{ 0x909eb1e2, __VMLINUX_SYMBOL_STR(ipt_do_table) },
	{ 0x97694c96, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_fn) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tables,nf_nat_ipv4";

