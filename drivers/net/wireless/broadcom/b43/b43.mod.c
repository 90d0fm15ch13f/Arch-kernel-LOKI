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
	{ 0x28b137e6, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x9e1da8f, __VMLINUX_SYMBOL_STR(ssb_dma_translation) },
	{ 0xa78deb61, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xfbf48d6d, __VMLINUX_SYMBOL_STR(bcma_pmu_spuravoid_pllupdate) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0x3d7e575e, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0xc654b2b1, __VMLINUX_SYMBOL_STR(bcma_host_pci_down) },
	{ 0x7ed41a18, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x92b22b5, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xcdf72977, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xf3199ee3, __VMLINUX_SYMBOL_STR(ieee80211_rts_get) },
	{ 0x1d600878, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x34dae2e, __VMLINUX_SYMBOL_STR(ssb_commit_settings) },
	{ 0xe5a48c78, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x9732b201, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xd8b2955b, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa438a46b, __VMLINUX_SYMBOL_STR(ssb_bus_powerup) },
	{ 0x33a29507, __VMLINUX_SYMBOL_STR(bcma_host_pci_up) },
	{ 0x8c0f83b7, __VMLINUX_SYMBOL_STR(ssb_bus_sdiobus_register) },
	{ 0x849a36e2, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xab6ebefe, __VMLINUX_SYMBOL_STR(__ieee80211_get_assoc_led_name) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x626f4679, __VMLINUX_SYMBOL_STR(__ssb_driver_register) },
	{ 0x6c7a01fa, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x2b8f30c7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x762dada, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0x5433b3c5, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xb79f95d, __VMLINUX_SYMBOL_STR(ssb_driver_unregister) },
	{ 0x195ddb12, __VMLINUX_SYMBOL_STR(ssb_chipco_gpio_control) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x91e801e8, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0xa894bff5, __VMLINUX_SYMBOL_STR(bcma_core_dma_translation) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x162d05fc, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xa3d3806b, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x15f068e5, __VMLINUX_SYMBOL_STR(ssb_device_enable) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5955d077, __VMLINUX_SYMBOL_STR(bcma_core_set_clockmode) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x30d54016, __VMLINUX_SYMBOL_STR(__bcma_driver_register) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xaf6d37c3, __VMLINUX_SYMBOL_STR(ieee80211_ctstoself_get) },
	{ 0x56ecc71e, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x4c759827, __VMLINUX_SYMBOL_STR(byte_rev_table) },
	{ 0x1c4f77a1, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xdcf8f6bf, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xe6a9fa13, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x16ab124f, __VMLINUX_SYMBOL_STR(bcma_host_pci_irq_ctl) },
	{ 0x16fe83a6, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x274cb35c, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x3a350ee1, __VMLINUX_SYMBOL_STR(bcma_chipco_gpio_control) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x647db518, __VMLINUX_SYMBOL_STR(__ieee80211_get_rx_led_name) },
	{ 0x764780c8, __VMLINUX_SYMBOL_STR(bcma_core_is_enabled) },
	{ 0x54d9014b, __VMLINUX_SYMBOL_STR(ssb_pmu_set_ldo_voltage) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xbe7e95f8, __VMLINUX_SYMBOL_STR(ssb_device_disable) },
	{ 0xb982fc9c, __VMLINUX_SYMBOL_STR(bcma_core_enable) },
	{ 0xedd45401, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x496efec3, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0xb047291e, __VMLINUX_SYMBOL_STR(bcma_driver_unregister) },
	{ 0x55224d9e, __VMLINUX_SYMBOL_STR(bcma_core_pll_ctl) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xb678366f, __VMLINUX_SYMBOL_STR(int_sqrt) },
	{ 0x5fe907b7, __VMLINUX_SYMBOL_STR(hwrng_register) },
	{ 0x8713533b, __VMLINUX_SYMBOL_STR(__ieee80211_get_tx_led_name) },
	{ 0x6ae1bc51, __VMLINUX_SYMBOL_STR(ssb_set_devtypedata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8be6d007, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0xaa50718c, __VMLINUX_SYMBOL_STR(ieee80211_generic_frame_duration) },
	{ 0xcf313772, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xe6e90fa0, __VMLINUX_SYMBOL_STR(ssb_bus_unregister) },
	{ 0x63f79984, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0xdb02a8c6, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xcf14c2f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x6b8f0b35, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x9f2d5a59, __VMLINUX_SYMBOL_STR(ssb_bus_may_powerdown) },
	{ 0x685393bf, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf80ef3f2, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x8dc1db83, __VMLINUX_SYMBOL_STR(ssb_pcicore_dev_irqvecs_enable) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x94e48a7a, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xe86d0509, __VMLINUX_SYMBOL_STR(ssb_pmu_set_ldo_paref) },
	{ 0x207f2ede, __VMLINUX_SYMBOL_STR(hwrng_unregister) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x79f15275, __VMLINUX_SYMBOL_STR(ssb_device_is_enabled) },
	{ 0x99b01602, __VMLINUX_SYMBOL_STR(bcma_core_disable) },
	{ 0x6b2f6ff0, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x173ad2ac, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x3a271589, __VMLINUX_SYMBOL_STR(ssb_pmu_spuravoid_pllupdate) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x419c0202, __VMLINUX_SYMBOL_STR(ieee80211_get_tkip_p1k_iv) },
	{ 0x8492a430, __VMLINUX_SYMBOL_STR(ieee80211_get_response_rate) },
	{ 0xa0eb2176, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x15c03c40, __VMLINUX_SYMBOL_STR(sdio_release_host) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,ssb,bcma,led-class,mmc_core,cfg80211,rng-core";

MODULE_ALIAS("bcma:m04BFid0812rev11cl*");
MODULE_ALIAS("bcma:m04BFid0812rev15cl*");
MODULE_ALIAS("bcma:m04BFid0812rev17cl*");
MODULE_ALIAS("bcma:m04BFid0812rev18cl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ccl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Dcl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ecl*");
MODULE_ALIAS("bcma:m04BFid0812rev28cl*");
MODULE_ALIAS("bcma:m04BFid0812rev2Acl*");
MODULE_ALIAS("ssb:v4243id0812rev05*");
MODULE_ALIAS("ssb:v4243id0812rev06*");
MODULE_ALIAS("ssb:v4243id0812rev07*");
MODULE_ALIAS("ssb:v4243id0812rev09*");
MODULE_ALIAS("ssb:v4243id0812rev0A*");
MODULE_ALIAS("ssb:v4243id0812rev0B*");
MODULE_ALIAS("ssb:v4243id0812rev0C*");
MODULE_ALIAS("ssb:v4243id0812rev0D*");
MODULE_ALIAS("ssb:v4243id0812rev0F*");
MODULE_ALIAS("ssb:v4243id0812rev10*");
