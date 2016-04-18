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
	{ 0xfaf39601, __VMLINUX_SYMBOL_STR(pkcs7_verify) },
	{ 0x7ce84167, __VMLINUX_SYMBOL_STR(pkcs7_get_content_data) },
	{ 0x4f17f9b, __VMLINUX_SYMBOL_STR(generic_key_instantiate) },
	{ 0x7c004e17, __VMLINUX_SYMBOL_STR(user_free_preparse) },
	{ 0x9cd0e5bc, __VMLINUX_SYMBOL_STR(user_read) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf67a3922, __VMLINUX_SYMBOL_STR(user_describe) },
	{ 0xd29ae2cf, __VMLINUX_SYMBOL_STR(pkcs7_validate_trust) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x33f6f930, __VMLINUX_SYMBOL_STR(pkcs7_parse_message) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe664136b, __VMLINUX_SYMBOL_STR(register_key_type) },
	{ 0x26db4456, __VMLINUX_SYMBOL_STR(pkcs7_free_message) },
	{ 0x2cd0b218, __VMLINUX_SYMBOL_STR(user_preparse) },
	{ 0xfbb5455b, __VMLINUX_SYMBOL_STR(unregister_key_type) },
	{ 0xed6d3fa5, __VMLINUX_SYMBOL_STR(user_revoke) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xc94484d3, __VMLINUX_SYMBOL_STR(user_destroy) },
	{ 0x5d6fecda, __VMLINUX_SYMBOL_STR(system_trusted_keyring) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pkcs7_message";

