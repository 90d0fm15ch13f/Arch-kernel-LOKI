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
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7129e5f8, __VMLINUX_SYMBOL_STR(hex_asc) },
	{ 0xc103c892, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x779a18af, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0x9643a24f, __VMLINUX_SYMBOL_STR(tpm_unseal_trusted) },
	{ 0x1c96e091, __VMLINUX_SYMBOL_STR(key_payload_reserve) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x9e597b01, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0x514dbc9c, __VMLINUX_SYMBOL_STR(tpm_is_tpm2) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x41d094f3, __VMLINUX_SYMBOL_STR(hash_algo_name) },
	{ 0x522f538b, __VMLINUX_SYMBOL_STR(tpm_send) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x783f3d0d, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0x4f30b379, __VMLINUX_SYMBOL_STR(hash_digest_size) },
	{ 0xc37226a5, __VMLINUX_SYMBOL_STR(tpm_pcr_extend) },
	{ 0xf5621d7c, __VMLINUX_SYMBOL_STR(crypto_shash_digest) },
	{ 0xf67a3922, __VMLINUX_SYMBOL_STR(user_describe) },
	{ 0x8878f237, __VMLINUX_SYMBOL_STR(crypto_shash_setkey) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x53494cb, __VMLINUX_SYMBOL_STR(tpm_get_random) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7cf4b098, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x5377e556, __VMLINUX_SYMBOL_STR(hex2bin) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe664136b, __VMLINUX_SYMBOL_STR(register_key_type) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfbb5455b, __VMLINUX_SYMBOL_STR(unregister_key_type) },
	{ 0x61f3251, __VMLINUX_SYMBOL_STR(tpm_seal_trusted) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tpm";

