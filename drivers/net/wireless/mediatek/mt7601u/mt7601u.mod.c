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
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x80f9913a, __VMLINUX_SYMBOL_STR(perf_tp_event) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xb38cc013, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xa56e18e4, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x3386efc1, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x58dc7e35, __VMLINUX_SYMBOL_STR(debugfs_create_u8) },
	{ 0xe04bf35c, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xb97785f1, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xd1f0e208, __VMLINUX_SYMBOL_STR(node_data) },
	{ 0x57000eee, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x6a3f5477, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x9732b201, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8bec995b, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0x16c745d, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x8e9ddd80, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x5a2d104c, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xfbdf7c1, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x10e5903f, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0x762dada, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0x5433b3c5, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe5bfd18, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0x45bd495e, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x91e801e8, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x162d05fc, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0xa3d3806b, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xd7ee3a56, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0x9884ed36, __VMLINUX_SYMBOL_STR(usb_poison_urb) },
	{ 0xb8bb9b8e, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x5c97b352, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x899a0bf4, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x519b3309, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xe1b60dea, __VMLINUX_SYMBOL_STR(devm_kmemdup) },
	{ 0x1c4f77a1, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x7260e249, __VMLINUX_SYMBOL_STR(___preempt_schedule_notrace) },
	{ 0x23af3579, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x84e80a1e, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x79df5377, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x618911fc, __VMLINUX_SYMBOL_STR(numa_node) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x737db3b0, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xe5df83fe, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5e2e7e20, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xfe632894, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xa86168ff, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xc0cd3b13, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xf2c453cc, __VMLINUX_SYMBOL_STR(ieee80211_send_bar) },
	{ 0xc21d019, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0x83a9728a, __VMLINUX_SYMBOL_STR(ieee80211_get_tx_rates) },
	{ 0x860012ca, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0xbd47afad, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8be6d007, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0xe388ece7, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0x5b3779f, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0x63f79984, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x723b74aa, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe1096f6a, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x3fd036ea, __VMLINUX_SYMBOL_STR(skb_add_rx_frag) },
	{ 0x42bb8d80, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xcf14c2f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x6b8f0b35, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xaa973d1a, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x11caddc7, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xc3f61831, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x9b783096, __VMLINUX_SYMBOL_STR(ieee80211_tx_status_noskb) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xd70a2bf5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x82df4c21, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0x173ad2ac, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x900867d6, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0xb01e5748, __VMLINUX_SYMBOL_STR(simple_attr_write) },
	{ 0x25a4dd41, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211,usbcore";

MODULE_ALIAS("usb:v0B05p17D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3431d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3434d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp7601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2717p4106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2955p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2A5Fp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7710d*dc*dsc*dp*ic*isc*ip*in*");
