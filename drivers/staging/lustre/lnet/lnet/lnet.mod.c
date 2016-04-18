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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x3356b90b, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa9088531, __VMLINUX_SYMBOL_STR(cfs_expr_list_values) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb3997b63, __VMLINUX_SYMBOL_STR(cfs_cpt_number) },
	{ 0xf3b79e11, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x3a36fb18, __VMLINUX_SYMBOL_STR(sock_create_lite) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xfebe106f, __VMLINUX_SYMBOL_STR(cfs_cpt_weight) },
	{ 0xd1f0e208, __VMLINUX_SYMBOL_STR(node_data) },
	{ 0x71f662a3, __VMLINUX_SYMBOL_STR(libcfs_debug) },
	{ 0x8526c35a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xc0ea7fc0, __VMLINUX_SYMBOL_STR(cfs_expr_list_parse) },
	{ 0x3ea730c0, __VMLINUX_SYMBOL_STR(cfs_gettok) },
	{ 0x654e8ddd, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0xb747e673, __VMLINUX_SYMBOL_STR(cfs_percpt_lock) },
	{ 0x5c013b81, __VMLINUX_SYMBOL_STR(cfs_expr_list_free) },
	{ 0x3c1285bd, __VMLINUX_SYMBOL_STR(libcfs_subsystem_debug) },
	{ 0x9a692a27, __VMLINUX_SYMBOL_STR(cfs_cpt_spread_node) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xecad680d, __VMLINUX_SYMBOL_STR(kernel_listen) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x953e1b9e, __VMLINUX_SYMBOL_STR(ktime_get_real_seconds) },
	{ 0x5a2d104c, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x9bcf62c3, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xad019238, __VMLINUX_SYMBOL_STR(cfs_str2num_check) },
	{ 0x1bc9023b, __VMLINUX_SYMBOL_STR(cfs_percpt_lock_alloc) },
	{ 0x8840f591, __VMLINUX_SYMBOL_STR(cfs_block_allsigs) },
	{ 0x17ac7833, __VMLINUX_SYMBOL_STR(libcfs_deregister_ioctl) },
	{ 0x377f93fb, __VMLINUX_SYMBOL_STR(cfs_srand) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xbb1e4046, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x5325f992, __VMLINUX_SYMBOL_STR(kernel_setsockopt) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x41d643cf, __VMLINUX_SYMBOL_STR(kernel_connect) },
	{ 0xa9dc74e2, __VMLINUX_SYMBOL_STR(cfs_trace_copyin_string) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x62289d65, __VMLINUX_SYMBOL_STR(cfs_array_free) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x2dbe54b2, __VMLINUX_SYMBOL_STR(cfs_trimwhite) },
	{ 0xc2911d96, __VMLINUX_SYMBOL_STR(cfs_expr_list_match) },
	{ 0xf5eff79, __VMLINUX_SYMBOL_STR(cfs_percpt_number) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa6740610, __VMLINUX_SYMBOL_STR(kernel_getsockname) },
	{ 0x6dc6dd56, __VMLINUX_SYMBOL_STR(down) },
	{ 0x5de3e9ec, __VMLINUX_SYMBOL_STR(kernel_getpeername) },
	{ 0xf5a3c7ce, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x916bd963, __VMLINUX_SYMBOL_STR(cfs_percpt_alloc) },
	{ 0x79df5377, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x7803c9fb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_node_trace) },
	{ 0x618911fc, __VMLINUX_SYMBOL_STR(numa_node) },
	{ 0xa2f98a72, __VMLINUX_SYMBOL_STR(cfs_percpt_unlock) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x44839bbb, __VMLINUX_SYMBOL_STR(cfs_rand) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x5bbaff35, __VMLINUX_SYMBOL_STR(cfs_percpt_lock_free) },
	{ 0xe3bf6897, __VMLINUX_SYMBOL_STR(cfs_percpt_free) },
	{ 0xec6d814e, __VMLINUX_SYMBOL_STR(cfs_cpt_current) },
	{ 0x3ecf2902, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9f82f712, __VMLINUX_SYMBOL_STR(cfs_trace_copyout_string) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa0c3a8b2, __VMLINUX_SYMBOL_STR(sock_alloc_file) },
	{ 0xab210fec, __VMLINUX_SYMBOL_STR(kernel_recvmsg) },
	{ 0x37175882, __VMLINUX_SYMBOL_STR(cfs_expr_list_print) },
	{ 0x60288827, __VMLINUX_SYMBOL_STR(cfs_cpt_table) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xc9fef317, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xe2f91ce3, __VMLINUX_SYMBOL_STR(libcfs_debug_msg) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9e420643, __VMLINUX_SYMBOL_STR(cfs_restore_sigs) },
	{ 0x52b9c7e9, __VMLINUX_SYMBOL_STR(lbug_with_loc) },
	{ 0x4f3c7919, __VMLINUX_SYMBOL_STR(sock_create) },
	{ 0x78e739aa, __VMLINUX_SYMBOL_STR(up) },
	{ 0x246c3a18, __VMLINUX_SYMBOL_STR(kernel_bind) },
	{ 0x857aaea7, __VMLINUX_SYMBOL_STR(libcfs_register_ioctl) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x7c478bfb, __VMLINUX_SYMBOL_STR(lustre_insert_debugfs) },
	{ 0x55f5019b, __VMLINUX_SYMBOL_STR(__kmalloc_node) },
	{ 0x5d73c3e3, __VMLINUX_SYMBOL_STR(cfs_expr_list_free_list) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9879b229, __VMLINUX_SYMBOL_STR(cfs_get_random_bytes) },
	{ 0xd56b5f64, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x23fd3028, __VMLINUX_SYMBOL_STR(vmalloc_node) },
	{ 0xa2b68b2a, __VMLINUX_SYMBOL_STR(cfs_array_alloc) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcfs";


MODULE_INFO(srcversion, "DE262E95DCEAB58109B4CEB");
