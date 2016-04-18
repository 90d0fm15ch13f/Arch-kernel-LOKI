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
	{ 0xf2d7d87, __VMLINUX_SYMBOL_STR(mce_unregister_decode_chain) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xb8b2b1f7, __VMLINUX_SYMBOL_STR(mce_register_decode_chain) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xb51fbd64, __VMLINUX_SYMBOL_STR(edac_op_state) },
	{ 0x87069c73, __VMLINUX_SYMBOL_STR(edac_mc_add_mc_with_groups) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x7042c8c5, __VMLINUX_SYMBOL_STR(edac_mc_alloc) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa19b5331, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0xeb8cc104, __VMLINUX_SYMBOL_STR(pci_dev_get) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xcdd142a3, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x48d764f2, __VMLINUX_SYMBOL_STR(edac_mc_free) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x14cade97, __VMLINUX_SYMBOL_STR(edac_mc_del_mc) },
	{ 0x8c646600, __VMLINUX_SYMBOL_STR(edac_report_status) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x358fb4cb, __VMLINUX_SYMBOL_STR(edac_mc_handle_error) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xcd265af1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=edac_core";

MODULE_ALIAS("pci:v00008086d00003CA0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000EA8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002FA0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00006FA0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000782Asv*sd*bc*sc*i*");
