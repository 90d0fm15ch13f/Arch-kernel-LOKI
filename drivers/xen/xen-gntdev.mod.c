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
	{ 0x25f02c87, __VMLINUX_SYMBOL_STR(xen_p2m_addr) },
	{ 0x45d14bdf, __VMLINUX_SYMBOL_STR(hypercall_page) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x138be331, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x411d62d7, __VMLINUX_SYMBOL_STR(gnttab_map_refs) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xfe727411, __VMLINUX_SYMBOL_STR(get_phys_to_machine) },
	{ 0xd9fb2aa, __VMLINUX_SYMBOL_STR(gnttab_alloc_pages) },
	{ 0x55526907, __VMLINUX_SYMBOL_STR(xen_features) },
	{ 0xdee6436c, __VMLINUX_SYMBOL_STR(mmu_notifier_register) },
	{ 0x4b5e162b, __VMLINUX_SYMBOL_STR(gnttab_unmap_refs_sync) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xedd06f77, __VMLINUX_SYMBOL_STR(mmput) },
	{ 0x3a7d80f9, __VMLINUX_SYMBOL_STR(xen_max_p2m_pfn) },
	{ 0x72e426bc, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x9312d80e, __VMLINUX_SYMBOL_STR(evtchn_put) },
	{ 0xf4e76787, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xf1d3bb4b, __VMLINUX_SYMBOL_STR(gnttab_free_pages) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9f75c271, __VMLINUX_SYMBOL_STR(get_task_mm) },
	{ 0x467d05ca, __VMLINUX_SYMBOL_STR(mmu_notifier_unregister) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x54ee53cd, __VMLINUX_SYMBOL_STR(apply_to_page_range) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x209ec764, __VMLINUX_SYMBOL_STR(xen_event_channel_op_compat) },
	{ 0x4e74e625, __VMLINUX_SYMBOL_STR(gnttab_batch_copy) },
	{ 0xd786f5e8, __VMLINUX_SYMBOL_STR(vm_insert_page) },
	{ 0xa7a6dbf5, __VMLINUX_SYMBOL_STR(find_vma) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8b97de6d, __VMLINUX_SYMBOL_STR(pv_mmu_ops) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0xf5785b42, __VMLINUX_SYMBOL_STR(evtchn_get) },
	{ 0x5a4896a8, __VMLINUX_SYMBOL_STR(__put_user_2) },
	{ 0x3362b03c, __VMLINUX_SYMBOL_STR(xen_p2m_size) },
	{ 0x15010e1f, __VMLINUX_SYMBOL_STR(arbitrary_virt_to_machine) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x3bcbc272, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x748f1df7, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x9ea66fea, __VMLINUX_SYMBOL_STR(get_user_pages_fast) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

