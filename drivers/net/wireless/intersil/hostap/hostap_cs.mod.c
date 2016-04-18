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
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x6c7a01fa, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x292d4af1, __VMLINUX_SYMBOL_STR(seq_release_private) },
	{ 0xb97785f1, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x8e9ddd80, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x723b74aa, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xca807607, __VMLINUX_SYMBOL_STR(pcmcia_unregister_driver) },
	{ 0x94e180a2, __VMLINUX_SYMBOL_STR(pcmcia_register_driver) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x63d984dc, __VMLINUX_SYMBOL_STR(hostap_check_sta_fw_version) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf1fa7158, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xb9c9ec83, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x1cd25dee, __VMLINUX_SYMBOL_STR(hostap_init_ap_proc) },
	{ 0x22557813, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x26e8c640, __VMLINUX_SYMBOL_STR(hostap_init_proc) },
	{ 0xafae8a2d, __VMLINUX_SYMBOL_STR(hostap_add_interface) },
	{ 0xe7578024, __VMLINUX_SYMBOL_STR(pcmcia_enable_device) },
	{ 0x7bf9d5e2, __VMLINUX_SYMBOL_STR(pcmcia_request_irq) },
	{ 0x923f1409, __VMLINUX_SYMBOL_STR(hostap_init_data) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xc7968ff7, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0xe254956c, __VMLINUX_SYMBOL_STR(dev_alloc_name) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x39d46bb0, __VMLINUX_SYMBOL_STR(hostap_80211_ops) },
	{ 0xb916223e, __VMLINUX_SYMBOL_STR(hostap_setup_dev) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x8e1062f4, __VMLINUX_SYMBOL_STR(lib80211_crypt_info_init) },
	{ 0x939e7879, __VMLINUX_SYMBOL_STR(hostap_info_init) },
	{ 0x1723ac32, __VMLINUX_SYMBOL_STR(hostap_set_multicast_list_queue) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xe4e9821e, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x61ac9c9, __VMLINUX_SYMBOL_STR(pcmcia_loop_config) },
	{ 0xe24d19b0, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xc8b4be0b, __VMLINUX_SYMBOL_STR(hostap_get_porttype) },
	{ 0xa965bca4, __VMLINUX_SYMBOL_STR(hostap_set_auth_algs) },
	{ 0xdba50d49, __VMLINUX_SYMBOL_STR(hostap_set_roaming) },
	{ 0xacb8fd61, __VMLINUX_SYMBOL_STR(hostap_set_encryption) },
	{ 0x40cc8de9, __VMLINUX_SYMBOL_STR(hostap_set_string) },
	{ 0x274cb35c, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xa12ad27f, __VMLINUX_SYMBOL_STR(hostap_dump_tx_header) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc70b0f5f, __VMLINUX_SYMBOL_STR(seq_open_private) },
	{ 0x2621a50b, __VMLINUX_SYMBOL_STR(pcmcia_write_config_byte) },
	{ 0xa0c59a63, __VMLINUX_SYMBOL_STR(pcmcia_read_config_byte) },
	{ 0xeacb293e, __VMLINUX_SYMBOL_STR(seq_write) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x3386efc1, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x67081da3, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0x1517ab6c, __VMLINUX_SYMBOL_STR(prism2_update_comms_qual) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2b8f30c7, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xec7767f9, __VMLINUX_SYMBOL_STR(hostap_info_process) },
	{ 0xb6a2ee50, __VMLINUX_SYMBOL_STR(hostap_80211_rx) },
	{ 0xb2a945e0, __VMLINUX_SYMBOL_STR(hostap_dump_rx_header) },
	{ 0x5aba5c40, __VMLINUX_SYMBOL_STR(hostap_handle_sta_tx_exc) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xb4b77c8b, __VMLINUX_SYMBOL_STR(hostap_80211_get_hdrlen) },
	{ 0x685393bf, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xc2f5bfc, __VMLINUX_SYMBOL_STR(pcmcia_request_io) },
	{ 0xb01f3753, __VMLINUX_SYMBOL_STR(pcmcia_dev_present) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xfb1fe9f2, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x3c215b8d, __VMLINUX_SYMBOL_STR(hostap_set_hostapd_sta) },
	{ 0x5dd54d1c, __VMLINUX_SYMBOL_STR(hostap_set_hostapd) },
	{ 0x534e98b8, __VMLINUX_SYMBOL_STR(hostap_remove_proc) },
	{ 0x54609bdc, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xd8ca925d, __VMLINUX_SYMBOL_STR(hostap_free_data) },
	{ 0x5b60bd2b, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x27a1be38, __VMLINUX_SYMBOL_STR(lib80211_crypt_info_free) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x86168f59, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x22911b3c, __VMLINUX_SYMBOL_STR(hostap_remove_interface) },
	{ 0xcb4626b0, __VMLINUX_SYMBOL_STR(pcmcia_disable_device) },
	{ 0xbde446b5, __VMLINUX_SYMBOL_STR(wireless_send_event) },
	{ 0xf091a2f5, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x196bb99, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xf576ca95, __VMLINUX_SYMBOL_STR(hostap_set_antsel) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x7cfb5566, __VMLINUX_SYMBOL_STR(hostap_set_word) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x760a0f4f, __VMLINUX_SYMBOL_STR(yield) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8526c35a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xc9fef317, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pcmcia,hostap,lib80211";

MODULE_ALIAS("pcmcia:m000Bc7100f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m000Bc7300f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0101c0777f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0126c8000f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0138c0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m01BFc3301f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0250c0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m026Fc030Bf*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0274c1612f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0274c1613f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m028Ac0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02AAc0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m02D2c0001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m50C2c0001f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m50C2c7300f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:mC250c0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:mD601c0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:mD601c0005f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:mD601c0010f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0126c0002f*fn*pfn*pa*pb*pc*pd*");
MODULE_ALIAS("pcmcia:mD601c0005f*fn*pfn*pa2D858104pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0156c0002f*fn*pfn*pa74C5E40Dpb*pc*pd*");
MODULE_ALIAS("pcmcia:m0156c0002f*fn*pfn*pa4B801A17pb*pc*pd*");
MODULE_ALIAS("pcmcia:m0156c0002f*fn*pfn*pa*pb*pc4B74BAA0pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn00pfn*pa7A954BD9pb74BE00C6pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paE6EC52CEpb08649AF2pc4B74BAA0pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa96EF6FE2pb263FCBABpcA57ADB8Cpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa71B18589pbB6F1B0ABpc4B74BAA0pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa11D901AFpb6E9BD926pc4B74BAA0pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC4F8B18Bpb474A1F2Apc4B74BAA0pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa2DECECE3pb82067C18pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa54F7C49Cpb15A75E5Bpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa74C5E40DpbDB472A18pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa0733CC81pb0C52F395pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa273FE3DBpb32A1EAEEpc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paA37434E9pb9762E8F1pc*pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa1CADD3E5pbE697636Cpc7A5BFCF1pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*paC7B8DF9Dpb1700D087pc4B74BAA0pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa5CD01705pb4271660Fpc9D08EE12pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa4B8870FFpb70E946D1pc4B74BAA0pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa*pb*pc355CB092pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa*pb*pc630D52B2pd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa*pb*pcDD97A26Bpd*");
MODULE_ALIAS("pcmcia:m*c*f*fn*pfn*pa*pb*pcC9049A39pd*");
