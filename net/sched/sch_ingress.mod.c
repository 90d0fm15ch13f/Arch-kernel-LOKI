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
	{ 0x7be6905, __VMLINUX_SYMBOL_STR(net_inc_egress_queue) },
	{ 0x2c3054f9, __VMLINUX_SYMBOL_STR(net_inc_ingress_queue) },
	{ 0x86f85114, __VMLINUX_SYMBOL_STR(net_dec_egress_queue) },
	{ 0x46013233, __VMLINUX_SYMBOL_STR(net_dec_ingress_queue) },
	{ 0x59380a70, __VMLINUX_SYMBOL_STR(tcf_destroy_chain) },
	{ 0xd138423f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

