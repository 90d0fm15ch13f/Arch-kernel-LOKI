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
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x3386efc1, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb97785f1, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x54609bdc, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x8e9ddd80, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x395b1a05, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x28af6928, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x22557813, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x723b74aa, __VMLINUX_SYMBOL_STR(seq_lseek) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

