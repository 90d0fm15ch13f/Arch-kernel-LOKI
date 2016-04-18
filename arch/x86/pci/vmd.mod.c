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
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x830a5404, __VMLINUX_SYMBOL_STR(irq_domain_set_info) },
	{ 0x3c9509f6, __VMLINUX_SYMBOL_STR(handle_simple_irq) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf356b4b, __VMLINUX_SYMBOL_STR(msi_desc_to_pci_dev) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x38a71b7e, __VMLINUX_SYMBOL_STR(pci_free_resource_list) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x93b3f2a6, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x2899691b, __VMLINUX_SYMBOL_STR(pci_rescan_bus) },
	{ 0xac5d2ce7, __VMLINUX_SYMBOL_STR(add_dma_domain) },
	{ 0xc939f14d, __VMLINUX_SYMBOL_STR(pci_create_root_bus) },
	{ 0x45a765cf, __VMLINUX_SYMBOL_STR(pci_add_resource) },
	{ 0xd7fd731e, __VMLINUX_SYMBOL_STR(pci_msi_create_irq_domain) },
	{ 0xe086094b, __VMLINUX_SYMBOL_STR(pci_find_next_bus) },
	{ 0x8733aade, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x1075585f, __VMLINUX_SYMBOL_STR(pci_enable_msix_range) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x418ee8a3, __VMLINUX_SYMBOL_STR(pci_msix_vec_count) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x4a8037fe, __VMLINUX_SYMBOL_STR(pcim_iomap) },
	{ 0x597e7731, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xe60aab89, __VMLINUX_SYMBOL_STR(irq_get_irq_data) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x7ceaf0d5, __VMLINUX_SYMBOL_STR(generic_handle_irq) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x7ef10d41, __VMLINUX_SYMBOL_STR(irq_domain_remove) },
	{ 0xe76c7ea, __VMLINUX_SYMBOL_STR(del_dma_domain) },
	{ 0x92d70aea, __VMLINUX_SYMBOL_STR(pci_remove_root_bus) },
	{ 0x4408f350, __VMLINUX_SYMBOL_STR(pci_stop_root_bus) },
	{ 0x1f1d9750, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0xf9a516bb, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x49581969, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d0000201Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1E880D2C44D9CCA3ACF8A9C");
