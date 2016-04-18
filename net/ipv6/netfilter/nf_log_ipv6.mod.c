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
	{ 0x3d314da4, __VMLINUX_SYMBOL_STR(nf_log_unregister) },
	{ 0xdd727d5a, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbe98810, __VMLINUX_SYMBOL_STR(nf_log_register) },
	{ 0x34b50929, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x80c68137, __VMLINUX_SYMBOL_STR(nf_log_buf_close) },
	{ 0xf87abf7e, __VMLINUX_SYMBOL_STR(nf_log_dump_packet_common) },
	{ 0xd4961de, __VMLINUX_SYMBOL_STR(nf_log_buf_open) },
	{ 0x28af6928, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xf2165d3f, __VMLINUX_SYMBOL_STR(nf_log_set) },
	{ 0x877291a, __VMLINUX_SYMBOL_STR(nf_log_unset) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa7cec0e7, __VMLINUX_SYMBOL_STR(nf_log_dump_tcp_header) },
	{ 0xb2d5459c, __VMLINUX_SYMBOL_STR(nf_log_dump_udp_header) },
	{ 0xedc6f8bc, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xcd13e4c4, __VMLINUX_SYMBOL_STR(nf_log_dump_sk_uid_gid) },
	{ 0x487c5d33, __VMLINUX_SYMBOL_STR(nf_log_buf_add) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_log_common";

