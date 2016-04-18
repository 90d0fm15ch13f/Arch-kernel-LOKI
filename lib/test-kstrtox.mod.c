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
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2b2ce78b, __VMLINUX_SYMBOL_STR(kstrtos8) },
	{ 0x5f005368, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0x91463b1d, __VMLINUX_SYMBOL_STR(kstrtos16) },
	{ 0xcef51982, __VMLINUX_SYMBOL_STR(kstrtou16) },
	{ 0x2276db98, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x69ad2f20, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x779a18af, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

