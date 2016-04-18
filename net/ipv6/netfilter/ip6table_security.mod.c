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
	{ 0x882a5ff, __VMLINUX_SYMBOL_STR(xt_hook_unlink) },
	{ 0xdd727d5a, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xfc9fb206, __VMLINUX_SYMBOL_STR(xt_hook_link) },
	{ 0x34b50929, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2c8ba556, __VMLINUX_SYMBOL_STR(ip6t_register_table) },
	{ 0xeb96cd5f, __VMLINUX_SYMBOL_STR(ip6t_alloc_initial_table) },
	{ 0xf4b45371, __VMLINUX_SYMBOL_STR(ip6t_unregister_table) },
	{ 0x4c67137f, __VMLINUX_SYMBOL_STR(ip6t_do_table) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,ip6_tables";

