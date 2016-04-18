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
	{ 0xd9bae4b, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_nlattr_to_range) },
	{ 0x131f636c, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_in_range) },
	{ 0x49cfd390, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_unregister) },
	{ 0xc4b7bd2f, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_register) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc3654b16, __VMLINUX_SYMBOL_STR(__skb_checksum) },
	{ 0xaf549d76, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0x5591848, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_unique_tuple) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xf8d04f09, __VMLINUX_SYMBOL_STR(__crc32c_le_shift) },
	{ 0x27000b29, __VMLINUX_SYMBOL_STR(crc32c) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat,libcrc32c";

