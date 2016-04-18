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
	{ 0x1fbbaec1, __VMLINUX_SYMBOL_STR(unregister_quota_format) },
	{ 0xd00c50c0, __VMLINUX_SYMBOL_STR(register_quota_format) },
	{ 0x8d55bb8a, __VMLINUX_SYMBOL_STR(qid_eq) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x51719973, __VMLINUX_SYMBOL_STR(dq_data_lock) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5d82ca52, __VMLINUX_SYMBOL_STR(qtree_entry_unused) },
	{ 0x7ce18c9f, __VMLINUX_SYMBOL_STR(from_kqid) },
	{ 0xb1bf0e, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x33726a45, __VMLINUX_SYMBOL_STR(__quota_error) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc09cb77, __VMLINUX_SYMBOL_STR(qtree_read_dquot) },
	{ 0x940ce96d, __VMLINUX_SYMBOL_STR(qtree_write_dquot) },
	{ 0x5bdf02ea, __VMLINUX_SYMBOL_STR(qtree_release_dquot) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=quota_tree";

