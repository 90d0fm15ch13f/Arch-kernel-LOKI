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
	{ 0x5db3992a, __VMLINUX_SYMBOL_STR(irlmp_data_request) },
	{ 0x40038f6f, __VMLINUX_SYMBOL_STR(irlmp_open_lsap) },
	{ 0x12efb1f2, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x33cbe2c6, __VMLINUX_SYMBOL_STR(proc_irda) },
	{ 0x8149c38b, __VMLINUX_SYMBOL_STR(irttp_close_tsap) },
	{ 0xd6229bef, __VMLINUX_SYMBOL_STR(irlmp_close_lsap) },
	{ 0x1d600878, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x83643dc9, __VMLINUX_SYMBOL_STR(irttp_connect_request) },
	{ 0x54609bdc, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xaf894dd9, __VMLINUX_SYMBOL_STR(irttp_data_request) },
	{ 0xa6f65e64, __VMLINUX_SYMBOL_STR(irlmp_connect_response) },
	{ 0x8e9ddd80, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xcb6894b4, __VMLINUX_SYMBOL_STR(irlmp_disconnect_request) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x154c490c, __VMLINUX_SYMBOL_STR(irttp_disconnect_request) },
	{ 0xec242b93, __VMLINUX_SYMBOL_STR(hashbin_new) },
	{ 0x98a8b3b4, __VMLINUX_SYMBOL_STR(hashbin_delete) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdc0196c2, __VMLINUX_SYMBOL_STR(hashbin_remove) },
	{ 0x2b432980, __VMLINUX_SYMBOL_STR(hashbin_get_next) },
	{ 0xb8bb9b8e, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xae3e756b, __VMLINUX_SYMBOL_STR(irttp_connect_response) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe329462a, __VMLINUX_SYMBOL_STR(hashbin_get_first) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x3ec4abe0, __VMLINUX_SYMBOL_STR(irda_notify_init) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x37bc75aa, __VMLINUX_SYMBOL_STR(irlmp_connect_request) },
	{ 0x22557813, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x723b74aa, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa2c439f8, __VMLINUX_SYMBOL_STR(irttp_open_tsap) },
	{ 0x70a3f20f, __VMLINUX_SYMBOL_STR(hashbin_lock_find) },
	{ 0xa686b893, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x63b343e2, __VMLINUX_SYMBOL_STR(irttp_flow_request) },
	{ 0x9ccbdfca, __VMLINUX_SYMBOL_STR(hashbin_insert) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=irda";

