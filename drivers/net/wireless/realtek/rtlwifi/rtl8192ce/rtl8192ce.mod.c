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
	{ 0xd9b23b43, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_rfpath_switch) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xffaf9acb, __VMLINUX_SYMBOL_STR(_rtl92c_phy_fw_rf_serial_read) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x3d997823, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_txpower_level) },
	{ 0x487b6a86, __VMLINUX_SYMBOL_STR(rtl92c_set_fw_rsvdpagepkt) },
	{ 0x2c2a1eb3, __VMLINUX_SYMBOL_STR(rtl92c_dm_check_txpower_tracking) },
	{ 0xa73b5cf8, __VMLINUX_SYMBOL_STR(rtl_ps_disable_nic) },
	{ 0x33297bf5, __VMLINUX_SYMBOL_STR(rtl92c_dm_watchdog) },
	{ 0xd11ee98e, __VMLINUX_SYMBOL_STR(_rtl92c_phy_init_bb_rf_register_definition) },
	{ 0xf6e7a05, __VMLINUX_SYMBOL_STR(_rtl92c_phy_rf_serial_write) },
	{ 0x60412d6a, __VMLINUX_SYMBOL_STR(rtl_get_tcb_desc) },
	{ 0x327ce57f, __VMLINUX_SYMBOL_STR(_rtl92c_phy_rf_serial_read) },
	{ 0x160bdc6e, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_bw_mode) },
	{ 0x11a6896, __VMLINUX_SYMBOL_STR(rtl92c_phy_lc_calibrate) },
	{ 0xb3314d48, __VMLINUX_SYMBOL_STR(_rtl92c_phy_calculate_bit_shift) },
	{ 0x2a47c8f, __VMLINUX_SYMBOL_STR(rtl_efuse_shadow_map_update) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x79188a02, __VMLINUX_SYMBOL_STR(rtl_query_rxpwrpercentage) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xb32f06fa, __VMLINUX_SYMBOL_STR(rtl_cam_add_one_entry) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xde4ca73a, __VMLINUX_SYMBOL_STR(rtl_phy_scan_operation_backup) },
	{ 0x8bec7ff6, __VMLINUX_SYMBOL_STR(rtl92c_dm_init_edca_turbo) },
	{ 0x1d7fc65d, __VMLINUX_SYMBOL_STR(rtl92c_phy_iq_calibrate) },
	{ 0x5bcdff7d, __VMLINUX_SYMBOL_STR(rtl92c_dm_init) },
	{ 0xce121ee3, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_bb_reg) },
	{ 0x32a2bd39, __VMLINUX_SYMBOL_STR(rtl_pci_resume) },
	{ 0xa461b360, __VMLINUX_SYMBOL_STR(rtl_ps_enable_nic) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xe2e264e1, __VMLINUX_SYMBOL_STR(rtl92c_firmware_selfreset) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc5b1bf9d, __VMLINUX_SYMBOL_STR(rtl92c_dm_rf_saving) },
	{ 0x283831c6, __VMLINUX_SYMBOL_STR(rtl92c_set_fw_pwrmode_cmd) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x2921a4d4, __VMLINUX_SYMBOL_STR(rtl_btc_status_false) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xbcc5ff3f, __VMLINUX_SYMBOL_STR(_rtl92c_phy_fw_rf_serial_write) },
	{ 0x56ecc71e, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0xdd1fd162, __VMLINUX_SYMBOL_STR(rtl_pci_suspend) },
	{ 0xdffd39e, __VMLINUX_SYMBOL_STR(rtlwifi_rate_mapping) },
	{ 0x5386deee, __VMLINUX_SYMBOL_STR(rtl92c_set_fw_joinbss_report_cmd) },
	{ 0xc16a47ab, __VMLINUX_SYMBOL_STR(rtl92c_download_fw) },
	{ 0x2fc703c8, __VMLINUX_SYMBOL_STR(rtl_pci_disconnect) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x9d3ef817, __VMLINUX_SYMBOL_STR(rtl_rfreg_delay) },
	{ 0x70e8f63c, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_io_cmd) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xff0deec7, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2f686720, __VMLINUX_SYMBOL_STR(rtl_cam_mark_invalid) },
	{ 0x858f07a, __VMLINUX_SYMBOL_STR(rtl92c_phy_rf_config) },
	{ 0xe0760c66, __VMLINUX_SYMBOL_STR(rtl_cam_del_entry) },
	{ 0x2dd1188b, __VMLINUX_SYMBOL_STR(rtl92c_set_p2p_ps_offload_cmd) },
	{ 0x25c20d5, __VMLINUX_SYMBOL_STR(rtl_cam_empty_entry) },
	{ 0xae6db2fa, __VMLINUX_SYMBOL_STR(rtl92ce_phy_set_rf_on) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xd9c2b5f8, __VMLINUX_SYMBOL_STR(rtl92c_phy_query_bb_reg) },
	{ 0x7d38cc16, __VMLINUX_SYMBOL_STR(_rtl92c_store_pwrIndex_diffrate_offset) },
	{ 0xccca7ecb, __VMLINUX_SYMBOL_STR(rtl_cam_reset_all_entry) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xecd10e38, __VMLINUX_SYMBOL_STR(rtl_process_phyinfo) },
	{ 0x8bcba0be, __VMLINUX_SYMBOL_STR(efuse_read_1byte) },
	{ 0x95388ca9, __VMLINUX_SYMBOL_STR(_rtl92c_phy_bb8192c_config_parafile) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xd8388f21, __VMLINUX_SYMBOL_STR(rtl92c_fill_h2c_cmd) },
	{ 0x75956d05, __VMLINUX_SYMBOL_STR(rtl92c_phy_sw_chnl) },
	{ 0x980848e2, __VMLINUX_SYMBOL_STR(rtl_addr_delay) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtlwifi,rtl_pci,rtl8192c-common,mac80211";

MODULE_ALIAS("pci:v000010ECd00008191sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008178sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008177sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00008176sv*sd*bc*sc*i*");
