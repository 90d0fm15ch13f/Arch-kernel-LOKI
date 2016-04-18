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
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x11737387, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0x84697d24, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x910b3edb, __VMLINUX_SYMBOL_STR(gether_get_qmult) },
	{ 0xd04525d1, __VMLINUX_SYMBOL_STR(gether_setup_name_default) },
	{ 0xfcf056c3, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xb9c9ec83, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xd8b2955b, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x21e992a5, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0xb5ec2d61, __VMLINUX_SYMBOL_STR(gether_get_ifname) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x87105f9c, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x8878cfa6, __VMLINUX_SYMBOL_STR(gether_cleanup) },
	{ 0x1b7fe38c, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xbdb7850e, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0x9c6726f8, __VMLINUX_SYMBOL_STR(gether_get_dev_addr) },
	{ 0xc807048b, __VMLINUX_SYMBOL_STR(gether_connect) },
	{ 0x196bb99, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xc08f519b, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5f005368, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x625d7654, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0x27882b9b, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0xfb1fe9f2, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x9ea74df2, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xae855de6, __VMLINUX_SYMBOL_STR(gether_get_host_addr) },
	{ 0x7eb6055d, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x93abe29a, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0xb262518a, __VMLINUX_SYMBOL_STR(gether_get_host_addr_u8) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xd9c0ba04, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x274cb35c, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x4f806f09, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfbfd5923, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0x33ba4ae3, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x739bb1d, __VMLINUX_SYMBOL_STR(gether_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xef96bf75, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x8bb48ba6, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x7456254f, __VMLINUX_SYMBOL_STR(usb_os_desc_prepare_interf_dir) },
	{ 0x13cc8fe6, __VMLINUX_SYMBOL_STR(dev_get_stats) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_ether";

