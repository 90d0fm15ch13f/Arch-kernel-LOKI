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
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x366f8c07, __VMLINUX_SYMBOL_STR(relay_file_operations) },
	{ 0x1f3e9dec, __VMLINUX_SYMBOL_STR(ath9k_hw_getchan_noise) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xb616c46e, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0x16c745d, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf6cbf840, __VMLINUX_SYMBOL_STR(relay_switch_subbuf) },
	{ 0x527f1df4, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x9e3c7b7c, __VMLINUX_SYMBOL_STR(relay_close) },
	{ 0x56c84998, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0x70c7b78e, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x3441ca45, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0x4a4fd348, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x84ac7241, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x8c2abad3, __VMLINUX_SYMBOL_STR(relay_buf_full) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2fb6de5d, __VMLINUX_SYMBOL_STR(add_device_randomness) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5b3779f, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x76afedcb, __VMLINUX_SYMBOL_STR(relay_open) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xdbd74a65, __VMLINUX_SYMBOL_STR(ath_hw_keyreset) },
	{ 0x33128c60, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txpowerlimit) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath9k_hw,cfg80211,ath";

