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
	{ 0xdfa377f9, __VMLINUX_SYMBOL_STR(parport_ieee1284_read_byte) },
	{ 0x712f7e5f, __VMLINUX_SYMBOL_STR(parport_ieee1284_read_nibble) },
	{ 0xcd89730a, __VMLINUX_SYMBOL_STR(parport_ieee1284_write_compat) },
	{ 0xa7355936, __VMLINUX_SYMBOL_STR(parport_ieee1284_ecp_write_addr) },
	{ 0x86178e06, __VMLINUX_SYMBOL_STR(parport_ieee1284_ecp_read_data) },
	{ 0x9b8faeb0, __VMLINUX_SYMBOL_STR(parport_ieee1284_ecp_write_data) },
	{ 0x615603ae, __VMLINUX_SYMBOL_STR(parport_ieee1284_epp_read_addr) },
	{ 0x5b8357a3, __VMLINUX_SYMBOL_STR(parport_ieee1284_epp_write_addr) },
	{ 0x7727de3a, __VMLINUX_SYMBOL_STR(parport_ieee1284_epp_read_data) },
	{ 0x6739a025, __VMLINUX_SYMBOL_STR(parport_ieee1284_epp_write_data) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x54a25923, __VMLINUX_SYMBOL_STR(parport_announce_port) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x5e3a3912, __VMLINUX_SYMBOL_STR(parport_irq_handler) },
	{ 0x6271fbaf, __VMLINUX_SYMBOL_STR(parport_register_port) },
	{ 0x1df660c1, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x69a358a6, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x7267942f, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4acd93d3, __VMLINUX_SYMBOL_STR(release_resource) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x553890c4, __VMLINUX_SYMBOL_STR(parport_remove_port) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=parport";

