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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x121b0949, __VMLINUX_SYMBOL_STR(nci_req_complete) },
	{ 0x44f77039, __VMLINUX_SYMBOL_STR(nci_core_conn_close) },
	{ 0xfca2870d, __VMLINUX_SYMBOL_STR(nci_recv_frame) },
	{ 0x8ee16f5e, __VMLINUX_SYMBOL_STR(nci_send_data) },
	{ 0x6a18834, __VMLINUX_SYMBOL_STR(nci_core_init) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x73272f52, __VMLINUX_SYMBOL_STR(nci_unregister_device) },
	{ 0xf11fe376, __VMLINUX_SYMBOL_STR(nci_core_conn_create) },
	{ 0x4894ed23, __VMLINUX_SYMBOL_STR(nci_prop_cmd) },
	{ 0x7af2b966, __VMLINUX_SYMBOL_STR(nci_core_reset) },
	{ 0x7e987d59, __VMLINUX_SYMBOL_STR(nci_core_cmd) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x808865e3, __VMLINUX_SYMBOL_STR(nci_get_conn_info_by_id) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcf14c2f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x70b507d1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x5f740322, __VMLINUX_SYMBOL_STR(nci_register_device) },
	{ 0x173ad2ac, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xb324dd8e, __VMLINUX_SYMBOL_STR(nci_allocate_device) },
	{ 0x288ee0d, __VMLINUX_SYMBOL_STR(nci_free_device) },
	{ 0x4d39b89a, __VMLINUX_SYMBOL_STR(nci_conn_max_data_pkt_payload_size) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nci";

