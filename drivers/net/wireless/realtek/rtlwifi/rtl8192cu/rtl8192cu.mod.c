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
	{ 0xdd151676, __VMLINUX_SYMBOL_STR(ieee80211_rx_napi) },
	{ 0x271983da, __VMLINUX_SYMBOL_STR(rtl_cam_delete_one_entry) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xfc9d8c22, __VMLINUX_SYMBOL_STR(rtl_fw_cb) },
	{ 0x70c11624, __VMLINUX_SYMBOL_STR(rtl_cam_get_free_entry) },
	{ 0xd9b23b43, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_rfpath_switch) },
	{ 0x4b1bf611, __VMLINUX_SYMBOL_STR(rtl_usb_disconnect) },
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
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb32f06fa, __VMLINUX_SYMBOL_STR(rtl_cam_add_one_entry) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xde4ca73a, __VMLINUX_SYMBOL_STR(rtl_phy_scan_operation_backup) },
	{ 0x8bec7ff6, __VMLINUX_SYMBOL_STR(rtl92c_dm_init_edca_turbo) },
	{ 0x1d7fc65d, __VMLINUX_SYMBOL_STR(rtl92c_phy_iq_calibrate) },
	{ 0x5bcdff7d, __VMLINUX_SYMBOL_STR(rtl92c_dm_init) },
	{ 0x94d6bfcd, __VMLINUX_SYMBOL_STR(rtl_usb_probe) },
	{ 0xce121ee3, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_bb_reg) },
	{ 0xa461b360, __VMLINUX_SYMBOL_STR(rtl_ps_enable_nic) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc5b1bf9d, __VMLINUX_SYMBOL_STR(rtl92c_dm_rf_saving) },
	{ 0x283831c6, __VMLINUX_SYMBOL_STR(rtl92c_set_fw_pwrmode_cmd) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4a7a7719, __VMLINUX_SYMBOL_STR(dm_writepowerindex) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xbcc5ff3f, __VMLINUX_SYMBOL_STR(_rtl92c_phy_fw_rf_serial_write) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x7006f6ac, __VMLINUX_SYMBOL_STR(_rtl92c_phy_set_rf_sleep) },
	{ 0x56ecc71e, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0xdffd39e, __VMLINUX_SYMBOL_STR(rtlwifi_rate_mapping) },
	{ 0x5386deee, __VMLINUX_SYMBOL_STR(rtl92c_set_fw_joinbss_report_cmd) },
	{ 0xc16a47ab, __VMLINUX_SYMBOL_STR(rtl92c_download_fw) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x9d3ef817, __VMLINUX_SYMBOL_STR(rtl_rfreg_delay) },
	{ 0x70e8f63c, __VMLINUX_SYMBOL_STR(rtl92c_phy_set_io_cmd) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xff0deec7, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2f686720, __VMLINUX_SYMBOL_STR(rtl_cam_mark_invalid) },
	{ 0x858f07a, __VMLINUX_SYMBOL_STR(rtl92c_phy_rf_config) },
	{ 0xe0760c66, __VMLINUX_SYMBOL_STR(rtl_cam_del_entry) },
	{ 0x25c20d5, __VMLINUX_SYMBOL_STR(rtl_cam_empty_entry) },
	{ 0xae6db2fa, __VMLINUX_SYMBOL_STR(rtl92ce_phy_set_rf_on) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xd9c2b5f8, __VMLINUX_SYMBOL_STR(rtl92c_phy_query_bb_reg) },
	{ 0x7d38cc16, __VMLINUX_SYMBOL_STR(_rtl92c_store_pwrIndex_diffrate_offset) },
	{ 0x685393bf, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xccca7ecb, __VMLINUX_SYMBOL_STR(rtl_cam_reset_all_entry) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xecd10e38, __VMLINUX_SYMBOL_STR(rtl_process_phyinfo) },
	{ 0x45f7c055, __VMLINUX_SYMBOL_STR(dm_restorepowerindex) },
	{ 0x8bcba0be, __VMLINUX_SYMBOL_STR(efuse_read_1byte) },
	{ 0x95388ca9, __VMLINUX_SYMBOL_STR(_rtl92c_phy_bb8192c_config_parafile) },
	{ 0xd8388f21, __VMLINUX_SYMBOL_STR(rtl92c_fill_h2c_cmd) },
	{ 0x75956d05, __VMLINUX_SYMBOL_STR(rtl92c_phy_sw_chnl) },
	{ 0x980848e2, __VMLINUX_SYMBOL_STR(rtl_addr_delay) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,rtlwifi,rtl8192c-common,rtl_usb,usbcore";

MODULE_ALIAS("usb:v0BDAp8191d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp018Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8176d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8177d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp818Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp819Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8754d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp817Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp11F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8188d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8189d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17BAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp5088d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p005Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0077d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4856p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v103Cp1629d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3357d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p4902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p648Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3358d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3359d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0090d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4855p0091d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9846p9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp317Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFF8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pAFFCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p1201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp2103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p341Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p8178d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846pF001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17ABd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8186d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p330Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p624Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7822d*dc*dsc*dp*ic*isc*ip*in*");
