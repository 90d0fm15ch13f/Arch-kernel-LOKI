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
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xa56e18e4, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x1e0c2be4, __VMLINUX_SYMBOL_STR(ioremap_wc) },
	{ 0x3386efc1, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xb97785f1, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x57000eee, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xa4eb8c7b, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd355e031, __VMLINUX_SYMBOL_STR(vringh_complete_kern) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x9cfae1a5, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x21e992a5, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x16c745d, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xce53df1d, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x8e9ddd80, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xf4e76787, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xfa783f1a, __VMLINUX_SYMBOL_STR(scif_register_device) },
	{ 0x27882b9b, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x64462e3e, __VMLINUX_SYMBOL_STR(dma_sync_wait) },
	{ 0x4a4fd348, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xe9ce326c, __VMLINUX_SYMBOL_STR(mbus_register_device) },
	{ 0x29caab89, __VMLINUX_SYMBOL_STR(cosm_unregister_device) },
	{ 0xc7ca4cbe, __VMLINUX_SYMBOL_STR(cosm_register_device) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x6432894b, __VMLINUX_SYMBOL_STR(vringh_init_kern) },
	{ 0x1075585f, __VMLINUX_SYMBOL_STR(pci_enable_msix_range) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5f864e0, __VMLINUX_SYMBOL_STR(pci_intx) },
	{ 0x79b52204, __VMLINUX_SYMBOL_STR(mbus_unregister_device) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x4f384f8b, __VMLINUX_SYMBOL_STR(vringh_need_notify_kern) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x76d79325, __VMLINUX_SYMBOL_STR(__dma_request_channel) },
	{ 0x5d870e54, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x65bd2eb5, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x723b74aa, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xc48bae63, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3c71c418, __VMLINUX_SYMBOL_STR(vringh_getdesc_kern) },
	{ 0x37176ede, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1729abed, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x1dea959e, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xcf14c2f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x30b04526, __VMLINUX_SYMBOL_STR(ida_init) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xacb99769, __VMLINUX_SYMBOL_STR(ida_destroy) },
	{ 0x8c7cf3ee, __VMLINUX_SYMBOL_STR(scif_unregister_device) },
	{ 0x3bcbc272, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x173ad2ac, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vringh,scif_bus,mic_bus,cosm_bus";

MODULE_ALIAS("pci:v00008086d00002250sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002251sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002252sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002253sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002254sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002255sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002256sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002257sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002258sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002259sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000225Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000225Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000225Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000225Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000225Esv*sd*bc*sc*i*");
