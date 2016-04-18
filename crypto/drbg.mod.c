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
	{ 0xc1ebd792, __VMLINUX_SYMBOL_STR(crypto_unregister_rngs) },
	{ 0x455c7ee6, __VMLINUX_SYMBOL_STR(crypto_register_rngs) },
	{ 0xb54e53f2, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xd8eb41f4, __VMLINUX_SYMBOL_STR(crypto_alloc_rng) },
	{ 0x3ca5420, __VMLINUX_SYMBOL_STR(add_random_ready_callback) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xf5dbfc02, __VMLINUX_SYMBOL_STR(del_random_ready_callback) },
	{ 0xc15a44c6, __VMLINUX_SYMBOL_STR(memzero_explicit) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc103c892, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x45bf1ff3, __VMLINUX_SYMBOL_STR(crypto_inc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9e597b01, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0x783f3d0d, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0x8878f237, __VMLINUX_SYMBOL_STR(crypto_shash_setkey) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x7cf4b098, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

