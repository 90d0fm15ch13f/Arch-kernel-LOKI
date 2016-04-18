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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5e862211, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xcb70da6e, __VMLINUX_SYMBOL_STR(comedi_driver_unregister) },
	{ 0x949c1ffa, __VMLINUX_SYMBOL_STR(comedi_driver_register) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdb2044b2, __VMLINUX_SYMBOL_STR(range_unipolar5) },
	{ 0x6566f328, __VMLINUX_SYMBOL_STR(comedi_alloc_subdevices) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd6b75149, __VMLINUX_SYMBOL_STR(comedi_find_subdevice_by_type) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x7c2d098f, __VMLINUX_SYMBOL_STR(krealloc) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x72b391a8, __VMLINUX_SYMBOL_STR(comedi_get_n_channels) },
	{ 0x33e37483, __VMLINUX_SYMBOL_STR(comedi_open) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xcbbeac12, __VMLINUX_SYMBOL_STR(comedi_alloc_devpriv) },
	{ 0x4f91e066, __VMLINUX_SYMBOL_STR(comedi_dio_bitfield2) },
	{ 0xc1972afd, __VMLINUX_SYMBOL_STR(comedi_dio_config) },
	{ 0x4d487756, __VMLINUX_SYMBOL_STR(comedi_dio_get_config) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xeed8a880, __VMLINUX_SYMBOL_STR(comedi_close) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi,kcomedilib";

