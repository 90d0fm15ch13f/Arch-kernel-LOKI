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
	{ 0xbcd3d240, __VMLINUX_SYMBOL_STR(gameport_unregister_driver) },
	{ 0x462912b4, __VMLINUX_SYMBOL_STR(__gameport_register_driver) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x57251682, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xb3ed5ffb, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x85881d8f, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x4fd35f87, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x79b368c7, __VMLINUX_SYMBOL_STR(gameport_open) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x42c00678, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0x4b70048f, __VMLINUX_SYMBOL_STR(gameport_start_polling) },
	{ 0x42debfd3, __VMLINUX_SYMBOL_STR(gameport_stop_polling) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x922ec79a, __VMLINUX_SYMBOL_STR(gameport_close) },
	{ 0x883866e0, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gameport";
