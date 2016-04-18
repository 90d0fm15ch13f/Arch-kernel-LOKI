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
	{ 0x65bcd022, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x9c2da30a, __VMLINUX_SYMBOL_STR(vnic_dev_unregister) },
	{ 0xa78deb61, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf6a418c1, __VMLINUX_SYMBOL_STR(kobject_get) },
	{ 0x6e85365a, __VMLINUX_SYMBOL_STR(pci_bus_type) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x658cf829, __VMLINUX_SYMBOL_STR(iommu_attach_device) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xcc5d22d9, __VMLINUX_SYMBOL_STR(can_do_mlock) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x9669032a, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xa56e18e4, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0x3841cd84, __VMLINUX_SYMBOL_STR(iommu_map) },
	{ 0x6b9bda7f, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xbe1f191, __VMLINUX_SYMBOL_STR(set_page_dirty_lock) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xf0ef15b4, __VMLINUX_SYMBOL_STR(list_sort) },
	{ 0x9cfae1a5, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x21df74d9, __VMLINUX_SYMBOL_STR(bitmap_set) },
	{ 0xedd06f77, __VMLINUX_SYMBOL_STR(mmput) },
	{ 0x16c745d, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xce53df1d, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x4cb722fa, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0xc7cb2458, __VMLINUX_SYMBOL_STR(ib_alloc_device) },
	{ 0xa6886322, __VMLINUX_SYMBOL_STR(down_write_trylock) },
	{ 0xcde01fc7, __VMLINUX_SYMBOL_STR(ib_dealloc_device) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x64127b67, __VMLINUX_SYMBOL_STR(bitmap_find_next_zero_area_off) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x9f75c271, __VMLINUX_SYMBOL_STR(get_task_mm) },
	{ 0x7a9bdd3b, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0xac9d0154, __VMLINUX_SYMBOL_STR(vnic_dev_get_res) },
	{ 0x6386e65f, __VMLINUX_SYMBOL_STR(iommu_set_fault_handler) },
	{ 0xccfb9108, __VMLINUX_SYMBOL_STR(vnic_dev_register) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x4a4fd348, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x120b336a, __VMLINUX_SYMBOL_STR(__rb_insert_augmented) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x4cb428d7, __VMLINUX_SYMBOL_STR(iommu_unmap) },
	{ 0x698650a5, __VMLINUX_SYMBOL_STR(iommu_domain_alloc) },
	{ 0xd91fc306, __VMLINUX_SYMBOL_STR(vnic_dev_get_pdev) },
	{ 0x84ac7241, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x2cde5e39, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xb8c407c3, __VMLINUX_SYMBOL_STR(iommu_domain_free) },
	{ 0xbfb6ce61, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xf5a3c7ce, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x1b4fce3d, __VMLINUX_SYMBOL_STR(iommu_capable) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x687db433, __VMLINUX_SYMBOL_STR(pci_clear_master) },
	{ 0x90b58407, __VMLINUX_SYMBOL_STR(iommu_detach_device) },
	{ 0xa5afd680, __VMLINUX_SYMBOL_STR(ib_dispatch_event) },
	{ 0xdcf8f6bf, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xe6a9fa13, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x3161e908, __VMLINUX_SYMBOL_STR(iommu_present) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0x5944d015, __VMLINUX_SYMBOL_STR(__cachemode2pte_tbl) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xab884fa2, __VMLINUX_SYMBOL_STR(get_user_pages) },
	{ 0xd9e22edf, __VMLINUX_SYMBOL_STR(ib_register_device) },
	{ 0xe1588475, __VMLINUX_SYMBOL_STR(ib_unregister_device) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x60fcc59e, __VMLINUX_SYMBOL_STR(vnic_dev_get_res_count) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x37176ede, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x1729abed, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb16863fa, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x551bd071, __VMLINUX_SYMBOL_STR(__rb_erase_color) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x748f1df7, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x4f4a5ce8, __VMLINUX_SYMBOL_STR(enic_api_devcmd_proxy_by_index) },
	{ 0x3174bd79, __VMLINUX_SYMBOL_STR(bitmap_clear) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=enic,ib_core";

MODULE_ALIAS("pci:v00001137d000000CFsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0C9D6E2A3293F1D4B85E469");
