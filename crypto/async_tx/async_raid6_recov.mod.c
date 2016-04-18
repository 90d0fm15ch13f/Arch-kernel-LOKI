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
	{ 0xb0d904b7, __VMLINUX_SYMBOL_STR(raid6_empty_zero_page) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x9c2f85e3, __VMLINUX_SYMBOL_STR(dma_find_channel) },
	{ 0x3c6e627f, __VMLINUX_SYMBOL_STR(dmaengine_unmap_put) },
	{ 0x3fd3efe7, __VMLINUX_SYMBOL_STR(async_tx_submit) },
	{ 0x66c54c80, __VMLINUX_SYMBOL_STR(dmaengine_get_unmap_data) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xba0f6811, __VMLINUX_SYMBOL_STR(async_memcpy) },
	{ 0x8754417d, __VMLINUX_SYMBOL_STR(__async_tx_find_channel) },
	{ 0x6446839b, __VMLINUX_SYMBOL_STR(async_xor) },
	{ 0xa9fc4918, __VMLINUX_SYMBOL_STR(async_tx_quiesce) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe4b051cf, __VMLINUX_SYMBOL_STR(raid6_datap_recov) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x15fe0cd3, __VMLINUX_SYMBOL_STR(raid6_gfexp) },
	{ 0x5ba93f9d, __VMLINUX_SYMBOL_STR(raid6_gfinv) },
	{ 0xb4e37aa0, __VMLINUX_SYMBOL_STR(async_gen_syndrome) },
	{ 0xbd662f6, __VMLINUX_SYMBOL_STR(raid6_gfmul) },
	{ 0xce45a6f1, __VMLINUX_SYMBOL_STR(raid6_gfexi) },
	{ 0x1803a6ed, __VMLINUX_SYMBOL_STR(raid6_2data_recov) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=raid6_pq,async_tx,async_memcpy,async_xor,async_pq";

