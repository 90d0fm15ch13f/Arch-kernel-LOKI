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
	{ 0x271983da, __VMLINUX_SYMBOL_STR(rtl_cam_delete_one_entry) },
	{ 0xfc9d8c22, __VMLINUX_SYMBOL_STR(rtl_fw_cb) },
	{ 0x6dc6489f, __VMLINUX_SYMBOL_STR(rtl_pci_probe) },
	{ 0x70c11624, __VMLINUX_SYMBOL_STR(rtl_cam_get_free_entry) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x67784a7, __VMLINUX_SYMBOL_STR(rtl_dm_diginit) },
	{ 0xa73b5cf8, __VMLINUX_SYMBOL_STR(rtl_ps_disable_nic) },
	{ 0x60412d6a, __VMLINUX_SYMBOL_STR(rtl_get_tcb_desc) },
	{ 0x2a47c8f, __VMLINUX_SYMBOL_STR(rtl_efuse_shadow_map_update) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xb32f06fa, __VMLINUX_SYMBOL_STR(rtl_cam_add_one_entry) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xde4ca73a, __VMLINUX_SYMBOL_STR(rtl_phy_scan_operation_backup) },
	{ 0x2b8f30c7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x5b60bd2b, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x32a2bd39, __VMLINUX_SYMBOL_STR(rtl_pci_resume) },
	{ 0xa461b360, __VMLINUX_SYMBOL_STR(rtl_ps_enable_nic) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x2921a4d4, __VMLINUX_SYMBOL_STR(rtl_btc_status_false) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x56ecc71e, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xdd1fd162, __VMLINUX_SYMBOL_STR(rtl_pci_suspend) },
	{ 0xdffd39e, __VMLINUX_SYMBOL_STR(rtlwifi_rate_mapping) },
	{ 0x2fc703c8, __VMLINUX_SYMBOL_STR(rtl_pci_disconnect) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x9d3ef817, __VMLINUX_SYMBOL_STR(rtl_rfreg_delay) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2f686720, __VMLINUX_SYMBOL_STR(rtl_cam_mark_invalid) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe0760c66, __VMLINUX_SYMBOL_STR(rtl_cam_del_entry) },
	{ 0x25c20d5, __VMLINUX_SYMBOL_STR(rtl_cam_empty_entry) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xccca7ecb, __VMLINUX_SYMBOL_STR(rtl_cam_reset_all_entry) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x980848e2, __VMLINUX_SYMBOL_STR(rtl_addr_delay) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtlwifi,rtl_pci";

MODULE_ALIAS("pci:v000010ECd00008193sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd0000002Bsv*sd*bc*sc*i*");
