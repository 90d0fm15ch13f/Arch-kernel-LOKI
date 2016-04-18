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
	{ 0x562d730e, __VMLINUX_SYMBOL_STR(crypto_attr_alg2) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x8f02ac4d, __VMLINUX_SYMBOL_STR(glue_xts_crypt_128bit_one) },
	{ 0xe409b491, __VMLINUX_SYMBOL_STR(crypto_aes_decrypt_x86) },
	{ 0x7060bf0a, __VMLINUX_SYMBOL_STR(crypto_aes_encrypt_x86) },
	{ 0xd16712f3, __VMLINUX_SYMBOL_STR(crypto_check_attr_type) },
	{ 0xbed9ed16, __VMLINUX_SYMBOL_STR(crypto_unregister_algs) },
	{ 0x124047b7, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x42220bb3, __VMLINUX_SYMBOL_STR(crypto_ablkcipher_type) },
	{ 0xeab93021, __VMLINUX_SYMBOL_STR(lrw_crypt) },
	{ 0x1cc0fd1b, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt_block) },
	{ 0x6b9bda7f, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x417886ae, __VMLINUX_SYMBOL_STR(glue_xts_crypt_128bit) },
	{ 0x2124d861, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0x24b3851d, __VMLINUX_SYMBOL_STR(cryptd_free_aead) },
	{ 0xf24af0ae, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0x51948887, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xcd074900, __VMLINUX_SYMBOL_STR(lrw_init_table) },
	{ 0xb903674c, __VMLINUX_SYMBOL_STR(scatterwalk_map_and_copy) },
	{ 0xdc3c41a8, __VMLINUX_SYMBOL_STR(__crypto_memneq) },
	{ 0x8810ad5e, __VMLINUX_SYMBOL_STR(crypto_xor) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x24aac4d9, __VMLINUX_SYMBOL_STR(crypto_aes_expand_key) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x86fc301a, __VMLINUX_SYMBOL_STR(crypto_alloc_ablkcipher) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd986dad1, __VMLINUX_SYMBOL_STR(kernel_fpu_begin) },
	{ 0x8880032a, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x7d96cea3, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0xae0ffc60, __VMLINUX_SYMBOL_STR(ablk_exit) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x16d44a63, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0x27769b37, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0xcb8b9d08, __VMLINUX_SYMBOL_STR(ablk_init_common) },
	{ 0xda9b5d4a, __VMLINUX_SYMBOL_STR(ablk_encrypt) },
	{ 0x38722f80, __VMLINUX_SYMBOL_STR(kernel_fpu_end) },
	{ 0x767f8a41, __VMLINUX_SYMBOL_STR(ablk_init) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3d346360, __VMLINUX_SYMBOL_STR(crypto_alloc_instance) },
	{ 0x7cf4b098, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xf532339a, __VMLINUX_SYMBOL_STR(crypto_unregister_aeads) },
	{ 0x2e383f5a, __VMLINUX_SYMBOL_STR(ablk_set_key) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd7482804, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0x3864eb66, __VMLINUX_SYMBOL_STR(lrw_free_table) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x2b2c1ec2, __VMLINUX_SYMBOL_STR(crypto_register_aeads) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x23f56f90, __VMLINUX_SYMBOL_STR(crypto_register_algs) },
	{ 0x56886b19, __VMLINUX_SYMBOL_STR(scatterwalk_map) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x638e5c20, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt) },
	{ 0x424acc6d, __VMLINUX_SYMBOL_STR(scatterwalk_done) },
	{ 0x73dd54eb, __VMLINUX_SYMBOL_STR(irq_fpu_usable) },
	{ 0x8e911deb, __VMLINUX_SYMBOL_STR(cryptd_aead_child) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x7ede95b4, __VMLINUX_SYMBOL_STR(blkcipher_walk_done) },
	{ 0x45bf1ff3, __VMLINUX_SYMBOL_STR(crypto_inc) },
	{ 0x29be63dc, __VMLINUX_SYMBOL_STR(cryptd_alloc_aead) },
	{ 0xe473e5ed, __VMLINUX_SYMBOL_STR(ablk_decrypt) },
	{ 0xbec30d05, __VMLINUX_SYMBOL_STR(x86_match_cpu) },
	{ 0xfa1f4662, __VMLINUX_SYMBOL_STR(scatterwalk_start) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=glue_helper,aes-x86_64,lrw,cryptd,ablk_helper";

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0099*");
