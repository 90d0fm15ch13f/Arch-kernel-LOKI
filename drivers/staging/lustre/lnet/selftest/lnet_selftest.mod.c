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
	{ 0x8b8a081e, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb3997b63, __VMLINUX_SYMBOL_STR(cfs_cpt_number) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xcd38904c, __VMLINUX_SYMBOL_STR(cfs_wi_exit) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x9a1fc4b4, __VMLINUX_SYMBOL_STR(jiffies_to_timeval) },
	{ 0xfebe106f, __VMLINUX_SYMBOL_STR(cfs_cpt_weight) },
	{ 0xd1f0e208, __VMLINUX_SYMBOL_STR(node_data) },
	{ 0x71f662a3, __VMLINUX_SYMBOL_STR(libcfs_debug) },
	{ 0x3c1285bd, __VMLINUX_SYMBOL_STR(libcfs_subsystem_debug) },
	{ 0x1366b7ac, __VMLINUX_SYMBOL_STR(LNetSetLazyPortal) },
	{ 0xfa106804, __VMLINUX_SYMBOL_STR(lnet_counters_get) },
	{ 0x9a692a27, __VMLINUX_SYMBOL_STR(cfs_cpt_spread_node) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7e93080c, __VMLINUX_SYMBOL_STR(libcfs_nid2str_r) },
	{ 0x953e1b9e, __VMLINUX_SYMBOL_STR(ktime_get_real_seconds) },
	{ 0x5a2d104c, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x9bcf62c3, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf8a8644b, __VMLINUX_SYMBOL_STR(libcfs_id2str) },
	{ 0x8840f591, __VMLINUX_SYMBOL_STR(cfs_block_allsigs) },
	{ 0x17ac7833, __VMLINUX_SYMBOL_STR(libcfs_deregister_ioctl) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x9de986d3, __VMLINUX_SYMBOL_STR(LNetEQAlloc) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xbf0760a2, __VMLINUX_SYMBOL_STR(LNetMEAttach) },
	{ 0x3c779ee0, __VMLINUX_SYMBOL_STR(LNetPut) },
	{ 0x95620e8c, __VMLINUX_SYMBOL_STR(cfs_wi_deschedule) },
	{ 0xaa414970, __VMLINUX_SYMBOL_STR(LNetMEUnlink) },
	{ 0xb75f7953, __VMLINUX_SYMBOL_STR(LNetEQFree) },
	{ 0xf5eff79, __VMLINUX_SYMBOL_STR(cfs_percpt_number) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x722c76e5, __VMLINUX_SYMBOL_STR(LNetMDAttach) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x67398404, __VMLINUX_SYMBOL_STR(cfs_wi_sched_destroy) },
	{ 0x916bd963, __VMLINUX_SYMBOL_STR(cfs_percpt_alloc) },
	{ 0x19670622, __VMLINUX_SYMBOL_STR(LNetNIInit) },
	{ 0x1fe16fd5, __VMLINUX_SYMBOL_STR(LNetGet) },
	{ 0x79df5377, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xa1892d32, __VMLINUX_SYMBOL_STR(the_lnet) },
	{ 0x7803c9fb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_node_trace) },
	{ 0x618911fc, __VMLINUX_SYMBOL_STR(numa_node) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x61f784b2, __VMLINUX_SYMBOL_STR(LNetClearLazyPortal) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xade657cc, __VMLINUX_SYMBOL_STR(libcfs_next_nidstring) },
	{ 0xe3bf6897, __VMLINUX_SYMBOL_STR(cfs_percpt_free) },
	{ 0x211f68f1, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0x3f4f5b46, __VMLINUX_SYMBOL_STR(LNetNIFini) },
	{ 0x3ecf2902, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xf1717bec, __VMLINUX_SYMBOL_STR(cfs_wi_sched_create) },
	{ 0x60288827, __VMLINUX_SYMBOL_STR(cfs_cpt_table) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x33202a6c, __VMLINUX_SYMBOL_STR(LNetGetId) },
	{ 0xe2f91ce3, __VMLINUX_SYMBOL_STR(libcfs_debug_msg) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xaa9b477e, __VMLINUX_SYMBOL_STR(LNetMDBind) },
	{ 0x52b9c7e9, __VMLINUX_SYMBOL_STR(lbug_with_loc) },
	{ 0x69f9bb2, __VMLINUX_SYMBOL_STR(cfs_wi_schedule) },
	{ 0x857aaea7, __VMLINUX_SYMBOL_STR(libcfs_register_ioctl) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x55f5019b, __VMLINUX_SYMBOL_STR(__kmalloc_node) },
	{ 0xd56b5f64, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x23fd3028, __VMLINUX_SYMBOL_STR(vmalloc_node) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x2aa9953d, __VMLINUX_SYMBOL_STR(lnet_cpt_of_nid) },
	{ 0x58a1ca89, __VMLINUX_SYMBOL_STR(LNetMDUnlink) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcfs,lnet";


MODULE_INFO(srcversion, "490FB3CBCB197BBCA2D2CAD");
