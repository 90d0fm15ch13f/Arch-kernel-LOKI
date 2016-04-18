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
	{ 0x1636abdf, __VMLINUX_SYMBOL_STR(__camellia_enc_blk) },
	{ 0x16061d06, __VMLINUX_SYMBOL_STR(__camellia_setkey) },
	{ 0x13a65ecf, __VMLINUX_SYMBOL_STR(camellia_ecb_enc_16way) },
	{ 0xbed9ed16, __VMLINUX_SYMBOL_STR(crypto_unregister_algs) },
	{ 0x42220bb3, __VMLINUX_SYMBOL_STR(crypto_ablkcipher_type) },
	{ 0xf4521fda, __VMLINUX_SYMBOL_STR(camellia_dec_blk_2way) },
	{ 0xeab93021, __VMLINUX_SYMBOL_STR(lrw_crypt) },
	{ 0x6b9bda7f, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x417886ae, __VMLINUX_SYMBOL_STR(glue_xts_crypt_128bit) },
	{ 0x18ccf549, __VMLINUX_SYMBOL_STR(lrw_camellia_exit_tfm) },
	{ 0x58c21dd0, __VMLINUX_SYMBOL_STR(xts_camellia_setkey) },
	{ 0x31bbe42b, __VMLINUX_SYMBOL_STR(camellia_crypt_ctr_2way) },
	{ 0x898bcfb6, __VMLINUX_SYMBOL_STR(lrw_camellia_setkey) },
	{ 0x9e8086dc, __VMLINUX_SYMBOL_STR(camellia_ctr_16way) },
	{ 0x4c0672b, __VMLINUX_SYMBOL_STR(glue_ctr_crypt_128bit) },
	{ 0xf24af0ae, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0x1da0e256, __VMLINUX_SYMBOL_STR(camellia_crypt_ctr) },
	{ 0x47129015, __VMLINUX_SYMBOL_STR(camellia_xts_enc_16way) },
	{ 0xd7d188ed, __VMLINUX_SYMBOL_STR(__ablk_encrypt) },
	{ 0x7d54edc2, __VMLINUX_SYMBOL_STR(camellia_cbc_dec_16way) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd986dad1, __VMLINUX_SYMBOL_STR(kernel_fpu_begin) },
	{ 0x30635782, __VMLINUX_SYMBOL_STR(cpu_has_xfeatures) },
	{ 0xae0ffc60, __VMLINUX_SYMBOL_STR(ablk_exit) },
	{ 0x7e87ef55, __VMLINUX_SYMBOL_STR(camellia_ecb_dec_16way) },
	{ 0x1f56e174, __VMLINUX_SYMBOL_STR(glue_cbc_decrypt_128bit) },
	{ 0x50dc55b6, __VMLINUX_SYMBOL_STR(__camellia_enc_blk_2way) },
	{ 0xda9b5d4a, __VMLINUX_SYMBOL_STR(ablk_encrypt) },
	{ 0x38722f80, __VMLINUX_SYMBOL_STR(kernel_fpu_end) },
	{ 0x767f8a41, __VMLINUX_SYMBOL_STR(ablk_init) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x930f687f, __VMLINUX_SYMBOL_STR(camellia_decrypt_cbc_2way) },
	{ 0x2e383f5a, __VMLINUX_SYMBOL_STR(ablk_set_key) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xfa07f24e, __VMLINUX_SYMBOL_STR(glue_ecb_crypt_128bit) },
	{ 0x8f185793, __VMLINUX_SYMBOL_STR(camellia_xts_dec) },
	{ 0x23f56f90, __VMLINUX_SYMBOL_STR(crypto_register_algs) },
	{ 0x8ca0a2b0, __VMLINUX_SYMBOL_STR(glue_cbc_encrypt_128bit) },
	{ 0x17bf48dc, __VMLINUX_SYMBOL_STR(camellia_xts_dec_16way) },
	{ 0xa41a5ad3, __VMLINUX_SYMBOL_STR(camellia_dec_blk) },
	{ 0x1a08ded1, __VMLINUX_SYMBOL_STR(camellia_xts_enc) },
	{ 0xe473e5ed, __VMLINUX_SYMBOL_STR(ablk_decrypt) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=camellia-x86_64,camellia-aesni-avx-x86_64,lrw,glue_helper,ablk_helper";

