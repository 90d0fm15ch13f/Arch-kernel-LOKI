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
	{ 0x65bcd022, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x2ca92fa8, __VMLINUX_SYMBOL_STR(ldlm_lock_decref) },
	{ 0x3379b81e, __VMLINUX_SYMBOL_STR(class_disconnect) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa6b9dee6, __VMLINUX_SYMBOL_STR(libcfs_kkuc_group_rem) },
	{ 0x4c3259a9, __VMLINUX_SYMBOL_STR(ptlrpc_req_finished) },
	{ 0xfc87cfc1, __VMLINUX_SYMBOL_STR(class_exp2obd) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x3386efc1, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x12efb1f2, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x71f662a3, __VMLINUX_SYMBOL_STR(libcfs_debug) },
	{ 0xdf2789c0, __VMLINUX_SYMBOL_STR(cfs_curproc_cap_pack) },
	{ 0xd3dae408, __VMLINUX_SYMBOL_STR(ldlm_it2str) },
	{ 0x3c1285bd, __VMLINUX_SYMBOL_STR(libcfs_subsystem_debug) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x20215cab, __VMLINUX_SYMBOL_STR(class_find_client_obd) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9b832b39, __VMLINUX_SYMBOL_STR(fld_client_debugfs_fini) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8e9ddd80, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xdfa11974, __VMLINUX_SYMBOL_STR(class_export_get) },
	{ 0xe4f890ca, __VMLINUX_SYMBOL_STR(lprocfs_obd_cleanup) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x4cb722fa, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0x7bbf8001, __VMLINUX_SYMBOL_STR(RMF_MDT_BODY) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xb479dbd9, __VMLINUX_SYMBOL_STR(ldebugfs_seq_create) },
	{ 0x35f7a504, __VMLINUX_SYMBOL_STR(lprocfs_single_release) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x901edad7, __VMLINUX_SYMBOL_STR(req_capsule_server_get) },
	{ 0x865483a9, __VMLINUX_SYMBOL_STR(libcfs_kvzalloc) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x101ccc8b, __VMLINUX_SYMBOL_STR(fld_client_init) },
	{ 0xa2e13c6a, __VMLINUX_SYMBOL_STR(lprocfs_obd_setup) },
	{ 0x1f1d9750, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x2cde5e39, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xbfb6ce61, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xf5a3c7ce, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x6ad293b1, __VMLINUX_SYMBOL_STR(class_connect) },
	{ 0x93b3f2a6, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xec6b8101, __VMLINUX_SYMBOL_STR(fld_client_fini) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x93a9ab73, __VMLINUX_SYMBOL_STR(class_conn2export) },
	{ 0x6fcb7042, __VMLINUX_SYMBOL_STR(lprocfs_counter_add) },
	{ 0x723b74aa, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xe2f91ce3, __VMLINUX_SYMBOL_STR(libcfs_debug_msg) },
	{ 0x6c347f21, __VMLINUX_SYMBOL_STR(fld_client_lookup) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x52b9c7e9, __VMLINUX_SYMBOL_STR(lbug_with_loc) },
	{ 0x97a1f2d2, __VMLINUX_SYMBOL_STR(fget) },
	{ 0xc453d821, __VMLINUX_SYMBOL_STR(libcfs_kkuc_group_add) },
	{ 0x4070d4dc, __VMLINUX_SYMBOL_STR(class_register_type) },
	{ 0xa686b893, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xfe7ea7e, __VMLINUX_SYMBOL_STR(fld_client_add_target) },
	{ 0xc508760e, __VMLINUX_SYMBOL_STR(class_export_put) },
	{ 0x742559b1, __VMLINUX_SYMBOL_STR(class_unregister_type) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ptlrpc,obdclass,libcfs,fld";

