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
	{ 0x7bd57fc5, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0x99f87c9a, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0x28af6928, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x3ae0d58f, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x4de398b5, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xa448132c, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0xff4077fa, __VMLINUX_SYMBOL_STR(crypto_alg_mod_lookup) },
	{ 0x4b5c240f, __VMLINUX_SYMBOL_STR(crypto_lookup_skcipher) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xa1c52234, __VMLINUX_SYMBOL_STR(crypto_unregister_instance) },
	{ 0x3de9cae1, __VMLINUX_SYMBOL_STR(crypto_remove_final) },
	{ 0x124047b7, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x2cde5e39, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x8906d939, __VMLINUX_SYMBOL_STR(crypto_remove_spawns) },
	{ 0xbfb6ce61, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x138be331, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xb1df8213, __VMLINUX_SYMBOL_STR(crypto_mod_get) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x457594fa, __VMLINUX_SYMBOL_STR(crypto_alg_list) },
	{ 0x72e426bc, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x1588698f, __VMLINUX_SYMBOL_STR(crypto_alg_sem) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd138423f, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x5bd0748f, __VMLINUX_SYMBOL_STR(crypto_del_default_rng) },
	{ 0x8e41a1c3, __VMLINUX_SYMBOL_STR(netlink_capable) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5eb907f4, __VMLINUX_SYMBOL_STR(netlink_rcv_skb) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

