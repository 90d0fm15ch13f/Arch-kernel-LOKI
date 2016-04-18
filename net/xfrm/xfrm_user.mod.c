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
	{ 0x3d67196b, __VMLINUX_SYMBOL_STR(xfrm_unregister_km) },
	{ 0xdd727d5a, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x4f90171e, __VMLINUX_SYMBOL_STR(xfrm_register_km) },
	{ 0x34b50929, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x3faa538a, __VMLINUX_SYMBOL_STR(xfrm_policy_insert) },
	{ 0x7d077381, __VMLINUX_SYMBOL_STR(km_query) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xee807e7, __VMLINUX_SYMBOL_STR(xfrm_state_add) },
	{ 0x27b458ca, __VMLINUX_SYMBOL_STR(xfrm_state_update) },
	{ 0x59904d4d, __VMLINUX_SYMBOL_STR(xfrm_init_replay) },
	{ 0xf4701988, __VMLINUX_SYMBOL_STR(__xfrm_init_state) },
	{ 0x3bf471d7, __VMLINUX_SYMBOL_STR(xfrm_calg_get_byname) },
	{ 0x47b34e60, __VMLINUX_SYMBOL_STR(xfrm_ealg_get_byname) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa6e66685, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x60b73277, __VMLINUX_SYMBOL_STR(xfrm_aead_get_byname) },
	{ 0xb01bc4b5, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0x5e95502e, __VMLINUX_SYMBOL_STR(xfrm_state_delete) },
	{ 0xe0e7931f, __VMLINUX_SYMBOL_STR(xfrm_state_lookup_byaddr) },
	{ 0x65fd149, __VMLINUX_SYMBOL_STR(xfrm_sad_getinfo) },
	{ 0xcda90361, __VMLINUX_SYMBOL_STR(xfrm_spd_getinfo) },
	{ 0x7d3734c9, __VMLINUX_SYMBOL_STR(xfrm_alloc_spi) },
	{ 0x12e3697, __VMLINUX_SYMBOL_STR(xfrm_find_acq) },
	{ 0x80d08101, __VMLINUX_SYMBOL_STR(xfrm_find_acq_byseq) },
	{ 0xf10526ac, __VMLINUX_SYMBOL_STR(verify_spi_info) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa83344f5, __VMLINUX_SYMBOL_STR(xfrm_policy_alloc) },
	{ 0x99f87c9a, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0x4f2001ed, __VMLINUX_SYMBOL_STR(xfrm_state_walk) },
	{ 0x83b009ea, __VMLINUX_SYMBOL_STR(xfrm_state_walk_init) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xa448132c, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x7981f76, __VMLINUX_SYMBOL_STR(netlink_net_capable) },
	{ 0x3356b90b, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0x434a78c3, __VMLINUX_SYMBOL_STR(xfrm_state_walk_done) },
	{ 0x53426737, __VMLINUX_SYMBOL_STR(xfrm_garbage_collect) },
	{ 0x3ae0d58f, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf1ec7b6e, __VMLINUX_SYMBOL_STR(xfrm_policy_walk) },
	{ 0xe5ed5467, __VMLINUX_SYMBOL_STR(xfrm_policy_walk_init) },
	{ 0x16a86975, __VMLINUX_SYMBOL_STR(xfrm_policy_walk_done) },
	{ 0x275c7874, __VMLINUX_SYMBOL_STR(__xfrm_state_delete) },
	{ 0xc14998c3, __VMLINUX_SYMBOL_STR(km_state_expired) },
	{ 0xb32cba51, __VMLINUX_SYMBOL_STR(xfrm_policy_byid) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x6253fd7b, __VMLINUX_SYMBOL_STR(xfrm_policy_destroy) },
	{ 0x27787131, __VMLINUX_SYMBOL_STR(km_policy_expired) },
	{ 0xf0f467b1, __VMLINUX_SYMBOL_STR(xfrm_policy_delete) },
	{ 0xb57f919f, __VMLINUX_SYMBOL_STR(xfrm_policy_bysel_ctx) },
	{ 0xddce9152, __VMLINUX_SYMBOL_STR(xfrm_state_flush) },
	{ 0x6bbcd559, __VMLINUX_SYMBOL_STR(km_policy_notify) },
	{ 0xf9f19752, __VMLINUX_SYMBOL_STR(xfrm_policy_flush) },
	{ 0x772ffef, __VMLINUX_SYMBOL_STR(km_state_notify) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x1ee7bc68, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x56670ac1, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xfd39376e, __VMLINUX_SYMBOL_STR(xfrm_policy_hash_rebuild) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5eb907f4, __VMLINUX_SYMBOL_STR(netlink_rcv_skb) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7bd57fc5, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x323c5c50, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0xbb5d343d, __VMLINUX_SYMBOL_STR(xfrm_get_acqseq) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x4de398b5, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x44a8ae9b, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd138423f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xfc125e53, __VMLINUX_SYMBOL_STR(netlink_has_listeners) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_algo";

