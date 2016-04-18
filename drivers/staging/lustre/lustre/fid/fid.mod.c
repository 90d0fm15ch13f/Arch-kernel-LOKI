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
	{ 0x5c6a3a83, __VMLINUX_SYMBOL_STR(RQF_SEQ_QUERY) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4c3259a9, __VMLINUX_SYMBOL_STR(ptlrpc_req_finished) },
	{ 0x3386efc1, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x71f662a3, __VMLINUX_SYMBOL_STR(libcfs_debug) },
	{ 0x8526c35a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xe345d95d, __VMLINUX_SYMBOL_STR(ldebugfs_register) },
	{ 0x11495519, __VMLINUX_SYMBOL_STR(lprocfs_write_helper) },
	{ 0x1dc2051d, __VMLINUX_SYMBOL_STR(RMF_SEQ_OPC) },
	{ 0x3c1285bd, __VMLINUX_SYMBOL_STR(libcfs_subsystem_debug) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8e9ddd80, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xdfa11974, __VMLINUX_SYMBOL_STR(class_export_get) },
	{ 0xdd28041a, __VMLINUX_SYMBOL_STR(ptlrpc_request_set_replen) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x43a3bc83, __VMLINUX_SYMBOL_STR(ldebugfs_add_vars) },
	{ 0xc362a099, __VMLINUX_SYMBOL_STR(ptlrpc_request_alloc_pack) },
	{ 0x35f7a504, __VMLINUX_SYMBOL_STR(lprocfs_single_release) },
	{ 0xdc99d135, __VMLINUX_SYMBOL_STR(ptlrpc_at_set_req_timeout) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x901edad7, __VMLINUX_SYMBOL_STR(req_capsule_server_get) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2585a629, __VMLINUX_SYMBOL_STR(RMF_SEQ_RANGE) },
	{ 0x81373eb6, __VMLINUX_SYMBOL_STR(debugfs_lustre_root) },
	{ 0x13bc3ae7, __VMLINUX_SYMBOL_STR(class_exp2cliimp) },
	{ 0x506289e7, __VMLINUX_SYMBOL_STR(ldebugfs_remove) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xc9fef317, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x723b74aa, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xcf61bacb, __VMLINUX_SYMBOL_STR(__cfs_fail_check_set) },
	{ 0xe2f91ce3, __VMLINUX_SYMBOL_STR(libcfs_debug_msg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x52b9c7e9, __VMLINUX_SYMBOL_STR(lbug_with_loc) },
	{ 0xfb50d4da, __VMLINUX_SYMBOL_STR(ptlrpc_queue_wait) },
	{ 0x7fda989d, __VMLINUX_SYMBOL_STR(cfs_fail_loc) },
	{ 0x30b437f0, __VMLINUX_SYMBOL_STR(req_capsule_client_get) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xc508760e, __VMLINUX_SYMBOL_STR(class_export_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ptlrpc,libcfs,obdclass";


MODULE_INFO(srcversion, "F1FF51DBD4E1535CC8A5587");
