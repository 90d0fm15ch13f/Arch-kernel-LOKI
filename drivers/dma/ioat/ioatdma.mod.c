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
	{ 0x8b8a081e, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xae405b5f, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6e85365a, __VMLINUX_SYMBOL_STR(pci_bus_type) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb96a5e97, __VMLINUX_SYMBOL_STR(alloc_dca_provider) },
	{ 0x597e7731, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xb411b484, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x6b9bda7f, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xa4eb8c7b, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xfb8d9ffb, __VMLINUX_SYMBOL_STR(dma_async_tx_descriptor_init) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x5fc3e8c, __VMLINUX_SYMBOL_STR(kobject_del) },
	{ 0xb5aa7165, __VMLINUX_SYMBOL_STR(dma_pool_destroy) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6c7a01fa, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1d566b71, __VMLINUX_SYMBOL_STR(dma_async_device_register) },
	{ 0x3c6e627f, __VMLINUX_SYMBOL_STR(dmaengine_unmap_put) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xcb264420, __VMLINUX_SYMBOL_STR(pci_enable_pcie_error_reporting) },
	{ 0x49581969, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x75bc549a, __VMLINUX_SYMBOL_STR(x86_cpu_to_apicid) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x7a9bdd3b, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xe17f8bc8, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xedaa19a7, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x2a37d074, __VMLINUX_SYMBOL_STR(dma_pool_free) },
	{ 0x270e8dd, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xd189bba9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x79df5377, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x1075585f, __VMLINUX_SYMBOL_STR(pci_enable_msix_range) },
	{ 0x2b227e8a, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xcd265af1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x1a354fb8, __VMLINUX_SYMBOL_STR(devm_free_irq) },
	{ 0xbf1c1df2, __VMLINUX_SYMBOL_STR(register_dca_provider) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x14a95ba1, __VMLINUX_SYMBOL_STR(pci_cleanup_aer_uncorrect_error_status) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc0cd3b13, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x245ccad5, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0x39c6ca22, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0x771cf835, __VMLINUX_SYMBOL_STR(dma_pool_alloc) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x5d870e54, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xed433664, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x31396718, __VMLINUX_SYMBOL_STR(unregister_dca_provider) },
	{ 0x92234a23, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x5f78fb17, __VMLINUX_SYMBOL_STR(free_dca_provider) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x93242c03, __VMLINUX_SYMBOL_STR(pci_disable_pcie_error_reporting) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1dea959e, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x7f45d190, __VMLINUX_SYMBOL_STR(dma_async_device_unregister) },
	{ 0x2c5f3905, __VMLINUX_SYMBOL_STR(pci_enable_device_mem) },
	{ 0xf545cda2, __VMLINUX_SYMBOL_STR(pci_wake_from_d3) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x52cfb587, __VMLINUX_SYMBOL_STR(dma_pool_create) },
	{ 0x8733aade, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x9820b644, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt_taint) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xa3e99d8c, __VMLINUX_SYMBOL_STR(dmam_pool_create) },
	{ 0xf9a516bb, __VMLINUX_SYMBOL_STR(pci_save_state) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dca";

MODULE_ALIAS("pci:v00008086d00003430sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003431sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003432sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003433sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003429sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000342Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000342Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000342Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003710sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003711sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003712sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003713sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003714sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003715sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003716sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003717sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003718sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003719sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C25sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C27sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003C2Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E25sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E27sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000E2Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F25sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F27sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002F2Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F25sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F27sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F2Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C51sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C52sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F51sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F52sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006F53sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "0094200AD57FC6BB5693444");
