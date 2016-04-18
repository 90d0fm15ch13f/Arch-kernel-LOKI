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
	{ 0x95ff41db, __VMLINUX_SYMBOL_STR(udp6_set_csum) },
	{ 0x654e8ddd, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0x4b01f2d0, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x5325f992, __VMLINUX_SYMBOL_STR(kernel_setsockopt) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x41d643cf, __VMLINUX_SYMBOL_STR(kernel_connect) },
	{ 0x420a05c7, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x246c3a18, __VMLINUX_SYMBOL_STR(kernel_bind) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0xaa78bf54, __VMLINUX_SYMBOL_STR(ip6_local_out) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

