#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5e862211, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x72251fd2, __VMLINUX_SYMBOL_STR(blk_rq_set_block_pc) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x6a17c888, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xb85d01f9, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0xe38ba843, __VMLINUX_SYMBOL_STR(blk_make_request) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x677f42c3, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0x71b221d5, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x28615d21, __VMLINUX_SYMBOL_STR(blk_rq_map_kern) },
	{ 0xfe916dc6, __VMLINUX_SYMBOL_STR(hex_dump_to_buffer) },
	{ 0x27bedaac, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0x9a934ab7, __VMLINUX_SYMBOL_STR(bio_map_kern) },
	{ 0xc0174ab6, __VMLINUX_SYMBOL_STR(blk_execute_rq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x195089d6, __VMLINUX_SYMBOL_STR(blk_end_request) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37e1aa1e, __VMLINUX_SYMBOL_STR(bio_add_pc_page) },
	{ 0x43ddeef3, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0x7c2d098f, __VMLINUX_SYMBOL_STR(krealloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

