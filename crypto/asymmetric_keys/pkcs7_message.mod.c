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
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc103c892, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0x13ce87e8, __VMLINUX_SYMBOL_STR(asn1_ber_decoder) },
	{ 0x455234c8, __VMLINUX_SYMBOL_STR(verify_signature) },
	{ 0xe81b7ebb, __VMLINUX_SYMBOL_STR(x509_request_asymmetric_key) },
	{ 0x80d5e57a, __VMLINUX_SYMBOL_STR(mpi_free) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x8d217b03, __VMLINUX_SYMBOL_STR(crypto_shash_finup) },
	{ 0xbb6f025a, __VMLINUX_SYMBOL_STR(asymmetric_key_generate_id) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x98018c8b, __VMLINUX_SYMBOL_STR(x509_check_signature) },
	{ 0x41d094f3, __VMLINUX_SYMBOL_STR(hash_algo_name) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x783f3d0d, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0x998d79d6, __VMLINUX_SYMBOL_STR(x509_decode_time) },
	{ 0x5974f3e5, __VMLINUX_SYMBOL_STR(public_key_verify_signature) },
	{ 0x37eb4efa, __VMLINUX_SYMBOL_STR(x509_get_sig_params) },
	{ 0xd463188, __VMLINUX_SYMBOL_STR(key_put) },
	{ 0x9af71e57, __VMLINUX_SYMBOL_STR(x509_cert_parse) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7cf4b098, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfc201b66, __VMLINUX_SYMBOL_STR(sprint_oid) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xceb1f126, __VMLINUX_SYMBOL_STR(mpi_read_raw_data) },
	{ 0x392fe739, __VMLINUX_SYMBOL_STR(look_up_OID) },
	{ 0xed022b6c, __VMLINUX_SYMBOL_STR(x509_free_certificate) },
	{ 0x975519c1, __VMLINUX_SYMBOL_STR(asymmetric_key_id_same) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=asn1_decoder,asymmetric_keys,x509_key_parser,mpi,public_key,oid_registry";

