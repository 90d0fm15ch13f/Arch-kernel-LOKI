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
	{ 0xd85b4e5a, __VMLINUX_SYMBOL_STR(nfc_targets_found) },
	{ 0x5fb9aea7, __VMLINUX_SYMBOL_STR(nfc_hci_set_param) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x97be0cc5, __VMLINUX_SYMBOL_STR(nfc_hci_allocate_device) },
	{ 0xa1980e41, __VMLINUX_SYMBOL_STR(nfc_tm_activated) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd88ab8a2, __VMLINUX_SYMBOL_STR(nfc_hci_get_clientdata) },
	{ 0x9b4acb01, __VMLINUX_SYMBOL_STR(nfc_hci_send_cmd) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x56bf2f72, __VMLINUX_SYMBOL_STR(nfc_set_remote_general_bytes) },
	{ 0x7c4a6da0, __VMLINUX_SYMBOL_STR(nfc_hci_register_device) },
	{ 0x355dcb35, __VMLINUX_SYMBOL_STR(nfc_get_local_general_bytes) },
	{ 0xb153e56b, __VMLINUX_SYMBOL_STR(nfc_hci_free_device) },
	{ 0xbca0b4fd, __VMLINUX_SYMBOL_STR(nfc_hci_sak_to_protocol) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x330bf7b, __VMLINUX_SYMBOL_STR(nfc_hci_unregister_device) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x43028a27, __VMLINUX_SYMBOL_STR(nfc_hci_result_to_errno) },
	{ 0xa5226010, __VMLINUX_SYMBOL_STR(nfc_tm_data_received) },
	{ 0x1a703ba1, __VMLINUX_SYMBOL_STR(crc_ccitt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdeb99375, __VMLINUX_SYMBOL_STR(nfc_hci_send_cmd_async) },
	{ 0xa5544464, __VMLINUX_SYMBOL_STR(nfc_hci_get_param) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x4fd8fa0f, __VMLINUX_SYMBOL_STR(nfc_hci_set_clientdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hci,nfc,crc-ccitt";

