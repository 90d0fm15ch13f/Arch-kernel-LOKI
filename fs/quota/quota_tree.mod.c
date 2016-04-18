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
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xb8b6a76c, __VMLINUX_SYMBOL_STR(__percpu_counter_add) },
	{ 0xb1bf0e, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x33726a45, __VMLINUX_SYMBOL_STR(__quota_error) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5240ee7, __VMLINUX_SYMBOL_STR(percpu_counter_batch) },
	{ 0xad698f77, __VMLINUX_SYMBOL_STR(dqstats) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x51719973, __VMLINUX_SYMBOL_STR(dq_data_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1ffb9e36, __VMLINUX_SYMBOL_STR(mark_info_dirty) },
	{ 0x7ce18c9f, __VMLINUX_SYMBOL_STR(from_kqid) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

