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
	{ 0xc103c892, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0x13ce87e8, __VMLINUX_SYMBOL_STR(asn1_ber_decoder) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xf5f7f8d5, __VMLINUX_SYMBOL_STR(public_key_subtype) },
	{ 0x80d5e57a, __VMLINUX_SYMBOL_STR(mpi_free) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x2fdd6caf, __VMLINUX_SYMBOL_STR(key_type_asymmetric) },
	{ 0xd45cc6ca, __VMLINUX_SYMBOL_STR(bin2hex) },
	{ 0xfb2f8a4, __VMLINUX_SYMBOL_STR(mktime64) },
	{ 0x8d217b03, __VMLINUX_SYMBOL_STR(crypto_shash_finup) },
	{ 0x47f99647, __VMLINUX_SYMBOL_STR(keyring_search) },
	{ 0xbb6f025a, __VMLINUX_SYMBOL_STR(asymmetric_key_generate_id) },
	{ 0x41d094f3, __VMLINUX_SYMBOL_STR(hash_algo_name) },
	{ 0x964e22fe, __VMLINUX_SYMBOL_STR(pkey_algo) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb8937a9a, __VMLINUX_SYMBOL_STR(unregister_asymmetric_key_parser) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x5974f3e5, __VMLINUX_SYMBOL_STR(public_key_verify_signature) },
	{ 0x674e13e1, __VMLINUX_SYMBOL_STR(public_key_destroy) },
	{ 0xd463188, __VMLINUX_SYMBOL_STR(key_put) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7cf4b098, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79f29d12, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0xfc201b66, __VMLINUX_SYMBOL_STR(sprint_oid) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xceb1f126, __VMLINUX_SYMBOL_STR(mpi_read_raw_data) },
	{ 0x392fe739, __VMLINUX_SYMBOL_STR(look_up_OID) },
	{ 0x975519c1, __VMLINUX_SYMBOL_STR(asymmetric_key_id_same) },
	{ 0x684f344c, __VMLINUX_SYMBOL_STR(register_asymmetric_key_parser) },
	{ 0x5d6fecda, __VMLINUX_SYMBOL_STR(system_trusted_keyring) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=asn1_decoder,public_key,mpi,asymmetric_keys,oid_registry";

