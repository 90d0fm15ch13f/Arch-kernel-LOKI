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
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x13ce87e8, __VMLINUX_SYMBOL_STR(asn1_ber_decoder) },
	{ 0x923e65da, __VMLINUX_SYMBOL_STR(crypto_register_akcipher) },
	{ 0xdab5e7a, __VMLINUX_SYMBOL_STR(crypto_grab_akcipher) },
	{ 0xd08f6239, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0x2124d861, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0x80d5e57a, __VMLINUX_SYMBOL_STR(mpi_free) },
	{ 0xae7c231d, __VMLINUX_SYMBOL_STR(mpi_cmp) },
	{ 0x7645af6f, __VMLINUX_SYMBOL_STR(sg_pcopy_from_buffer) },
	{ 0x9bece81b, __VMLINUX_SYMBOL_STR(mpi_cmp_ui) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf9f04dac, __VMLINUX_SYMBOL_STR(mpi_write_to_sgl) },
	{ 0xc3bdaf83, __VMLINUX_SYMBOL_STR(sg_miter_start) },
	{ 0x8880032a, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x7f8d3818, __VMLINUX_SYMBOL_STR(sg_miter_stop) },
	{ 0x25e8ed29, __VMLINUX_SYMBOL_STR(sg_nents_for_len) },
	{ 0x196af98b, __VMLINUX_SYMBOL_STR(crypto_unregister_akcipher) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xbaf6d630, __VMLINUX_SYMBOL_STR(mpi_read_raw_from_sgl) },
	{ 0xcab8c2ed, __VMLINUX_SYMBOL_STR(sg_miter_next) },
	{ 0x16d44a63, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0x98503a63, __VMLINUX_SYMBOL_STR(mpi_alloc) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7cf4b098, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9fe939e1, __VMLINUX_SYMBOL_STR(mpi_powm) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x72665ac2, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0xceb1f126, __VMLINUX_SYMBOL_STR(mpi_read_raw_data) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xac2652f7, __VMLINUX_SYMBOL_STR(akcipher_register_instance) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=asn1_decoder,mpi";

