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
	{ 0xaf1de8ad, __VMLINUX_SYMBOL_STR(xts_crypt) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xbed9ed16, __VMLINUX_SYMBOL_STR(crypto_unregister_algs) },
	{ 0xeab93021, __VMLINUX_SYMBOL_STR(lrw_crypt) },
	{ 0x5e752773, __VMLINUX_SYMBOL_STR(twofish_enc_blk) },
	{ 0x6b9bda7f, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x4c0672b, __VMLINUX_SYMBOL_STR(glue_ctr_crypt_128bit) },
	{ 0xf24af0ae, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0xcd074900, __VMLINUX_SYMBOL_STR(lrw_init_table) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1f56e174, __VMLINUX_SYMBOL_STR(glue_cbc_decrypt_128bit) },
	{ 0x6c3229bb, __VMLINUX_SYMBOL_STR(__twofish_setkey) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x81826569, __VMLINUX_SYMBOL_STR(twofish_setkey) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xfa07f24e, __VMLINUX_SYMBOL_STR(glue_ecb_crypt_128bit) },
	{ 0x3864eb66, __VMLINUX_SYMBOL_STR(lrw_free_table) },
	{ 0x23f56f90, __VMLINUX_SYMBOL_STR(crypto_register_algs) },
	{ 0x8ca0a2b0, __VMLINUX_SYMBOL_STR(glue_cbc_encrypt_128bit) },
	{ 0x19dc7881, __VMLINUX_SYMBOL_STR(twofish_dec_blk) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xts,lrw,twofish-x86_64,glue_helper,twofish_common";
