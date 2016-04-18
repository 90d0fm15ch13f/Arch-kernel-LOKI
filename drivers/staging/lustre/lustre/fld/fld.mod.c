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
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4c3259a9, __VMLINUX_SYMBOL_STR(ptlrpc_req_finished) },
	{ 0x9660ace0, __VMLINUX_SYMBOL_STR(RMF_FLD_MDFLD) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x3386efc1, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x71f662a3, __VMLINUX_SYMBOL_STR(libcfs_debug) },
	{ 0x8526c35a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xe345d95d, __VMLINUX_SYMBOL_STR(ldebugfs_register) },
	{ 0x179651ac, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x3c1285bd, __VMLINUX_SYMBOL_STR(libcfs_subsystem_debug) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8e9ddd80, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xdfa11974, __VMLINUX_SYMBOL_STR(class_export_get) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xdd28041a, __VMLINUX_SYMBOL_STR(ptlrpc_request_set_replen) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x43a3bc83, __VMLINUX_SYMBOL_STR(ldebugfs_add_vars) },
	{ 0xef1aeca9, __VMLINUX_SYMBOL_STR(RMF_FLD_OPC) },
	{ 0xc362a099, __VMLINUX_SYMBOL_STR(ptlrpc_request_alloc_pack) },
	{ 0x35f7a504, __VMLINUX_SYMBOL_STR(lprocfs_single_release) },
	{ 0xdc99d135, __VMLINUX_SYMBOL_STR(ptlrpc_at_set_req_timeout) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x1250c7e1, __VMLINUX_SYMBOL_STR(_raw_spin_trylock) },
	{ 0x901edad7, __VMLINUX_SYMBOL_STR(req_capsule_server_get) },
	{ 0x8fd1152e, __VMLINUX_SYMBOL_STR(_raw_write_unlock) },
	{ 0xb10820e4, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe8db8dd2, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x84ac7241, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0xea411f63, __VMLINUX_SYMBOL_STR(cfs_block_sigsinv) },
	{ 0x81373eb6, __VMLINUX_SYMBOL_STR(debugfs_lustre_root) },
	{ 0x13bc3ae7, __VMLINUX_SYMBOL_STR(class_exp2cliimp) },
	{ 0x4a99af72, __VMLINUX_SYMBOL_STR(cfs_clear_sigpending) },
	{ 0x506289e7, __VMLINUX_SYMBOL_STR(ldebugfs_remove) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xc9fef317, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x723b74aa, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xbf7a37f1, __VMLINUX_SYMBOL_STR(cfs_signal_pending) },
	{ 0xcf61bacb, __VMLINUX_SYMBOL_STR(__cfs_fail_check_set) },
	{ 0xe2f91ce3, __VMLINUX_SYMBOL_STR(libcfs_debug_msg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9e420643, __VMLINUX_SYMBOL_STR(cfs_restore_sigs) },
	{ 0x52b9c7e9, __VMLINUX_SYMBOL_STR(lbug_with_loc) },
	{ 0xfb50d4da, __VMLINUX_SYMBOL_STR(ptlrpc_queue_wait) },
	{ 0x7fda989d, __VMLINUX_SYMBOL_STR(cfs_fail_loc) },
	{ 0x30b437f0, __VMLINUX_SYMBOL_STR(req_capsule_client_get) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x515f93b, __VMLINUX_SYMBOL_STR(RQF_FLD_QUERY) },
	{ 0xc508760e, __VMLINUX_SYMBOL_STR(class_export_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ptlrpc,libcfs,obdclass";

