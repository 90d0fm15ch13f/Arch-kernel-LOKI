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
	{ 0x28b137e6, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x121b0949, __VMLINUX_SYMBOL_STR(nci_req_complete) },
	{ 0x1b598e1, __VMLINUX_SYMBOL_STR(nci_hci_set_param) },
	{ 0x64866153, __VMLINUX_SYMBOL_STR(nci_hci_dev_session_init) },
	{ 0xfca2870d, __VMLINUX_SYMBOL_STR(nci_recv_frame) },
	{ 0x5267462f, __VMLINUX_SYMBOL_STR(nfc_vendor_cmd_reply) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x8909c086, __VMLINUX_SYMBOL_STR(nci_hci_send_cmd) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xf6e507fe, __VMLINUX_SYMBOL_STR(nfc_se_connectivity) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x52a70b4a, __VMLINUX_SYMBOL_STR(nci_hci_clear_all_pipes) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x7dc3604d, __VMLINUX_SYMBOL_STR(nci_hci_send_event) },
	{ 0xe8afc5c0, __VMLINUX_SYMBOL_STR(skb_dequeue_tail) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x5b60bd2b, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x73272f52, __VMLINUX_SYMBOL_STR(nci_unregister_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf11fe376, __VMLINUX_SYMBOL_STR(nci_core_conn_create) },
	{ 0x4894ed23, __VMLINUX_SYMBOL_STR(nci_prop_cmd) },
	{ 0x7d96cea3, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0xd138423f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x8ad4e6a5, __VMLINUX_SYMBOL_STR(nci_hci_connect_gate) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x412fe77a, __VMLINUX_SYMBOL_STR(nfc_se_transaction) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x274cb35c, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xdbe48ebc, __VMLINUX_SYMBOL_STR(nci_hci_get_param) },
	{ 0xe158e5aa, __VMLINUX_SYMBOL_STR(nci_nfcee_mode_set) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xf0ba437c, __VMLINUX_SYMBOL_STR(nfc_remove_se) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x685393bf, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x80477695, __VMLINUX_SYMBOL_STR(nfc_add_se) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x4ba66fba, __VMLINUX_SYMBOL_STR(__nfc_alloc_vendor_cmd_reply_skb) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x5f740322, __VMLINUX_SYMBOL_STR(nci_register_device) },
	{ 0xb324dd8e, __VMLINUX_SYMBOL_STR(nci_allocate_device) },
	{ 0x288ee0d, __VMLINUX_SYMBOL_STR(nci_free_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nci,nfc";

