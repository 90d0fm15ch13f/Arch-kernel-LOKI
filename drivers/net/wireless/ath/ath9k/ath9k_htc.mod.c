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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xc0660c33, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0x4567cdb3, __VMLINUX_SYMBOL_STR(ieee80211_csa_finish) },
	{ 0xde9c1db1, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc7af31ae, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0x5fd0b3e8, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0xb7231ac2, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_output) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x8e24fc22, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0xdb9ce727, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0x93907f73, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0x3d7e575e, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0xe0677c6, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rate) },
	{ 0x7ed41a18, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x935f77ce, __VMLINUX_SYMBOL_STR(ieee80211_csa_is_complete) },
	{ 0xdb872c48, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0xe22ce1da, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0x86d689de, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0x80285997, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0x1c736cae, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0xed0b0e7b, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xe5a48c78, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0xa3b4e0b5, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0x3f9d75aa, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x6a3f5477, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x9732b201, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xd8b2955b, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf3f81c67, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0xb616c46e, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0x617d24c, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0x8cb3929b, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0xa7d3b466, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0x849a36e2, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x2f67f4a, __VMLINUX_SYMBOL_STR(ath9k_cmn_reload_chainmask) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xcb32065c, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_channels_rates) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xfbdf7c1, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0xcc94721e, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x8a0b12c6, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x2b8f30c7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x5433b3c5, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0x527f1df4, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe89cdad3, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xc12ce89c, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xfc144f3b, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0x56c84998, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0xb661764b, __VMLINUX_SYMBOL_STR(ath_cmn_process_fft) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x91e801e8, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8ccc9eb4, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0xb83ef566, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0xc692c4e6, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_ap) },
	{ 0xa3d3806b, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xd2abf8a9, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0x3441ca45, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0xc18b8387, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0x593fcc92, __VMLINUX_SYMBOL_STR(ath_is_mybeacon) },
	{ 0xc04d9650, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_adhoc) },
	{ 0x5c97b352, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x34670cbe, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rssi) },
	{ 0xaafdb617, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x48271981, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0x56ecc71e, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0xaa271187, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0x1c4f77a1, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0xec9044fa, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0x86103150, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xdbcebd28, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0x23af3579, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0x274cb35c, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xa8974551, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x84e80a1e, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x71e08482, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0xdc121af7, __VMLINUX_SYMBOL_STR(ath9k_cmn_spectral_scan_trigger) },
	{ 0xdd434792, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x737db3b0, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x4395953e, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0xd5b3e777, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x496efec3, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0xfe632894, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xa86168ff, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x4234351c, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0xff0deec7, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0xd6ba743e, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0xb5a9210, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0x8eaaaa78, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2f2cd29a, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0x642b19cc, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_sta) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x44da4be1, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x342057e9, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_skb_postprocess) },
	{ 0x6a2bd468, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0xcf313772, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0x5b3779f, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0x1c2d45e0, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0xae363b4e, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0x63f79984, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0xdb02a8c6, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x19d5aec8, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x447d8362, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x97ec449f, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0xa0644f8e, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_session) },
	{ 0x9a45e4d7, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0x3f641641, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xcf14c2f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xc5fb01a, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0x6b8f0b35, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x507dd975, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_accept) },
	{ 0x685393bf, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xdd59af8a, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xc1c5fc43, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0x939080cc, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xbb8f809f, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0xd70a2bf5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x173ad2ac, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x900867d6, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0xd3c75e80, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x25a4dd41, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,ath9k_hw,ath9k_common,led-class,ath,cfg80211,usbcore";

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p209Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");
