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
	{ 0x8b8a081e, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x6a17c888, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xf54bd49b, __VMLINUX_SYMBOL_STR(lcm) },
	{ 0x95559f21, __VMLINUX_SYMBOL_STR(osd_req_read) },
	{ 0xa8700607, __VMLINUX_SYMBOL_STR(osd_req_decode_get_attr_list) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xb7936819, __VMLINUX_SYMBOL_STR(osd_req_remove_object) },
	{ 0xa879c822, __VMLINUX_SYMBOL_STR(osd_req_read_sg) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x7eb3a960, __VMLINUX_SYMBOL_STR(osd_req_get_attributes) },
	{ 0x6d71df60, __VMLINUX_SYMBOL_STR(osd_req_write_kern) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa8fe3038, __VMLINUX_SYMBOL_STR(osd_finalize_request) },
	{ 0xf5d4a18d, __VMLINUX_SYMBOL_STR(osd_req_add_get_attr_list) },
	{ 0x71b221d5, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x79df5377, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x6446839b, __VMLINUX_SYMBOL_STR(async_xor) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8095a12e, __VMLINUX_SYMBOL_STR(osd_start_request) },
	{ 0xbe7993ff, __VMLINUX_SYMBOL_STR(osd_end_request) },
	{ 0x3d9ee9f0, __VMLINUX_SYMBOL_STR(clear_page) },
	{ 0x8b367e92, __VMLINUX_SYMBOL_STR(osd_execute_request_async) },
	{ 0x465cc998, __VMLINUX_SYMBOL_STR(osd_req_create_object) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x531de4c5, __VMLINUX_SYMBOL_STR(osd_req_decode_sense_full) },
	{ 0x7d41f9b7, __VMLINUX_SYMBOL_STR(osd_req_set_attributes) },
	{ 0x2a555bb8, __VMLINUX_SYMBOL_STR(bio_clone_bioset) },
	{ 0xb4e37aa0, __VMLINUX_SYMBOL_STR(async_gen_syndrome) },
	{ 0xcef703a8, __VMLINUX_SYMBOL_STR(osd_req_add_set_attr_list) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc732d8de, __VMLINUX_SYMBOL_STR(osd_req_write) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x37e1aa1e, __VMLINUX_SYMBOL_STR(bio_add_pc_page) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libosd,async_xor,async_pq";

