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
	{ 0x91bec164, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6e85365a, __VMLINUX_SYMBOL_STR(pci_bus_type) },
	{ 0x6031ebce, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x4acd93d3, __VMLINUX_SYMBOL_STR(release_resource) },
	{ 0x8e24fc22, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0xbc5426e8, __VMLINUX_SYMBOL_STR(pci_match_id) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x3dc7fac0, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x71bb4555, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa59e8efc, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xbe182af7, __VMLINUX_SYMBOL_STR(device_attach) },
	{ 0x1c16d6f6, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0x4fb9f94, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x8dfc89f0, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xfd0d57ff, __VMLINUX_SYMBOL_STR(device_for_each_child) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb5c97aba, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x6aca8238, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x764bd77c, __VMLINUX_SYMBOL_STR(request_resource) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

