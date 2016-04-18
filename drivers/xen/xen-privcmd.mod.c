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
	{ 0x8b8a081e, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x45d14bdf, __VMLINUX_SYMBOL_STR(hypercall_page) },
	{ 0x3356b90b, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x50c1905c, __VMLINUX_SYMBOL_STR(xen_remap_domain_gfn_range) },
	{ 0x55526907, __VMLINUX_SYMBOL_STR(xen_features) },
	{ 0xf4e76787, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x55802858, __VMLINUX_SYMBOL_STR(xen_unmap_domain_gfn_range) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x54ee53cd, __VMLINUX_SYMBOL_STR(apply_to_page_range) },
	{ 0x884b0e22, __VMLINUX_SYMBOL_STR(alloc_xenballooned_pages) },
	{ 0xd4a3b851, __VMLINUX_SYMBOL_STR(xen_remap_domain_gfn_array) },
	{ 0x2cde5e39, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xbfb6ce61, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x2e33f9ac, __VMLINUX_SYMBOL_STR(free_xenballooned_pages) },
	{ 0xa7a6dbf5, __VMLINUX_SYMBOL_STR(find_vma) },
	{ 0x79df5377, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6d334118, __VMLINUX_SYMBOL_STR(__get_user_8) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x3bcbc272, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x7aec9089, __VMLINUX_SYMBOL_STR(clear_user) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

