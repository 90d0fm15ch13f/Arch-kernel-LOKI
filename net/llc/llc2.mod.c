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
	{ 0x294491b0, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xeb3c43bf, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xa4ca16d0, __VMLINUX_SYMBOL_STR(__kfree_skb) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xaae1b9fa, __VMLINUX_SYMBOL_STR(dev_getbyhwaddr_rcu) },
	{ 0x12efb1f2, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x6f060a41, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x57000eee, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x1d600878, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xe9576376, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x54609bdc, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x23aa74d0, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x1278ea1, __VMLINUX_SYMBOL_STR(skb_set_owner_w) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x17bf7965, __VMLINUX_SYMBOL_STR(sock_rfree) },
	{ 0x8e9ddd80, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc052e782, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xcfaae361, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xfef651c4, __VMLINUX_SYMBOL_STR(sk_wait_data) },
	{ 0x5b60bd2b, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xfe9ded95, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xb521836c, __VMLINUX_SYMBOL_STR(llc_set_station_handler) },
	{ 0x395b1a05, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x367940b5, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x726185d1, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x7554c248, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x47aa32a7, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x52d7b2fd, __VMLINUX_SYMBOL_STR(llc_sap_list) },
	{ 0xdef53a17, __VMLINUX_SYMBOL_STR(llc_mac_hdr_init) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x77da680d, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x1c059ecb, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x47679b1c, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x38b92846, __VMLINUX_SYMBOL_STR(llc_remove_pack) },
	{ 0x10a00acc, __VMLINUX_SYMBOL_STR(llc_sap_find) },
	{ 0x28af6928, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xa44d4de4, __VMLINUX_SYMBOL_STR(llc_add_pack) },
	{ 0x274cb35c, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x6af4f237, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x92324f8e, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x1df09714, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x7084076d, __VMLINUX_SYMBOL_STR(dev_getfirstbyhwtype) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7e2c2962, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x8c9ed7af, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0xe139e6d1, __VMLINUX_SYMBOL_STR(put_cmsg) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xc1b75389, __VMLINUX_SYMBOL_STR(llc_sap_open) },
	{ 0xf0eaffce, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x22557813, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x723b74aa, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3bb5114a, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0x15799c11, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x8b618d08, __VMLINUX_SYMBOL_STR(overflowuid) },
	{ 0x685393bf, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xa686b893, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0xe05a315e, __VMLINUX_SYMBOL_STR(llc_sap_close) },
	{ 0x68064f38, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xf71d80ec, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x35519246, __VMLINUX_SYMBOL_STR(llc_build_and_send_ui_pkt) },
	{ 0x96aba385, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x40b58c9c, __VMLINUX_SYMBOL_STR(sock_i_uid) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=llc";

