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
	{ 0x6a86e34f, __VMLINUX_SYMBOL_STR(wl12xx_cmd_build_probe_req) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd312e74f, __VMLINUX_SYMBOL_STR(wl1271_ps_elp_wakeup) },
	{ 0x53dff67d, __VMLINUX_SYMBOL_STR(wl12xx_debug_level) },
	{ 0xc825b9e1, __VMLINUX_SYMBOL_STR(wlcore_set_key) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xb38cc013, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xa56e18e4, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x96c9e7a9, __VMLINUX_SYMBOL_STR(wlcore_event_beacon_loss) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xd7a2e54a, __VMLINUX_SYMBOL_STR(wlcore_event_dummy_packet) },
	{ 0x249e987d, __VMLINUX_SYMBOL_STR(wlcore_event_inactive_sta) },
	{ 0x563af7ce, __VMLINUX_SYMBOL_STR(wlcore_event_ba_rx_constraint) },
	{ 0xf3a642d9, __VMLINUX_SYMBOL_STR(ieee80211_radar_detected) },
	{ 0x5f3ed300, __VMLINUX_SYMBOL_STR(wlcore_event_fw_logger) },
	{ 0xa2f0ecf3, __VMLINUX_SYMBOL_STR(wlcore_event_rssi_trigger) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0x53f116ef, __VMLINUX_SYMBOL_STR(wlcore_cmd_wait_for_event_or_timeout) },
	{ 0xecdd83b8, __VMLINUX_SYMBOL_STR(wlcore_probe) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x17cbf0ce, __VMLINUX_SYMBOL_STR(wlcore_alloc_hw) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x16c745d, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x77092dcc, __VMLINUX_SYMBOL_STR(wlcore_get_native_channel_type) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x1e366ccf, __VMLINUX_SYMBOL_STR(wl1271_cmd_configure) },
	{ 0xbb1e4046, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xdb3bcca6, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x70c7b78e, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x143bb294, __VMLINUX_SYMBOL_STR(wlcore_event_sched_scan_completed) },
	{ 0x107a6007, __VMLINUX_SYMBOL_STR(wlcore_boot_upload_firmware) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x559cb442, __VMLINUX_SYMBOL_STR(wlcore_set_partition) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xec2600fc, __VMLINUX_SYMBOL_STR(wlcore_enable_interrupts) },
	{ 0xd138423f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x95ef036, __VMLINUX_SYMBOL_STR(wl1271_ps_elp_sleep) },
	{ 0xe60aab89, __VMLINUX_SYMBOL_STR(irq_get_irq_data) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x84ac7241, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x1c4f77a1, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0xba650b26, __VMLINUX_SYMBOL_STR(__cfg80211_send_event_skb) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x274cb35c, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x8a6af65c, __VMLINUX_SYMBOL_STR(kstrtoul_from_user) },
	{ 0xb16fe1d3, __VMLINUX_SYMBOL_STR(wlcore_event_channel_switch) },
	{ 0x59fd5d24, __VMLINUX_SYMBOL_STR(__cfg80211_alloc_event_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x99e94305, __VMLINUX_SYMBOL_STR(wlcore_disable_interrupts) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x480396ac, __VMLINUX_SYMBOL_STR(wlcore_remove) },
	{ 0x369e1115, __VMLINUX_SYMBOL_STR(kstrtou8_from_user) },
	{ 0x13825bd1, __VMLINUX_SYMBOL_STR(wlcore_event_max_tx_failure) },
	{ 0xfca178cc, __VMLINUX_SYMBOL_STR(wl1271_free_tx_id) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6736593b, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_results) },
	{ 0x5b3779f, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0x5b36e4c, __VMLINUX_SYMBOL_STR(wlcore_free_hw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb805a0fa, __VMLINUX_SYMBOL_STR(wl1271_format_buffer) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x729f5a54, __VMLINUX_SYMBOL_STR(wl1271_debugfs_update_stats) },
	{ 0xc889e32d, __VMLINUX_SYMBOL_STR(wlcore_set_scan_chan_params) },
	{ 0xcf14c2f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x952b189c, __VMLINUX_SYMBOL_STR(wlcore_boot_run_firmware) },
	{ 0x2928848, __VMLINUX_SYMBOL_STR(wlcore_translate_addr) },
	{ 0x18919e20, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_ssid_list) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x2b9ebf6c, __VMLINUX_SYMBOL_STR(wlcore_event_roc_complete) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x5ae47966, __VMLINUX_SYMBOL_STR(wl12xx_is_dummy_packet) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xa5db87c8, __VMLINUX_SYMBOL_STR(wl1271_cmd_send) },
	{ 0x173ad2ac, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xc0366cef, __VMLINUX_SYMBOL_STR(ieee80211_connection_loss) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wlcore,mac80211,cfg80211";

MODULE_ALIAS("platform:wl18xx");
