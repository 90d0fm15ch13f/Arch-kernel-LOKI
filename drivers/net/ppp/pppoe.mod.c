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
	{ 0xcfaae361, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xf0ba44e1, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x5f061c36, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xcbcc31ea, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x1c9773d6, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xd9b22e87, __VMLINUX_SYMBOL_STR(pppox_ioctl) },
	{ 0x92324f8e, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x871aea27, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xfe9ded95, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x834f1ed0, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x5b75a5c4, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x8e9ddd80, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x723b74aa, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xe0ff7a18, __VMLINUX_SYMBOL_STR(unregister_pppox_proto) },
	{ 0xe9b601b7, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xac159d3f, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x7e2c2962, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x78654f92, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0xa03917c5, __VMLINUX_SYMBOL_STR(register_pppox_proto) },
	{ 0x6af4f237, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x45d2e94c, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x22557813, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x57000eee, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xf21176dd, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x54609bdc, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x5b60bd2b, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x68a5c6e7, __VMLINUX_SYMBOL_STR(ppp_register_net_channel) },
	{ 0x546a42eb, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0xe9576376, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x1d224d65, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x726185d1, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x24f8899d, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xb59a98c9, __VMLINUX_SYMBOL_STR(ppp_input) },
	{ 0x23aa74d0, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xbd47afad, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x68064f38, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xeb3c43bf, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0x367940b5, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x42b3a04e, __VMLINUX_SYMBOL_STR(dev_get_by_name_rcu) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xda69e2b4, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xac859661, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x9ef745a8, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0xa37745a9, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x31ec44a0, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x6ef66e8a, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x1d600878, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf0eaffce, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x15799c11, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x1c059ecb, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x294491b0, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xcd41ec6, __VMLINUX_SYMBOL_STR(pppox_unbind_sock) },
	{ 0x7554c248, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pppox,ppp_generic";

