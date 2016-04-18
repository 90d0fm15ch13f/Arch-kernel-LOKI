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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd941d5a0, __VMLINUX_SYMBOL_STR(xt_unregister_table) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xe0b4971b, __VMLINUX_SYMBOL_STR(xt_compat_lock) },
	{ 0x40728a63, __VMLINUX_SYMBOL_STR(xt_find_revision) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x7a85dc6a, __VMLINUX_SYMBOL_STR(xt_check_target) },
	{ 0x13634ca8, __VMLINUX_SYMBOL_STR(xt_register_matches) },
	{ 0x9b40c3ff, __VMLINUX_SYMBOL_STR(xt_compat_match_offset) },
	{ 0x72d684dc, __VMLINUX_SYMBOL_STR(xt_compat_target_to_user) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x57684494, __VMLINUX_SYMBOL_STR(xt_proto_fini) },
	{ 0x886d58fa, __VMLINUX_SYMBOL_STR(xt_table_unlock) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xb26261ad, __VMLINUX_SYMBOL_STR(xt_compat_target_offset) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x7251f783, __VMLINUX_SYMBOL_STR(xt_find_table_lock) },
	{ 0xf7be213e, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0x7925118f, __VMLINUX_SYMBOL_STR(xt_replace_table) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xdf12709e, __VMLINUX_SYMBOL_STR(xt_proto_init) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xbc6f8ddc, __VMLINUX_SYMBOL_STR(xt_register_table) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x331229f3, __VMLINUX_SYMBOL_STR(xt_compat_match_to_user) },
	{ 0x59c1d110, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0xdd727d5a, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x47aa32a7, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xd4d4fe5e, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0xc16dee2, __VMLINUX_SYMBOL_STR(xt_compat_target_from_user) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x9ac02f5c, __VMLINUX_SYMBOL_STR(nf_log_trace) },
	{ 0x5f82f1f7, __VMLINUX_SYMBOL_STR(xt_compat_flush_offsets) },
	{ 0x691a6d69, __VMLINUX_SYMBOL_STR(xt_compat_calc_jump) },
	{ 0x807d2b2c, __VMLINUX_SYMBOL_STR(xt_recseq) },
	{ 0x56860d4, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0x253e8b44, __VMLINUX_SYMBOL_STR(xt_compat_init_offsets) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xec24fd82, __VMLINUX_SYMBOL_STR(xt_compat_add_offset) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5bf2362d, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0x73cee41e, __VMLINUX_SYMBOL_STR(xt_tee_enabled) },
	{ 0xebb82459, __VMLINUX_SYMBOL_STR(xt_request_find_match) },
	{ 0x34b50929, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x149a370c, __VMLINUX_SYMBOL_STR(xt_unregister_matches) },
	{ 0xed433664, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xf557bb3d, __VMLINUX_SYMBOL_STR(xt_request_find_target) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x7cd48b77, __VMLINUX_SYMBOL_STR(xt_compat_match_from_user) },
	{ 0x70c52dc5, __VMLINUX_SYMBOL_STR(nf_skb_duplicated) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x75e02a62, __VMLINUX_SYMBOL_STR(xt_check_match) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x5a4896a8, __VMLINUX_SYMBOL_STR(__put_user_2) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x4f087b9b, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x555c3243, __VMLINUX_SYMBOL_STR(xt_alloc_table_info) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xedc6f8bc, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xa48b3a97, __VMLINUX_SYMBOL_STR(xt_free_table_info) },
	{ 0x161d1417, __VMLINUX_SYMBOL_STR(xt_compat_unlock) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";

