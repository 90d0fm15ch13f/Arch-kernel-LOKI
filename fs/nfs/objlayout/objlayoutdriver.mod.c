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
	{ 0xe17b18c8, __VMLINUX_SYMBOL_STR(pnfs_unregister_layoutdriver) },
	{ 0x8b8a081e, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x2c17e28d, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_write) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7129e5f8, __VMLINUX_SYMBOL_STR(hex_asc) },
	{ 0xaf5bf6ef, __VMLINUX_SYMBOL_STR(nfs_debug) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xfbedcc9, __VMLINUX_SYMBOL_STR(ore_read) },
	{ 0x7c9722ba, __VMLINUX_SYMBOL_STR(nfs_dreq_bytes_left) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x67a0dbe9, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0x4d85d932, __VMLINUX_SYMBOL_STR(pnfs_ld_write_done) },
	{ 0x767f7138, __VMLINUX_SYMBOL_STR(ore_put_io_state) },
	{ 0x67883edb, __VMLINUX_SYMBOL_STR(ore_write) },
	{ 0x5e7a6301, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0x27eb6cad, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_test) },
	{ 0x6c7a01fa, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0xe9ac981e, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_cleanup) },
	{ 0x6bda64f0, __VMLINUX_SYMBOL_STR(osduld_info_lookup) },
	{ 0x1c33788b, __VMLINUX_SYMBOL_STR(pnfs_generic_sync) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x4e000115, __VMLINUX_SYMBOL_STR(ore_check_io) },
	{ 0x142a898c, __VMLINUX_SYMBOL_STR(nfs4_find_get_deviceid) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x79fc30c2, __VMLINUX_SYMBOL_STR(xdr_init_decode) },
	{ 0xc5fdef94, __VMLINUX_SYMBOL_STR(call_usermodehelper) },
	{ 0xb126bc85, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x133301c7, __VMLINUX_SYMBOL_STR(nfs4_put_deviceid_node) },
	{ 0x28806871, __VMLINUX_SYMBOL_STR(ore_verify_layout) },
	{ 0x79df5377, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x1fbc1f3, __VMLINUX_SYMBOL_STR(osduld_put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc0cd3b13, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x815f2897, __VMLINUX_SYMBOL_STR(empty_zero_page) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x27bcde43, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_readpages) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x65994f1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque_fixed) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xdee1f3, __VMLINUX_SYMBOL_STR(nfs_pgio_current_mirror) },
	{ 0xa57f7525, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_writepages) },
	{ 0x6d9c553c, __VMLINUX_SYMBOL_STR(ore_get_rw_state) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x678eac35, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_read) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xaeef9526, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0x3862dda3, __VMLINUX_SYMBOL_STR(nfs4_init_deviceid_node) },
	{ 0x8bd2db86, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0xc38a461c, __VMLINUX_SYMBOL_STR(pnfs_ld_read_done) },
	{ 0x748f1df7, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0xd4fa9994, __VMLINUX_SYMBOL_STR(pnfs_register_layoutdriver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfsv4,sunrpc,libore,nfs,osd";

