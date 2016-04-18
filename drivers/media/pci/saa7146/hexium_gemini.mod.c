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
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x5754657a, __VMLINUX_SYMBOL_STR(saa7146_unregister_extension) },
	{ 0xe9d4f949, __VMLINUX_SYMBOL_STR(saa7146_register_extension) },
	{ 0xdf2347a8, __VMLINUX_SYMBOL_STR(saa7146_register_device) },
	{ 0x666aa566, __VMLINUX_SYMBOL_STR(saa7146_vv_init) },
	{ 0xc49c1597, __VMLINUX_SYMBOL_STR(saa7146_setgpio) },
	{ 0xb9f9ae95, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x7c472002, __VMLINUX_SYMBOL_STR(saa7146_i2c_adapter_prepare) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6ec1abd6, __VMLINUX_SYMBOL_STR(i2c_smbus_xfer) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e6e5c27, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x7d736d6a, __VMLINUX_SYMBOL_STR(saa7146_vv_release) },
	{ 0x50c404fb, __VMLINUX_SYMBOL_STR(saa7146_unregister_device) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=saa7146,saa7146_vv";

MODULE_ALIAS("pci:v00001131d00007146sv000017C8sd00002401bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000017C8sd00002402bc*sc*i*");
