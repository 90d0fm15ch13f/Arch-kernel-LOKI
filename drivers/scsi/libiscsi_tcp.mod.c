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
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xd2790674, __VMLINUX_SYMBOL_STR(skb_seq_read) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x97868aef, __VMLINUX_SYMBOL_STR(__kfifo_alloc) },
	{ 0xea554f20, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x7a8e8190, __VMLINUX_SYMBOL_STR(iscsi_requeue_task) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x3bef2f73, __VMLINUX_SYMBOL_STR(iscsi_pool_init) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xa7accb41, __VMLINUX_SYMBOL_STR(iscsi_itt_to_ctask) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0xa4f198d5, __VMLINUX_SYMBOL_STR(skb_abort_seq_read) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x42524a99, __VMLINUX_SYMBOL_STR(skb_prepare_seq_read) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xf7fa6630, __VMLINUX_SYMBOL_STR(iscsi_conn_teardown) },
	{ 0x41db3322, __VMLINUX_SYMBOL_STR(iscsi_put_task) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6cb9b920, __VMLINUX_SYMBOL_STR(iscsi_prep_data_out_pdu) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xe6b87494, __VMLINUX_SYMBOL_STR(iscsi_complete_pdu) },
	{ 0x54d3743a, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0xdb760f52, __VMLINUX_SYMBOL_STR(__kfifo_free) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xcb50f837, __VMLINUX_SYMBOL_STR(__iscsi_complete_pdu) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0x8d303b1b, __VMLINUX_SYMBOL_STR(iscsi_pool_free) },
	{ 0x1e916a65, __VMLINUX_SYMBOL_STR(iscsi_verify_itt) },
	{ 0xa587866e, __VMLINUX_SYMBOL_STR(iscsi_conn_setup) },
	{ 0xe0b9caca, __VMLINUX_SYMBOL_STR(iscsi_update_cmdsn) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi";

