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
	{ 0x8f02ac4d, __VMLINUX_SYMBOL_STR(glue_xts_crypt_128bit_one) },
	{ 0xbed9ed16, __VMLINUX_SYMBOL_STR(crypto_unregister_algs) },
	{ 0x42220bb3, __VMLINUX_SYMBOL_STR(crypto_ablkcipher_type) },
	{ 0xeab93021, __VMLINUX_SYMBOL_STR(lrw_crypt) },
	{ 0x417886ae, __VMLINUX_SYMBOL_STR(glue_xts_crypt_128bit) },
	{ 0xee83a4f3, __VMLINUX_SYMBOL_STR(cast_s4) },
	{ 0x8aa6fb7, __VMLINUX_SYMBOL_STR(cast_s1) },
	{ 0x4c0672b, __VMLINUX_SYMBOL_STR(glue_ctr_crypt_128bit) },
	{ 0xf24af0ae, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0xcd074900, __VMLINUX_SYMBOL_STR(lrw_init_table) },
	{ 0xe39dd4b4, __VMLINUX_SYMBOL_STR(cast_s2) },
	{ 0x1291971c, __VMLINUX_SYMBOL_STR(__cast6_setkey) },
	{ 0xd7d188ed, __VMLINUX_SYMBOL_STR(__ablk_encrypt) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd986dad1, __VMLINUX_SYMBOL_STR(kernel_fpu_begin) },
	{ 0x30635782, __VMLINUX_SYMBOL_STR(cpu_has_xfeatures) },
	{ 0x8f04034a, __VMLINUX_SYMBOL_STR(__cast6_encrypt) },
	{ 0xae0ffc60, __VMLINUX_SYMBOL_STR(ablk_exit) },
	{ 0x1f56e174, __VMLINUX_SYMBOL_STR(glue_cbc_decrypt_128bit) },
	{ 0xda9b5d4a, __VMLINUX_SYMBOL_STR(ablk_encrypt) },
	{ 0x38722f80, __VMLINUX_SYMBOL_STR(kernel_fpu_end) },
	{ 0x767f8a41, __VMLINUX_SYMBOL_STR(ablk_init) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2e383f5a, __VMLINUX_SYMBOL_STR(ablk_set_key) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xfa07f24e, __VMLINUX_SYMBOL_STR(glue_ecb_crypt_128bit) },
	{ 0x3864eb66, __VMLINUX_SYMBOL_STR(lrw_free_table) },
	{ 0x23f56f90, __VMLINUX_SYMBOL_STR(crypto_register_algs) },
	{ 0x8ca0a2b0, __VMLINUX_SYMBOL_STR(glue_cbc_encrypt_128bit) },
	{ 0xf0f1d89b, __VMLINUX_SYMBOL_STR(cast6_setkey) },
	{ 0xc5fbf8a, __VMLINUX_SYMBOL_STR(cast_s3) },
	{ 0xe473e5ed, __VMLINUX_SYMBOL_STR(ablk_decrypt) },
	{ 0x1e2c961f, __VMLINUX_SYMBOL_STR(__cast6_decrypt) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=glue_helper,lrw,cast_common,cast6_generic,ablk_helper";

