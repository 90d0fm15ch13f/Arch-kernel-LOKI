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
	{ 0xd7fb2f2f, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0x70fac1af, __VMLINUX_SYMBOL_STR(register_qdisc) },
	{ 0xcf597181, __VMLINUX_SYMBOL_STR(qdisc_create_dflt) },
	{ 0x8ac5a975, __VMLINUX_SYMBOL_STR(default_qdisc_ops) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x6dc3a3f3, __VMLINUX_SYMBOL_STR(dev_deactivate) },
	{ 0xa2cd5533, __VMLINUX_SYMBOL_STR(dev_activate) },
	{ 0x2713a25f, __VMLINUX_SYMBOL_STR(gnet_stats_copy_queue) },
	{ 0xdf171e9f, __VMLINUX_SYMBOL_STR(gnet_stats_copy_basic) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3c30359, __VMLINUX_SYMBOL_STR(qdisc_list_add) },
	{ 0x67101a1b, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0x15f20be4, __VMLINUX_SYMBOL_STR(dev_graft_qdisc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xd138423f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

