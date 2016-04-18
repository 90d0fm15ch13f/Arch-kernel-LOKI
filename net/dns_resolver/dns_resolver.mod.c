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
	{ 0x54bd9ae, __VMLINUX_SYMBOL_STR(request_key) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x138be331, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb4e67efd, __VMLINUX_SYMBOL_STR(prepare_kernel_cred) },
	{ 0x57000eee, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x4f17f9b, __VMLINUX_SYMBOL_STR(generic_key_instantiate) },
	{ 0x9cd0e5bc, __VMLINUX_SYMBOL_STR(user_read) },
	{ 0x72adad7, __VMLINUX_SYMBOL_STR(override_creds) },
	{ 0x72e426bc, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xc9a77a70, __VMLINUX_SYMBOL_STR(key_validate) },
	{ 0xa45cccc7, __VMLINUX_SYMBOL_STR(key_revoke) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0xa07a37f0, __VMLINUX_SYMBOL_STR(memchr) },
	{ 0xd463188, __VMLINUX_SYMBOL_STR(key_put) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x1a72abf4, __VMLINUX_SYMBOL_STR(__put_cred) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x7a8da861, __VMLINUX_SYMBOL_STR(keyring_alloc) },
	{ 0xe664136b, __VMLINUX_SYMBOL_STR(register_key_type) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfbb5455b, __VMLINUX_SYMBOL_STR(unregister_key_type) },
	{ 0xed6d3fa5, __VMLINUX_SYMBOL_STR(user_revoke) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xc94484d3, __VMLINUX_SYMBOL_STR(user_destroy) },
	{ 0xd25ad846, __VMLINUX_SYMBOL_STR(revert_creds) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

