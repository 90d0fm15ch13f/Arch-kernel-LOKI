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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5e862211, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x294491b0, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb3997b63, __VMLINUX_SYMBOL_STR(cfs_cpt_number) },
	{ 0xf3b79e11, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xb38ad820, __VMLINUX_SYMBOL_STR(lnet_notify) },
	{ 0x95b23d9, __VMLINUX_SYMBOL_STR(lnet_kiov_nob) },
	{ 0x779e05df, __VMLINUX_SYMBOL_STR(lnet_connect) },
	{ 0xf5dc6337, __VMLINUX_SYMBOL_STR(lnet_iov_nob) },
	{ 0xa56de08d, __VMLINUX_SYMBOL_STR(lnet_ipif_free_enumeration) },
	{ 0xfebe106f, __VMLINUX_SYMBOL_STR(cfs_cpt_weight) },
	{ 0x71f662a3, __VMLINUX_SYMBOL_STR(libcfs_debug) },
	{ 0x8526c35a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x2a41dac5, __VMLINUX_SYMBOL_STR(tcp_sendpage) },
	{ 0x654e8ddd, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0xb747e673, __VMLINUX_SYMBOL_STR(cfs_percpt_lock) },
	{ 0x179651ac, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x3c1285bd, __VMLINUX_SYMBOL_STR(libcfs_subsystem_debug) },
	{ 0x9a692a27, __VMLINUX_SYMBOL_STR(cfs_cpt_spread_node) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7e93080c, __VMLINUX_SYMBOL_STR(libcfs_nid2str_r) },
	{ 0x953e1b9e, __VMLINUX_SYMBOL_STR(ktime_get_real_seconds) },
	{ 0x9bcf62c3, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x776325b9, __VMLINUX_SYMBOL_STR(lnet_sock_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xf8a8644b, __VMLINUX_SYMBOL_STR(libcfs_id2str) },
	{ 0x8840f591, __VMLINUX_SYMBOL_STR(cfs_block_allsigs) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x5325f992, __VMLINUX_SYMBOL_STR(kernel_setsockopt) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x7554c248, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xb10820e4, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0x9ea6c46c, __VMLINUX_SYMBOL_STR(vmap) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xf5eff79, __VMLINUX_SYMBOL_STR(cfs_percpt_number) },
	{ 0xdce68897, __VMLINUX_SYMBOL_STR(lnet_extract_kiov) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x33c1b937, __VMLINUX_SYMBOL_STR(lnet_sock_getbuf) },
	{ 0xd1c91b07, __VMLINUX_SYMBOL_STR(lnet_finalize) },
	{ 0x916bd963, __VMLINUX_SYMBOL_STR(cfs_percpt_alloc) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xb9c8a9ba, __VMLINUX_SYMBOL_STR(kernel_getsockopt) },
	{ 0xba5566d2, __VMLINUX_SYMBOL_STR(lnet_acceptor_port) },
	{ 0xa1892d32, __VMLINUX_SYMBOL_STR(the_lnet) },
	{ 0x281411af, __VMLINUX_SYMBOL_STR(lnet_sock_write) },
	{ 0xa2f98a72, __VMLINUX_SYMBOL_STR(cfs_percpt_unlock) },
	{ 0x49993ea3, __VMLINUX_SYMBOL_STR(lnet_extract_iov) },
	{ 0x5fee352c, __VMLINUX_SYMBOL_STR(lnet_acceptor_timeout) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xade657cc, __VMLINUX_SYMBOL_STR(libcfs_next_nidstring) },
	{ 0xe3bf6897, __VMLINUX_SYMBOL_STR(cfs_percpt_free) },
	{ 0x1ee5f15e, __VMLINUX_SYMBOL_STR(lnet_ipif_query) },
	{ 0x42a52c6a, __VMLINUX_SYMBOL_STR(lnet_sock_setbuf) },
	{ 0x3ecf2902, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6a979228, __VMLINUX_SYMBOL_STR(lnet_register_lnd) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xab210fec, __VMLINUX_SYMBOL_STR(kernel_recvmsg) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x24700a21, __VMLINUX_SYMBOL_STR(lnet_unregister_lnd) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xf0eaffce, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xc9fef317, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xe2f91ce3, __VMLINUX_SYMBOL_STR(libcfs_debug_msg) },
	{ 0x94961283, __VMLINUX_SYMBOL_STR(vunmap) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x52b9c7e9, __VMLINUX_SYMBOL_STR(lbug_with_loc) },
	{ 0xfdfd6c90, __VMLINUX_SYMBOL_STR(add_wait_queue_exclusive) },
	{ 0x15799c11, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x15000fd9, __VMLINUX_SYMBOL_STR(lnet_sock_getaddr) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x84526d1, __VMLINUX_SYMBOL_STR(lnet_parse) },
	{ 0x55f5019b, __VMLINUX_SYMBOL_STR(__kmalloc_node) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3699fd8c, __VMLINUX_SYMBOL_STR(cfs_cpt_bind) },
	{ 0x2ac93e90, __VMLINUX_SYMBOL_STR(lnet_connect_console_error) },
	{ 0x66d449b1, __VMLINUX_SYMBOL_STR(lnet_ipif_enumerate) },
	{ 0xefda8d99, __VMLINUX_SYMBOL_STR(abort_exclusive_wait) },
	{ 0x23fd3028, __VMLINUX_SYMBOL_STR(vmalloc_node) },
	{ 0x419d3f61, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x2aa9953d, __VMLINUX_SYMBOL_STR(lnet_cpt_of_nid) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcfs,lnet";


MODULE_INFO(srcversion, "F6E88199AB32B878C1639C5");
