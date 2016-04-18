#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5e862211, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa9a5a7c5, __VMLINUX_SYMBOL_STR(nfc_hci_send_event) },
	{ 0x5f7d129, __VMLINUX_SYMBOL_STR(nfc_dep_link_is_up) },
	{ 0x5fb9aea7, __VMLINUX_SYMBOL_STR(nfc_hci_set_param) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x97be0cc5, __VMLINUX_SYMBOL_STR(nfc_hci_allocate_device) },
	{ 0x99da7648, __VMLINUX_SYMBOL_STR(nfc_find_se) },
	{ 0xa1980e41, __VMLINUX_SYMBOL_STR(nfc_tm_activated) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd88ab8a2, __VMLINUX_SYMBOL_STR(nfc_hci_get_clientdata) },
	{ 0x9b4acb01, __VMLINUX_SYMBOL_STR(nfc_hci_send_cmd) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x56bf2f72, __VMLINUX_SYMBOL_STR(nfc_set_remote_general_bytes) },
	{ 0x7b5a016, __VMLINUX_SYMBOL_STR(nfc_hci_target_discovered) },
	{ 0x7c4a6da0, __VMLINUX_SYMBOL_STR(nfc_hci_register_device) },
	{ 0x355dcb35, __VMLINUX_SYMBOL_STR(nfc_get_local_general_bytes) },
	{ 0xb153e56b, __VMLINUX_SYMBOL_STR(nfc_hci_free_device) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x330bf7b, __VMLINUX_SYMBOL_STR(nfc_hci_unregister_device) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa5226010, __VMLINUX_SYMBOL_STR(nfc_tm_data_received) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x80477695, __VMLINUX_SYMBOL_STR(nfc_add_se) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xdeb99375, __VMLINUX_SYMBOL_STR(nfc_hci_send_cmd_async) },
	{ 0xa5544464, __VMLINUX_SYMBOL_STR(nfc_hci_get_param) },
	{ 0x4fd8fa0f, __VMLINUX_SYMBOL_STR(nfc_hci_set_clientdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hci,nfc";

