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
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xce469aec, __VMLINUX_SYMBOL_STR(vfio_unregister_iommu_driver) },
	{ 0xf48707bd, __VMLINUX_SYMBOL_STR(vfio_register_iommu_driver) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x138be331, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xa7a6dbf5, __VMLINUX_SYMBOL_STR(find_vma) },
	{ 0x72e426bc, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x9ea66fea, __VMLINUX_SYMBOL_STR(get_user_pages_fast) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4cb428d7, __VMLINUX_SYMBOL_STR(iommu_unmap) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9a3afaf5, __VMLINUX_SYMBOL_STR(iommu_iova_to_phys) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0x79df5377, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x3841cd84, __VMLINUX_SYMBOL_STR(iommu_map) },
	{ 0x8b8a081e, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xf37ee9e7, __VMLINUX_SYMBOL_STR(iommu_detach_group) },
	{ 0x1b4fce3d, __VMLINUX_SYMBOL_STR(iommu_capable) },
	{ 0x2d2b2bf7, __VMLINUX_SYMBOL_STR(iommu_attach_group) },
	{ 0xb8c407c3, __VMLINUX_SYMBOL_STR(iommu_domain_free) },
	{ 0x2f0cfd48, __VMLINUX_SYMBOL_STR(iommu_domain_set_attr) },
	{ 0x698650a5, __VMLINUX_SYMBOL_STR(iommu_domain_alloc) },
	{ 0x891c1ae9, __VMLINUX_SYMBOL_STR(iommu_group_for_each_dev) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x9f75c271, __VMLINUX_SYMBOL_STR(get_task_mm) },
	{ 0xa6886322, __VMLINUX_SYMBOL_STR(down_write_trylock) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x748f1df7, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x4604a43a, __VMLINUX_SYMBOL_STR(mem_section) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xedd06f77, __VMLINUX_SYMBOL_STR(mmput) },
	{ 0x2cde5e39, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xbfb6ce61, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vfio";


MODULE_INFO(srcversion, "720A21E514C30F7DFF44C8B");
