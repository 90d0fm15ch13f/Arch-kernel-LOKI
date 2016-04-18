#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5e862211, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x7473a5ec, __VMLINUX_SYMBOL_STR(cleancache_register_ops) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xba481b37, __VMLINUX_SYMBOL_STR(frontswap_register_ops) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0xfe727411, __VMLINUX_SYMBOL_STR(get_phys_to_machine) },
	{ 0x25f02c87, __VMLINUX_SYMBOL_STR(xen_p2m_addr) },
	{ 0x3a7d80f9, __VMLINUX_SYMBOL_STR(xen_max_p2m_pfn) },
	{ 0x3362b03c, __VMLINUX_SYMBOL_STR(xen_p2m_size) },
	{ 0x55526907, __VMLINUX_SYMBOL_STR(xen_features) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x45d14bdf, __VMLINUX_SYMBOL_STR(hypercall_page) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

