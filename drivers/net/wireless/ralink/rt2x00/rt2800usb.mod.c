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
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x41136b6e, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0x697a47c2, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0x29e23ad, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0x761fddcb, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0x13af8a89, __VMLINUX_SYMBOL_STR(rt2800_get_survey) },
	{ 0x476b05c7, __VMLINUX_SYMBOL_STR(rt2800_ampdu_action) },
	{ 0x667574ec, __VMLINUX_SYMBOL_STR(rt2800_get_tsf) },
	{ 0x3853fb9, __VMLINUX_SYMBOL_STR(rt2800_conf_tx) },
	{ 0x7a6ede34, __VMLINUX_SYMBOL_STR(rt2x00mac_sta_remove) },
	{ 0xbb643651, __VMLINUX_SYMBOL_STR(rt2x00mac_sta_add) },
	{ 0xe408d68d, __VMLINUX_SYMBOL_STR(rt2800_set_rts_threshold) },
	{ 0xf757279d, __VMLINUX_SYMBOL_STR(rt2800_get_key_seq) },
	{ 0x9a525d40, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0xd70f0d6f, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0x8e995bc8, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0x6446f4cf, __VMLINUX_SYMBOL_STR(rt2x00mac_set_key) },
	{ 0x34e6753, __VMLINUX_SYMBOL_STR(rt2x00mac_set_tim) },
	{ 0x5c85cc58, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0xa3cfddae, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0xa9bc1b81, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0x7d4786db, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0xced9b0a6, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x20f7465b, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0x4c7948d1, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0x67c1b3a, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0xe2c622ee, __VMLINUX_SYMBOL_STR(rt2x00usb_regbusy_read) },
	{ 0x91a680b9, __VMLINUX_SYMBOL_STR(rt2800_sta_remove) },
	{ 0x8ea6698, __VMLINUX_SYMBOL_STR(rt2800_sta_add) },
	{ 0x52ce5541, __VMLINUX_SYMBOL_STR(rt2800_config) },
	{ 0x6f48cb3a, __VMLINUX_SYMBOL_STR(rt2800_config_ant) },
	{ 0x85442493, __VMLINUX_SYMBOL_STR(rt2800_config_erp) },
	{ 0x62669c93, __VMLINUX_SYMBOL_STR(rt2800_config_intf) },
	{ 0xad72f9a6, __VMLINUX_SYMBOL_STR(rt2800_config_filter) },
	{ 0x71b52258, __VMLINUX_SYMBOL_STR(rt2800_config_pairwise_key) },
	{ 0x8001b166, __VMLINUX_SYMBOL_STR(rt2800_config_shared_key) },
	{ 0xe9fa7e82, __VMLINUX_SYMBOL_STR(rt2800_clear_beacon) },
	{ 0xdb0f1b7e, __VMLINUX_SYMBOL_STR(rt2800_write_beacon) },
	{ 0x595c12f9, __VMLINUX_SYMBOL_STR(rt2800_write_tx_data) },
	{ 0x3e77f770, __VMLINUX_SYMBOL_STR(rt2x00usb_flush_queue) },
	{ 0x59df3f63, __VMLINUX_SYMBOL_STR(rt2x00usb_kick_queue) },
	{ 0x89c19011, __VMLINUX_SYMBOL_STR(rt2800_vco_calibration) },
	{ 0xbe975b90, __VMLINUX_SYMBOL_STR(rt2800_gain_calibration) },
	{ 0x9b608d4a, __VMLINUX_SYMBOL_STR(rt2800_link_tuner) },
	{ 0xcb1703f8, __VMLINUX_SYMBOL_STR(rt2800_reset_tuner) },
	{ 0x18c681d8, __VMLINUX_SYMBOL_STR(rt2800_link_stats) },
	{ 0x71a592e3, __VMLINUX_SYMBOL_STR(rt2800_rfkill_poll) },
	{ 0x388ff476, __VMLINUX_SYMBOL_STR(rt2x00usb_clear_entry) },
	{ 0x68f27c97, __VMLINUX_SYMBOL_STR(rt2x00usb_uninitialize) },
	{ 0xe2244a73, __VMLINUX_SYMBOL_STR(rt2x00usb_initialize) },
	{ 0x81dd09ad, __VMLINUX_SYMBOL_STR(rt2800_load_firmware) },
	{ 0x5c5310f8, __VMLINUX_SYMBOL_STR(rt2800_check_firmware) },
	{ 0x37a303df, __VMLINUX_SYMBOL_STR(rt2x00usb_resume) },
	{ 0x7af23995, __VMLINUX_SYMBOL_STR(rt2x00usb_suspend) },
	{ 0xa698fcd3, __VMLINUX_SYMBOL_STR(rt2x00usb_disconnect) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xdd26e457, __VMLINUX_SYMBOL_STR(rt2800_enable_radio) },
	{ 0x1df8f259, __VMLINUX_SYMBOL_STR(rt2800_wait_wpdma_ready) },
	{ 0xf363b2f7, __VMLINUX_SYMBOL_STR(rt2800_mcu_request) },
	{ 0x881fc30b, __VMLINUX_SYMBOL_STR(rt2800_disable_radio) },
	{ 0xf4822b76, __VMLINUX_SYMBOL_STR(rt2800_get_txwi_rxwi_size) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x95034f2d, __VMLINUX_SYMBOL_STR(rt2800_txdone_entry) },
	{ 0x947977f6, __VMLINUX_SYMBOL_STR(rt2x00lib_txdone_noinfo) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf5c58b1c, __VMLINUX_SYMBOL_STR(rt2x00queue_get_entry) },
	{ 0x8398f4c4, __VMLINUX_SYMBOL_STR(rt2800_probe_hw) },
	{ 0xa7a4d941, __VMLINUX_SYMBOL_STR(rt2800_efuse_detect) },
	{ 0xc5394b14, __VMLINUX_SYMBOL_STR(rt2800_read_eeprom_efuse) },
	{ 0xd45ea32f, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x85b3927e, __VMLINUX_SYMBOL_STR(rt2x00usb_register_read_async) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xc70ab31a, __VMLINUX_SYMBOL_STR(rt2x00usb_watchdog) },
	{ 0xec151e79, __VMLINUX_SYMBOL_STR(rt2800_process_rxwi) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1134a42e, __VMLINUX_SYMBOL_STR(rt2800_wait_csr_ready) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6a575934, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x17ab2bed, __VMLINUX_SYMBOL_STR(rt2x00usb_probe) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xde58801b, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_req_buff_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe641f26b, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request_buff) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,rt2800lib,rt2x00usb,usbcore";

