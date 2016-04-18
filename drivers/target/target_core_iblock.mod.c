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
	{ 0xb0f3e9eb, __VMLINUX_SYMBOL_STR(bioset_integrity_create) },
	{ 0x2f107ce5, __VMLINUX_SYMBOL_STR(target_configure_unmap_from_queue) },
	{ 0x136328a, __VMLINUX_SYMBOL_STR(blkdev_get_by_path) },
	{ 0x83eccbd3, __VMLINUX_SYMBOL_STR(bioset_create) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x620eab73, __VMLINUX_SYMBOL_STR(bioset_free) },
	{ 0xd1ac12bc, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0x3539f11b, __VMLINUX_SYMBOL_STR(match_strlcpy) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x882a9834, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x6d148ca9, __VMLINUX_SYMBOL_STR(bio_integrity_add_page) },
	{ 0x4ee4f095, __VMLINUX_SYMBOL_STR(bio_integrity_alloc) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xa63af24f, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd6175858, __VMLINUX_SYMBOL_STR(sbc_get_write_same_sectors) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x46a98f37, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0x67bf69ce, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x71b221d5, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xb62df9f8, __VMLINUX_SYMBOL_STR(target_complete_cmd) },
	{ 0x6a17c888, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x28780448, __VMLINUX_SYMBOL_STR(blkdev_issue_discard) },
	{ 0x51d68ca3, __VMLINUX_SYMBOL_STR(target_to_linux_sector) },
	{ 0x6e0580ec, __VMLINUX_SYMBOL_STR(sbc_parse_cdb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";

