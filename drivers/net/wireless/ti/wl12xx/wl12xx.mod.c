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
	{ 0xe2b2fba7, __VMLINUX_SYMBOL_STR(wlcore_boot_upload_nvs) },
	{ 0x53dff67d, __VMLINUX_SYMBOL_STR(wl12xx_debug_level) },
	{ 0xc825b9e1, __VMLINUX_SYMBOL_STR(wlcore_set_key) },
	{ 0xc4522c1c, __VMLINUX_SYMBOL_STR(wl1271_acx_init_mem_config) },
	{ 0xb38cc013, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xa56e18e4, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x96c9e7a9, __VMLINUX_SYMBOL_STR(wlcore_event_beacon_loss) },
	{ 0xd7a2e54a, __VMLINUX_SYMBOL_STR(wlcore_event_dummy_packet) },
	{ 0x249e987d, __VMLINUX_SYMBOL_STR(wlcore_event_inactive_sta) },
	{ 0x563af7ce, __VMLINUX_SYMBOL_STR(wlcore_event_ba_rx_constraint) },
	{ 0x44dab4b6, __VMLINUX_SYMBOL_STR(wl1271_acx_pm_config) },
	{ 0xf1d12643, __VMLINUX_SYMBOL_STR(wlcore_calc_packet_alignment) },
	{ 0xa2f0ecf3, __VMLINUX_SYMBOL_STR(wlcore_event_rssi_trigger) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x53f116ef, __VMLINUX_SYMBOL_STR(wlcore_cmd_wait_for_event_or_timeout) },
	{ 0xecdd83b8, __VMLINUX_SYMBOL_STR(wlcore_probe) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x17cbf0ce, __VMLINUX_SYMBOL_STR(wlcore_alloc_hw) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x16c745d, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xe345cc70, __VMLINUX_SYMBOL_STR(wl1271_acx_set_ht_capabilities) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1e366ccf, __VMLINUX_SYMBOL_STR(wl1271_cmd_configure) },
	{ 0xbb1e4046, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x9d22063a, __VMLINUX_SYMBOL_STR(wl1271_cmd_data_path) },
	{ 0x83a609e5, __VMLINUX_SYMBOL_STR(wl12xx_acx_mem_cfg) },
	{ 0xdb3bcca6, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x143bb294, __VMLINUX_SYMBOL_STR(wlcore_event_sched_scan_completed) },
	{ 0x107a6007, __VMLINUX_SYMBOL_STR(wlcore_boot_upload_firmware) },
	{ 0xb8a564f1, __VMLINUX_SYMBOL_STR(wl1271_acx_sleep_auth) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x559cb442, __VMLINUX_SYMBOL_STR(wlcore_set_partition) },
	{ 0xec2600fc, __VMLINUX_SYMBOL_STR(wlcore_enable_interrupts) },
	{ 0xa427acab, __VMLINUX_SYMBOL_STR(wl1271_cmd_test) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x84ac7241, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x1c4f77a1, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xb16fe1d3, __VMLINUX_SYMBOL_STR(wlcore_event_channel_switch) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x99e94305, __VMLINUX_SYMBOL_STR(wlcore_disable_interrupts) },
	{ 0x480396ac, __VMLINUX_SYMBOL_STR(wlcore_remove) },
	{ 0x13825bd1, __VMLINUX_SYMBOL_STR(wlcore_event_max_tx_failure) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6736593b, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_results) },
	{ 0x5efd68d9, __VMLINUX_SYMBOL_STR(wlcore_event_soft_gemini_sense) },
	{ 0x5b36e4c, __VMLINUX_SYMBOL_STR(wlcore_free_hw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x27acb84, __VMLINUX_SYMBOL_STR(wlcore_tx_complete) },
	{ 0xb805a0fa, __VMLINUX_SYMBOL_STR(wl1271_format_buffer) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x729f5a54, __VMLINUX_SYMBOL_STR(wl1271_debugfs_update_stats) },
	{ 0xc889e32d, __VMLINUX_SYMBOL_STR(wlcore_set_scan_chan_params) },
	{ 0x952b189c, __VMLINUX_SYMBOL_STR(wlcore_boot_run_firmware) },
	{ 0x2928848, __VMLINUX_SYMBOL_STR(wlcore_translate_addr) },
	{ 0x18919e20, __VMLINUX_SYMBOL_STR(wlcore_scan_sched_scan_ssid_list) },
	{ 0x2b9ebf6c, __VMLINUX_SYMBOL_STR(wlcore_event_roc_complete) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xa5db87c8, __VMLINUX_SYMBOL_STR(wl1271_cmd_send) },
	{ 0x9e616ceb, __VMLINUX_SYMBOL_STR(wl1271_tx_min_rate_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wlcore,mac80211";

MODULE_ALIAS("platform:wl12xx");
