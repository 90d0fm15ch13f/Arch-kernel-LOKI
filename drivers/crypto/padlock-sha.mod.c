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
	{ 0x23d4d6b9, __VMLINUX_SYMBOL_STR(crypto_unregister_shash) },
	{ 0x618c2ad5, __VMLINUX_SYMBOL_STR(crypto_register_shash) },
	{ 0x6b9bda7f, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xbec30d05, __VMLINUX_SYMBOL_STR(x86_match_cpu) },
	{ 0xed433664, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x5f4aa299, __VMLINUX_SYMBOL_STR(cpu_info) },
	{ 0x783f3d0d, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc103c892, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0x7cf4b098, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x86819bc6, __VMLINUX_SYMBOL_STR(irq_ts_restore) },
	{ 0x441fa356, __VMLINUX_SYMBOL_STR(irq_ts_save) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*00AA*");
