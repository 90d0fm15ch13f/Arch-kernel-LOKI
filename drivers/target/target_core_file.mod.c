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
	{ 0x8ba61834, __VMLINUX_SYMBOL_STR(sbc_attrib_attrs) },
	{ 0x6ebb41a1, __VMLINUX_SYMBOL_STR(sbc_get_device_type) },
	{ 0x1d81e6bf, __VMLINUX_SYMBOL_STR(target_backend_unregister) },
	{ 0xa7d25575, __VMLINUX_SYMBOL_STR(transport_backend_register) },
	{ 0xf8f9eeb2, __VMLINUX_SYMBOL_STR(sbc_dif_verify) },
	{ 0xb66a8b3f, __VMLINUX_SYMBOL_STR(vfs_iter_read) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x28780448, __VMLINUX_SYMBOL_STR(blkdev_issue_discard) },
	{ 0x51d68ca3, __VMLINUX_SYMBOL_STR(target_to_linux_sector) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2f107ce5, __VMLINUX_SYMBOL_STR(target_configure_unmap_from_queue) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x3539f11b, __VMLINUX_SYMBOL_STR(match_strlcpy) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x96c78fad, __VMLINUX_SYMBOL_STR(vfs_fsync_range) },
	{ 0xb62df9f8, __VMLINUX_SYMBOL_STR(target_complete_cmd) },
	{ 0x57fd5ff8, __VMLINUX_SYMBOL_STR(vfs_iter_write) },
	{ 0xcfc40112, __VMLINUX_SYMBOL_STR(iov_iter_bvec) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd6175858, __VMLINUX_SYMBOL_STR(sbc_get_write_same_sectors) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6e0580ec, __VMLINUX_SYMBOL_STR(sbc_parse_cdb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4b03b471, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8c5f1226, __VMLINUX_SYMBOL_STR(kernel_write) },
	{ 0xc5185f37, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";

