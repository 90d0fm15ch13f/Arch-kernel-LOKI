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
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb738c764, __VMLINUX_SYMBOL_STR(rtl8723_phy_reload_adda_registers) },
	{ 0x6dc6489f, __VMLINUX_SYMBOL_STR(rtl_pci_probe) },
	{ 0x70c11624, __VMLINUX_SYMBOL_STR(rtl_cam_get_free_entry) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x67784a7, __VMLINUX_SYMBOL_STR(rtl_dm_diginit) },
	{ 0xa73b5cf8, __VMLINUX_SYMBOL_STR(rtl_ps_disable_nic) },
	{ 0xb81cc241, __VMLINUX_SYMBOL_STR(rtl_btc_get_ops_pointer) },
	{ 0xc551b539, __VMLINUX_SYMBOL_STR(rtl_hal_pwrseqcmdparsing) },
	{ 0xe358ea24, __VMLINUX_SYMBOL_STR(rtl8723_download_fw) },
	{ 0x60412d6a, __VMLINUX_SYMBOL_STR(rtl_get_tcb_desc) },
	{ 0x2a47c8f, __VMLINUX_SYMBOL_STR(rtl_efuse_shadow_map_update) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x79188a02, __VMLINUX_SYMBOL_STR(rtl_query_rxpwrpercentage) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xb32f06fa, __VMLINUX_SYMBOL_STR(rtl_cam_add_one_entry) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x207fbb70, __VMLINUX_SYMBOL_STR(rtl_evm_db_to_percentage) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x2b8f30c7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x90433ce1, __VMLINUX_SYMBOL_STR(rtl8723_dm_init_dynamic_txpower) },
	{ 0x32a2bd39, __VMLINUX_SYMBOL_STR(rtl_pci_resume) },
	{ 0xea62dc3, __VMLINUX_SYMBOL_STR(rtl8723_phy_reload_mac_registers) },
	{ 0xa461b360, __VMLINUX_SYMBOL_STR(rtl_ps_enable_nic) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xbbe676ba, __VMLINUX_SYMBOL_STR(rtl8723_dm_init_dynamic_bb_powersaving) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x80037218, __VMLINUX_SYMBOL_STR(rtl8723_phy_rf_serial_read) },
	{ 0x3b6b8baf, __VMLINUX_SYMBOL_STR(rtl8723_phy_query_bb_reg) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xbfd64ebf, __VMLINUX_SYMBOL_STR(rtl_signal_scale_mapping) },
	{ 0x5593ce35, __VMLINUX_SYMBOL_STR(rtl8723_phy_mac_setting_calibration) },
	{ 0x56ecc71e, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x9c243684, __VMLINUX_SYMBOL_STR(rtl8723ae_firmware_selfreset) },
	{ 0xac3533cb, __VMLINUX_SYMBOL_STR(rtl8723_phy_path_a_fill_iqk_matrix) },
	{ 0xd0e3fb11, __VMLINUX_SYMBOL_STR(rtl8723_dm_init_edca_turbo) },
	{ 0xdd1fd162, __VMLINUX_SYMBOL_STR(rtl_pci_suspend) },
	{ 0xdffd39e, __VMLINUX_SYMBOL_STR(rtlwifi_rate_mapping) },
	{ 0x51cd7fc0, __VMLINUX_SYMBOL_STR(rtl8723_phy_pi_mode_switch) },
	{ 0x2afdadfc, __VMLINUX_SYMBOL_STR(rtl8723_save_adda_registers) },
	{ 0x2fc703c8, __VMLINUX_SYMBOL_STR(rtl_pci_disconnect) },
	{ 0x36ea11a4, __VMLINUX_SYMBOL_STR(rtl_cmd_send_packet) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x8c18ab93, __VMLINUX_SYMBOL_STR(rtl8723_phy_init_bb_rf_reg_def) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe235b0f8, __VMLINUX_SYMBOL_STR(rtl8723_phy_txpwr_idx_to_dbm) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x16c843b0, __VMLINUX_SYMBOL_STR(rtl8723_phy_save_mac_registers) },
	{ 0x2f686720, __VMLINUX_SYMBOL_STR(rtl_cam_mark_invalid) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe0760c66, __VMLINUX_SYMBOL_STR(rtl_cam_del_entry) },
	{ 0x25c20d5, __VMLINUX_SYMBOL_STR(rtl_cam_empty_entry) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xccca7ecb, __VMLINUX_SYMBOL_STR(rtl_cam_reset_all_entry) },
	{ 0x15d88f7b, __VMLINUX_SYMBOL_STR(rtl8723_phy_path_adda_on) },
	{ 0xecd10e38, __VMLINUX_SYMBOL_STR(rtl_process_phyinfo) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xfbf27422, __VMLINUX_SYMBOL_STR(rtl8723_phy_rf_serial_write) },
	{ 0xaf4d6d94, __VMLINUX_SYMBOL_STR(rtl8723_phy_calculate_bit_shift) },
	{ 0x8bcba0be, __VMLINUX_SYMBOL_STR(efuse_read_1byte) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xeda95e78, __VMLINUX_SYMBOL_STR(rtl8723_phy_set_bb_reg) },
	{ 0x6fee3a6c, __VMLINUX_SYMBOL_STR(rtl8723_phy_set_sw_chnl_cmdarray) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtlwifi,rtl8723-common,rtl_pci,btcoexist";

MODULE_ALIAS("pci:v000010ECd00008723sv*sd*bc*sc*i*");