MODULE_ALIAS("usb:v07B8p2870d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p2770d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p3070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p3071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p3072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1482p3C09d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1EDAp2310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8516p2070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8516p2770d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8516p2870d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8516p3070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8516p3071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8516p3072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C07d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C09d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C12d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C23d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C25d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C27d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C28d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C2Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15C5p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0740d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1731d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1732d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1742d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1784d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1761p0B05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3247d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3273d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3305d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3321d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp8053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp805Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp815Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp825Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp825Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp935Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp935Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00E8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0158d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p015Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p016Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p01A2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p01EEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p01A8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p01FDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp002Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp003Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18C5p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C09d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C0Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C0Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C0Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C0Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C15d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C16d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3317d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C1Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C25d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07FAp7712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pB307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p4085d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7717d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7718d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7722d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v203Dp1480d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v203Dp14A9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9703d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9705d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9708d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9709d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A9p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p800Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p800Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p000Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0945d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0947d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0948d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0077d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0078d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0162d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0163d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0164d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0166d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v100Dp9031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p3820d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p3821d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p3822d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p3870d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p3871d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6899d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p821Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p822Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p822Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p822Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p870Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p871Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p871Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p871Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p899Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p3070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p3071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p3072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75pA200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20B8p8888d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D4Dp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D4Dp000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D4Dp000Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D4Dp0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p200Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p5201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB25d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A32p0304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2770d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2870d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp3070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp3071d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp3072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p2018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v129Bp1828d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p002Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p002Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p002Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0047d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0048d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p005Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap6618d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap7511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap7512d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap7522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap8522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA618d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA703d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApB522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A9p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0153d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0164d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0323d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0324d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep300Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v157Ep3013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0282d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0283d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p5257d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3416d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3418d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p341Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p341Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p343Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp945Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C17d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApB511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p20DDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp3370d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp8070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0163d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0165d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8516p3572d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0744d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0761d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0764d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p179Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v167Bp4001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0944d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p002Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp3572d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0065d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0068d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0930p0A07d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0284d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p7733d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17BCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17ADd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148FpF301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C1Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7733d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p0021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp094Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p016Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pED19d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp3573d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p006Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep7A12d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep7A32d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17E8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3329d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3365d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C15d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C19d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C1Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C1Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C1Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C20d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C22d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C23d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep7A22d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep7A42d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp1801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp1800d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp23F6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p2104d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p2126d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p2180d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p2181d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p2182d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp5370d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp5372d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep7A32d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0241d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0253d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C1Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C21d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep7A13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp5572d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p724Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p3073d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p3074d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E0Bp9031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E0Bp9041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p166Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1760d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1761d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17A7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3262d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3284d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3322d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3340d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3399d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p012Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0148d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18C5p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C0Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v203Dp14A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p0600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p0602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A9p0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p800Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE036d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148FpF101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp094Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p0605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p0615d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0168d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0169d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v100Dp9032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05A6p0101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1D4Dp0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB24d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB29d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6259d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08B9p1197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p003Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p004Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p004Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0053d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0069d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p006Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0078d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA512d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApC522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApD522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApF511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v177Fp0254d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vF201p5370d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "77B567315D8B574BC22CFA9");
