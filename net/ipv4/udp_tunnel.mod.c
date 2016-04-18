#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5e862211, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x654e8ddd, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0xaa62ba03, __VMLINUX_SYMBOL_STR(metadata_dst_alloc) },
	{ 0x4b01f2d0, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0x41d643cf, __VMLINUX_SYMBOL_STR(kernel_connect) },
	{ 0x30545952, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0x420a05c7, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x99517682, __VMLINUX_SYMBOL_STR(udp_encap_enable) },
	{ 0x945099f5, __VMLINUX_SYMBOL_STR(ipv6_stub) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3c2498af, __VMLINUX_SYMBOL_STR(udp_set_csum) },
	{ 0x246c3a18, __VMLINUX_SYMBOL_STR(kernel_bind) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

