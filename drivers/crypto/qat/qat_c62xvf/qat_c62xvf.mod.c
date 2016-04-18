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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa56e18e4, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x5f73be87, __VMLINUX_SYMBOL_STR(adf_dev_init) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x3bf372bc, __VMLINUX_SYMBOL_STR(adf_enable_vf2pf_comms) },
	{ 0xff2ae2bd, __VMLINUX_SYMBOL_STR(adf_vf_isr_resource_free) },
	{ 0x218d6342, __VMLINUX_SYMBOL_STR(adf_devmgr_update_class_index) },
	{ 0x9cfae1a5, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xb610cf98, __VMLINUX_SYMBOL_STR(adf_dev_stop) },
	{ 0x7f980133, __VMLINUX_SYMBOL_STR(adf_devmgr_rm_dev) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xe5ff3609, __VMLINUX_SYMBOL_STR(adf_dev_shutdown) },
	{ 0x1541cdb8, __VMLINUX_SYMBOL_STR(adf_cfg_dev_add) },
	{ 0x5dd64fbb, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4a4fd348, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0xa07ce375, __VMLINUX_SYMBOL_STR(adf_cfg_dev_remove) },
	{ 0x8c198434, __VMLINUX_SYMBOL_STR(adf_devmgr_add_dev) },
	{ 0xd1f3e652, __VMLINUX_SYMBOL_STR(pci_select_bars) },
	{ 0x7803c9fb, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_node_trace) },
	{ 0xd6891a2d, __VMLINUX_SYMBOL_STR(adf_dev_start) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa6430d63, __VMLINUX_SYMBOL_STR(qat_crypto_dev_config) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcc3b167a, __VMLINUX_SYMBOL_STR(adf_clean_vf_map) },
	{ 0x1729abed, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xe2f6bb6b, __VMLINUX_SYMBOL_STR(adf_devmgr_pci_to_accel_dev) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb16863fa, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0xb5a2a748, __VMLINUX_SYMBOL_STR(adf_vf_isr_resource_alloc) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xc0d72846, __VMLINUX_SYMBOL_STR(adf_iov_putmsg) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=intel_qat";

MODULE_ALIAS("pci:v00008086d000037C9sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8285D5A5A33DCD0659C3184");
