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
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xe41139cd, __VMLINUX_SYMBOL_STR(ar9003_paprd_is_done) },
	{ 0xc0660c33, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0x4567cdb3, __VMLINUX_SYMBOL_STR(ieee80211_csa_finish) },
	{ 0xde9c1db1, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5c912edc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xc7af31ae, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0x5fd0b3e8, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xbe3afb2f, __VMLINUX_SYMBOL_STR(devm_ioremap_nocache) },
	{ 0xb7231ac2, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_output) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xa56e18e4, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xab83fe79, __VMLINUX_SYMBOL_STR(ar9003_mci_send_wlan_channels) },
	{ 0x597e7731, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x58dc7e35, __VMLINUX_SYMBOL_STR(debugfs_create_u8) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xe4b3e049, __VMLINUX_SYMBOL_STR(ath9k_hw_setantenna) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xdb9ce727, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0x93907f73, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0x3d7e575e, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0xe0677c6, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rate) },
	{ 0x7ed41a18, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0xb411b484, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x935f77ce, __VMLINUX_SYMBOL_STR(ieee80211_csa_is_complete) },
	{ 0xffd02408, __VMLINUX_SYMBOL_STR(ath9k_hw_get_tsf_offset) },
	{ 0x627c1b63, __VMLINUX_SYMBOL_STR(ath9k_hw_numtxpending) },
	{ 0xfea3f839, __VMLINUX_SYMBOL_STR(ar9003_paprd_setup_gain_table) },
	{ 0xdb872c48, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0xe22ce1da, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0xff291e0c, __VMLINUX_SYMBOL_STR(ath9k_hw_set_interrupts) },
	{ 0x86d689de, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0x80285997, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0x57000eee, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xe5257172, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_mci) },
	{ 0xefc56354, __VMLINUX_SYMBOL_STR(cfg80211_chandef_create) },
	{ 0x324684a5, __VMLINUX_SYMBOL_STR(ar9003_paprd_enable) },
	{ 0x1f3e9dec, __VMLINUX_SYMBOL_STR(ath9k_hw_getchan_noise) },
	{ 0x1c736cae, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0xed0b0e7b, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0xf32ceab0, __VMLINUX_SYMBOL_STR(ath9k_hw_computetxtime) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x86a9d439, __VMLINUX_SYMBOL_STR(ath9k_hw_disable_interrupts) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xd8e000d1, __VMLINUX_SYMBOL_STR(ath9k_hw_bstuck_nfcal) },
	{ 0xe5a48c78, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0xa3b4e0b5, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x3f9d75aa, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x4539627c, __VMLINUX_SYMBOL_STR(ath9k_hw_gettxbuf) },
	{ 0x4a3b4985, __VMLINUX_SYMBOL_STR(dfs_pattern_detector_init) },
	{ 0x9732b201, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xd8b2955b, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x49b89672, __VMLINUX_SYMBOL_STR(ath9k_hw_wow_apply_pattern) },
	{ 0xfc9060ac, __VMLINUX_SYMBOL_STR(pcie_capability_clear_and_set_word) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf3f81c67, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xb616c46e, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0x617d24c, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0x8cb3929b, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0xa7d3b466, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0x87bc030e, __VMLINUX_SYMBOL_STR(ath9k_cmn_spectral_init_debug) },
	{ 0x16c745d, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x849a36e2, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x2f67f4a, __VMLINUX_SYMBOL_STR(ath9k_cmn_reload_chainmask) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2fa61839, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_gpio_input) },
	{ 0x1f655cbf, __VMLINUX_SYMBOL_STR(ath9k_hw_kill_interrupts) },
	{ 0xcdf681f5, __VMLINUX_SYMBOL_STR(ath9k_cmn_spectral_deinit_debug) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xcb32065c, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_channels_rates) },
	{ 0x82f24703, __VMLINUX_SYMBOL_STR(ath9k_hw_request_gpio) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xfbdf7c1, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x762dada, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0x5433b3c5, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0x527f1df4, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0x6bdf146d, __VMLINUX_SYMBOL_STR(ath9k_hw_wow_wakeup) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xd03fc0a4, __VMLINUX_SYMBOL_STR(ath9k_hw_process_rxdesc_edma) },
	{ 0x95ed976a, __VMLINUX_SYMBOL_STR(ar9003_paprd_populate_single_table) },
	{ 0xe5bfd18, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0xe89cdad3, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xc12ce89c, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xfc144f3b, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0xd24e729, __VMLINUX_SYMBOL_STR(ath_gen_timer_isr) },
	{ 0xbd32536a, __VMLINUX_SYMBOL_STR(ath9k_hw_rxprocdesc) },
	{ 0x56c84998, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb661764b, __VMLINUX_SYMBOL_STR(ath_cmn_process_fft) },
	{ 0x70c7b78e, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37e9ab69, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_2wire) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x91e801e8, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x162d05fc, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x8ccc9eb4, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0xbfd8a5ca, __VMLINUX_SYMBOL_STR(ar9003_hw_bb_watchdog_dbg_info) },
	{ 0xc1614821, __VMLINUX_SYMBOL_STR(ar9003_paprd_create_curve) },
	{ 0xb83ef566, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0xc692c4e6, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_ap) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xa3d3806b, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0x2d15177d, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_stat_rx) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xd2abf8a9, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0x3441ca45, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0xc18b8387, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0x593fcc92, __VMLINUX_SYMBOL_STR(ath_is_mybeacon) },
	{ 0xc04d9650, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_adhoc) },
	{ 0x34670cbe, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rssi) },
	{ 0xaafdb617, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0xf3ef810f, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_base_eeprom) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xedaa19a7, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xde936f07, __VMLINUX_SYMBOL_STR(ath9k_hw_addrxbuf_edma) },
	{ 0x7267942f, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xa32b8871, __VMLINUX_SYMBOL_STR(ieee80211_find_sta_by_ifaddr) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x10c8f8fd, __VMLINUX_SYMBOL_STR(ath9k_hw_setup_statusring) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xc1bb8ec9, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_recv) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x7fe11ad1, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x84ac7241, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x48271981, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0x8b2c5df7, __VMLINUX_SYMBOL_STR(debugfs_create_bool) },
	{ 0x56ecc71e, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x9df36fa1, __VMLINUX_SYMBOL_STR(ar9003_mci_get_next_gpm_offset) },
	{ 0xaa271187, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0x1c4f77a1, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x270e8dd, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xec9044fa, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0xbf0a0361, __VMLINUX_SYMBOL_STR(ath9k_hw_puttxbuf) },
	{ 0x86103150, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xebbec86e, __VMLINUX_SYMBOL_STR(ar9003_mci_state) },
	{ 0xcce64129, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_scheme) },
	{ 0xdbcebd28, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0x94c5b4a3, __VMLINUX_SYMBOL_STR(ath9k_hw_wow_enable) },
	{ 0x23af3579, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0x6a3b4dce, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_phy_err) },
	{ 0xa8974551, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x71e08482, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0xdc121af7, __VMLINUX_SYMBOL_STR(ath9k_cmn_spectral_scan_trigger) },
	{ 0x3dfce53f, __VMLINUX_SYMBOL_STR(ath9k_hw_abortpcurecv) },
	{ 0xdd434792, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xcd265af1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xd5b3e777, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0x83e34a9f, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tx_filter) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xb8d78ff8, __VMLINUX_SYMBOL_STR(debugfs_create_devm_seqfile) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x496efec3, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x12bee8c1, __VMLINUX_SYMBOL_STR(ieee80211_sta_set_buffered) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xb61f9c7e, __VMLINUX_SYMBOL_STR(ar9003_mci_get_interrupt) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x4234351c, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0xf2c453cc, __VMLINUX_SYMBOL_STR(ieee80211_send_bar) },
	{ 0x2a69d166, __VMLINUX_SYMBOL_STR(ath9k_hw_updatetxtriglevel) },
	{ 0x515af041, __VMLINUX_SYMBOL_STR(ath_hw_cycle_counters_update) },
	{ 0xe980a52d, __VMLINUX_SYMBOL_STR(ar9003_mci_set_bt_version) },
	{ 0xa936c19b, __VMLINUX_SYMBOL_STR(ath9k_hw_set_rx_bufsize) },
	{ 0x83a9728a, __VMLINUX_SYMBOL_STR(ieee80211_get_tx_rates) },
	{ 0xe1f35ed9, __VMLINUX_SYMBOL_STR(ar9003_is_paprd_enabled) },
	{ 0xf8fc412e, __VMLINUX_SYMBOL_STR(ar9003_get_pll_sqsum_dvc) },
	{ 0x8d92a89c, __VMLINUX_SYMBOL_STR(ar9003_mci_send_message) },
	{ 0xd6ba743e, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0x52404804, __VMLINUX_SYMBOL_STR(ar9003_mci_cleanup) },
	{ 0xbd47afad, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x8eaaaa78, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x5f829974, __VMLINUX_SYMBOL_STR(ath9k_hw_txstart) },
	{ 0x2f2cd29a, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0x9dbfeb3a, __VMLINUX_SYMBOL_STR(ath9k_hw_check_alive) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x642b19cc, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_sta) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x692cdc10, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_concur_txprio) },
	{ 0x44da4be1, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8be6d007, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0x342057e9, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_skb_postprocess) },
	{ 0x6a2bd468, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xcf313772, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0x930e1ece, __VMLINUX_SYMBOL_STR(ar9003_mci_setup) },
	{ 0x1c2d45e0, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0xc932e0af, __VMLINUX_SYMBOL_STR(ieee80211_sta_eosp) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xae363b4e, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0xe8109543, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xdb02a8c6, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x63f79984, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x19d5aec8, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x447d8362, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x97ec449f, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd75e26f4, __VMLINUX_SYMBOL_STR(ath9k_hw_check_nav) },
	{ 0x633aadb1, __VMLINUX_SYMBOL_STR(ath9k_hw_putrxbuf) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x2883c000, __VMLINUX_SYMBOL_STR(ath_rxbuf_alloc) },
	{ 0xf55e8ee6, __VMLINUX_SYMBOL_STR(ar9003_paprd_init_table) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x9a45e4d7, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0xdbfed936, __VMLINUX_SYMBOL_STR(ath9k_hw_setuprxdesc) },
	{ 0x3f641641, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x269ea0ea, __VMLINUX_SYMBOL_STR(ath9k_hw_abort_tx_dma) },
	{ 0xc5fb01a, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0x6b8f0b35, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x507dd975, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_accept) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xc1c5fc43, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x939080cc, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xdcf1a4f7, __VMLINUX_SYMBOL_STR(ar9003_hw_bb_watchdog_check) },
	{ 0xc1ba52ad, __VMLINUX_SYMBOL_STR(ath9k_hw_enable_interrupts) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xdeea2a5b, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_modal_eeprom) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x2b4a9ac6, __VMLINUX_SYMBOL_STR(ath9k_hw_intrpend) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xbb8f809f, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0x173ad2ac, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x900867d6, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xed57becd, __VMLINUX_SYMBOL_STR(pcie_capability_read_word) },
	{ 0x7f6df4a7, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x19fa509d, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0x33128c60, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txpowerlimit) },
	{ 0xae025011, __VMLINUX_SYMBOL_STR(ath9k_hw_stop_dma_queue) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,ath9k_hw,ath9k_common,led-class,cfg80211,ath";

MODULE_ALIAS("platform:ath9k");
MODULE_ALIAS("platform:ar933x_wmac");
MODULE_ALIAS("platform:ar934x_wmac");
MODULE_ALIAS("platform:qca955x_wmac");
MODULE_ALIAS("platform:qca953x_wmac");
MODULE_ALIAS("platform:qca956x_wmac");
MODULE_ALIAS("pci:v0000168Cd00000023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000027sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000029sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv00001A3Bsd00001C71bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv0000105Bsd0000E01Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000011ADsd00006632bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000011ADsd00006642bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv00001A32sd00000306bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv0000185Fsd0000309Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd0000147Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd0000147Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd00001536bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Bsv00001A3Bsd00002C37bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv00001A56sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv00001A56sd00002001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002086bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001237bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002126bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd0000126Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002152bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E075bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000168Csd00003119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000168Csd00003122bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000185Fsd00003119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000185Fsd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd00004105bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd00004106bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C706bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C680bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C708bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000017AAsd00003218bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000017AAsd00003219bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002C97bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002100bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001C56sd00004001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000011ADsd00006627bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000011ADsd00006628bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E04Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E04Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Fsd00007197bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00002001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001186bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001F86bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001195bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001F95bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00001C00bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00001C01bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001043sd0000850Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000033sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001A3Bsd00002116bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006661bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv0000168Csd00003117bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000017AAsd00003214bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001969sd00000091bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001A3Bsd00002110bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001043sd0000850Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006631bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006641bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv0000103Csd00001864bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000014CDsd00000063bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000014CDsd00000064bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000010CFsd00001783bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv00001A56sd00002003bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000037sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003028bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002176bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E068bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd0000A119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000632bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd000006B2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000842bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00001842bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00006671bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002811bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002812bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A1bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A3bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000218Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002F8Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003025bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd0000302Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E069bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd00003028bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000622bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000672bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000662bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd000006A2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000682bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000213Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000213Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd000018E3bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd0000217Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd00002005bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001028sd0000020Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd00004129bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000412Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd0000302Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000642bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000652bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000612bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000832bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00001832bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000692bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000803bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000813bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002130bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000213Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002182bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000218Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000218Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002F82bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Fsd00007202bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002810bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002813bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A4bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd0000A120bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E07Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E08Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E081bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E091bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E099bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000017AAsd00003026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000017AAsd00004026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001043sd000085F2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001028sd0000020Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv*sd*bc*sc*i*");
