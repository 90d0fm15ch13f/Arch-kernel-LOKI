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
	{ 0x2ca92fa8, __VMLINUX_SYMBOL_STR(ldlm_lock_decref) },
	{ 0x3379b81e, __VMLINUX_SYMBOL_STR(class_disconnect) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfc87cfc1, __VMLINUX_SYMBOL_STR(class_exp2obd) },
	{ 0x1b61651f, __VMLINUX_SYMBOL_STR(cl_lock_put) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd00b38e7, __VMLINUX_SYMBOL_STR(cl_lock_cancel) },
	{ 0x5c37c3de, __VMLINUX_SYMBOL_STR(lu_context_key_quiesce_many) },
	{ 0x12835999, __VMLINUX_SYMBOL_STR(cl_page_size) },
	{ 0x80fc0ab6, __VMLINUX_SYMBOL_STR(lu_object_header_fini) },
	{ 0xabd77835, __VMLINUX_SYMBOL_STR(cl_io_submit_sync) },
	{ 0xabc91939, __VMLINUX_SYMBOL_STR(cl_lock_mutex_get) },
	{ 0x71f662a3, __VMLINUX_SYMBOL_STR(libcfs_debug) },
	{ 0xeee6858a, __VMLINUX_SYMBOL_STR(lu_context_exit) },
	{ 0x596bca9d, __VMLINUX_SYMBOL_STR(cl_io_init) },
	{ 0x7460702e, __VMLINUX_SYMBOL_STR(cl_lock_slice_add) },
	{ 0x3c1285bd, __VMLINUX_SYMBOL_STR(libcfs_subsystem_debug) },
	{ 0x2f752aef, __VMLINUX_SYMBOL_STR(cl_2queue_disown) },
	{ 0xa7e16614, __VMLINUX_SYMBOL_STR(lu_kmem_init) },
	{ 0xa31d6639, __VMLINUX_SYMBOL_STR(cl_object_find) },
	{ 0x661629d2, __VMLINUX_SYMBOL_STR(cl_lock_delete) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1f432292, __VMLINUX_SYMBOL_STR(cl_lock_mutex_put) },
	{ 0x50048ed1, __VMLINUX_SYMBOL_STR(class_name2obd) },
	{ 0x3b37a9c, __VMLINUX_SYMBOL_STR(lu_kmem_fini) },
	{ 0xc8da7bfe, __VMLINUX_SYMBOL_STR(cl_object_header_init) },
	{ 0x3dc7fac0, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x79235b11, __VMLINUX_SYMBOL_STR(cl_page_cache_add) },
	{ 0x54041a05, __VMLINUX_SYMBOL_STR(cl_env_get) },
	{ 0xaed3af9d, __VMLINUX_SYMBOL_STR(cl_lock_request) },
	{ 0xe0ec6f56, __VMLINUX_SYMBOL_STR(lu_object_init) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x80d425a7, __VMLINUX_SYMBOL_STR(lu_context_enter) },
	{ 0x8446b9a8, __VMLINUX_SYMBOL_STR(obdo_to_ioobj) },
	{ 0x40427961, __VMLINUX_SYMBOL_STR(lu_context_key_revive_many) },
	{ 0xef76f858, __VMLINUX_SYMBOL_STR(block_debug_setup) },
	{ 0x6436638b, __VMLINUX_SYMBOL_STR(cl_io_fini) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xbb1dc8ba, __VMLINUX_SYMBOL_STR(lu_site_init_finish) },
	{ 0x34c1b6fb, __VMLINUX_SYMBOL_STR(lu_device_fini) },
	{ 0xef343a53, __VMLINUX_SYMBOL_STR(lu_device_init) },
	{ 0x82b38a41, __VMLINUX_SYMBOL_STR(cl_page_put) },
	{ 0xa3a9c3ca, __VMLINUX_SYMBOL_STR(lu_context_key_register_many) },
	{ 0xf6e13200, __VMLINUX_SYMBOL_STR(cl_2queue_fini) },
	{ 0xe17f8bc8, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa2416d70, __VMLINUX_SYMBOL_STR(cl_env_put) },
	{ 0xf9007090, __VMLINUX_SYMBOL_STR(cl_page_slice_add) },
	{ 0xd591613a, __VMLINUX_SYMBOL_STR(lu_context_key_degister_many) },
	{ 0x5fe97b73, __VMLINUX_SYMBOL_STR(block_debug_check) },
	{ 0xd07ca40, __VMLINUX_SYMBOL_STR(cl_index) },
	{ 0xc1ae595b, __VMLINUX_SYMBOL_STR(lu_object_add_top) },
	{ 0x2863f6d6, __VMLINUX_SYMBOL_STR(cl_object_put) },
	{ 0x834806d8, __VMLINUX_SYMBOL_STR(cl_wait) },
	{ 0x2b82de65, __VMLINUX_SYMBOL_STR(cl_lock_get) },
	{ 0x6ad293b1, __VMLINUX_SYMBOL_STR(class_connect) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xd189bba9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x79df5377, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x9a480503, __VMLINUX_SYMBOL_STR(cl_page_own) },
	{ 0x44839bbb, __VMLINUX_SYMBOL_STR(cfs_rand) },
	{ 0x981664c6, __VMLINUX_SYMBOL_STR(cl_lock_release) },
	{ 0xbc897fbe, __VMLINUX_SYMBOL_STR(cl_page_delete) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x6d334118, __VMLINUX_SYMBOL_STR(__get_user_8) },
	{ 0x3da9d040, __VMLINUX_SYMBOL_STR(cl_page_find) },
	{ 0xfb1d0efa, __VMLINUX_SYMBOL_STR(lu_env_fini) },
	{ 0x3a018b73, __VMLINUX_SYMBOL_STR(lu_site_purge) },
	{ 0x9ff1bc60, __VMLINUX_SYMBOL_STR(lu_object_fini) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x487d4ed9, __VMLINUX_SYMBOL_STR(cl_2queue_discard) },
	{ 0xd888c915, __VMLINUX_SYMBOL_STR(cl_site_fini) },
	{ 0x93a9ab73, __VMLINUX_SYMBOL_STR(class_conn2export) },
	{ 0x6fcb7042, __VMLINUX_SYMBOL_STR(lprocfs_counter_add) },
	{ 0xe2f91ce3, __VMLINUX_SYMBOL_STR(libcfs_debug_msg) },
	{ 0x8248e7c, __VMLINUX_SYMBOL_STR(cl_page_clip) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb108003, __VMLINUX_SYMBOL_STR(lu_context_key_get) },
	{ 0x52b9c7e9, __VMLINUX_SYMBOL_STR(lbug_with_loc) },
	{ 0x108d31ef, __VMLINUX_SYMBOL_STR(cl_page_list_add) },
	{ 0x6e98614a, __VMLINUX_SYMBOL_STR(cl_2queue_init) },
	{ 0x300c2dd5, __VMLINUX_SYMBOL_STR(lu_env_init) },
	{ 0x4070d4dc, __VMLINUX_SYMBOL_STR(class_register_type) },
	{ 0x864db594, __VMLINUX_SYMBOL_STR(lu_object_add) },
	{ 0x733f0aa8, __VMLINUX_SYMBOL_STR(cl_site_init) },
	{ 0x22633245, __VMLINUX_SYMBOL_STR(cl_unuse) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x9a9641af, __VMLINUX_SYMBOL_STR(cl_lock_at) },
	{ 0x748f1df7, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x742559b1, __VMLINUX_SYMBOL_STR(class_unregister_type) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ptlrpc,obdclass,libcfs";


MODULE_INFO(srcversion, "5F541E2EB05F1BEC4D2A357");
