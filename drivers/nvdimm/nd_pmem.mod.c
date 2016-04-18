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
	{ 0x53ad5fca, __VMLINUX_SYMBOL_STR(nd_btt_probe) },
	{ 0xd3542d1f, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x875f2ca0, __VMLINUX_SYMBOL_STR(alloc_disk_node) },
	{ 0x69a358a6, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x17d915c5, __VMLINUX_SYMBOL_STR(devm_init_badblocks) },
	{ 0xe60e848e, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x7bda429d, __VMLINUX_SYMBOL_STR(nvdimm_namespace_common_probe) },
	{ 0x7d4bde0c, __VMLINUX_SYMBOL_STR(badblocks_check) },
	{ 0x1db7706b, __VMLINUX_SYMBOL_STR(__copy_user_nocache) },
	{ 0xbefed4c3, __VMLINUX_SYMBOL_STR(phys_to_pfn_t) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x65071092, __VMLINUX_SYMBOL_STR(nvdimm_namespace_add_poison) },
	{ 0x6bbf635a, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x25e86b0b, __VMLINUX_SYMBOL_STR(blk_alloc_queue_node) },
	{ 0x91a1acd, __VMLINUX_SYMBOL_STR(nd_iostat_end) },
	{ 0x559bf9de, __VMLINUX_SYMBOL_STR(is_nd_btt) },
	{ 0x988e19f7, __VMLINUX_SYMBOL_STR(nvdimm_namespace_disk_name) },
	{ 0xdab0c66c, __VMLINUX_SYMBOL_STR(__nd_iostat_start) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xc61a97c7, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x5cde3b2a, __VMLINUX_SYMBOL_STR(__nd_driver_register) },
	{ 0xa59e8efc, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x7c7ad83c, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xefe74abc, __VMLINUX_SYMBOL_STR(pmem_should_map_pages) },
	{ 0x55efcea8, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0xe9faf427, __VMLINUX_SYMBOL_STR(nvdimm_namespace_detach_btt) },
	{ 0xae0d95e4, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0xb41a3566, __VMLINUX_SYMBOL_STR(blk_queue_physical_block_size) },
	{ 0x42634593, __VMLINUX_SYMBOL_STR(nvdimm_namespace_attach_btt) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe57d6a2b, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x862e5745, __VMLINUX_SYMBOL_STR(__devm_request_region) },
	{ 0x39c6ca22, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xe35dcdb7, __VMLINUX_SYMBOL_STR(badblocks_exit) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8b2f5c83, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0xdb2dc055, __VMLINUX_SYMBOL_STR(to_nd_region) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x679e98c6, __VMLINUX_SYMBOL_STR(nvdimm_revalidate_disk) },
	{ 0x63204696, __VMLINUX_SYMBOL_STR(devm_memremap) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7e9a0e9d, __VMLINUX_SYMBOL_STR(page_endio) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nd_btt";

