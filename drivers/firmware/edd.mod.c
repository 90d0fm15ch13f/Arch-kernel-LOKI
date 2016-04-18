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
	{ 0xb2653640, __VMLINUX_SYMBOL_STR(kset_unregister) },
	{ 0x65bcd022, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x8c886110, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xcdd142a3, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x93b3f2a6, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x9589b005, __VMLINUX_SYMBOL_STR(pci_get_domain_bus_and_slot) },
	{ 0x8be20f22, __VMLINUX_SYMBOL_STR(sysfs_create_file_ns) },
	{ 0x7a9bdd3b, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x45be7858, __VMLINUX_SYMBOL_STR(kset_create_and_add) },
	{ 0x6505c25b, __VMLINUX_SYMBOL_STR(firmware_kobj) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x607b34f1, __VMLINUX_SYMBOL_STR(edd) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "A6BC7840E69F0F201A4F1B2");