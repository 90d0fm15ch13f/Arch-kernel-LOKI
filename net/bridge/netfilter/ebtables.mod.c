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
	{ 0x18d236e6, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xe0b4971b, __VMLINUX_SYMBOL_STR(xt_compat_lock) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x7a85dc6a, __VMLINUX_SYMBOL_STR(xt_check_target) },
	{ 0x9b40c3ff, __VMLINUX_SYMBOL_STR(xt_compat_match_offset) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb26261ad, __VMLINUX_SYMBOL_STR(xt_compat_target_offset) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x59c1d110, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x47aa32a7, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5f82f1f7, __VMLINUX_SYMBOL_STR(xt_compat_flush_offsets) },
	{ 0x691a6d69, __VMLINUX_SYMBOL_STR(xt_compat_calc_jump) },
	{ 0x287b2051, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0x253e8b44, __VMLINUX_SYMBOL_STR(xt_compat_init_offsets) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xec24fd82, __VMLINUX_SYMBOL_STR(xt_compat_add_offset) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5bf2362d, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0xebb82459, __VMLINUX_SYMBOL_STR(xt_request_find_match) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xf557bb3d, __VMLINUX_SYMBOL_STR(xt_request_find_target) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xf0eaffce, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ef66e8a, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x31ec44a0, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x75e02a62, __VMLINUX_SYMBOL_STR(xt_check_match) },
	{ 0x15799c11, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x4f087b9b, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x161d1417, __VMLINUX_SYMBOL_STR(xt_compat_unlock) },
	{ 0x419d3f61, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";

