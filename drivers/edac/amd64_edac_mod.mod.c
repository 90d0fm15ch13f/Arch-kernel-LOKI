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
	{ 0x87069c73, __VMLINUX_SYMBOL_STR(edac_mc_add_mc_with_groups) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xcf6cfe1f, __VMLINUX_SYMBOL_STR(msrs_free) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xf6154da2, __VMLINUX_SYMBOL_STR(edac_pci_release_generic_ctl) },
	{ 0x6b9bda7f, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x3d7c1ed7, __VMLINUX_SYMBOL_STR(msrs_alloc) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xf825f5a6, __VMLINUX_SYMBOL_STR(amd_northbridges) },
	{ 0xb51fbd64, __VMLINUX_SYMBOL_STR(edac_op_state) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0xa40499f1, __VMLINUX_SYMBOL_STR(rdmsr_on_cpus) },
	{ 0x358fb4cb, __VMLINUX_SYMBOL_STR(edac_mc_handle_error) },
	{ 0x14878009, __VMLINUX_SYMBOL_STR(amd_report_gart_errors) },
	{ 0xc389e498, __VMLINUX_SYMBOL_STR(amd_register_ecc_decoder) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xedaa19a7, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x48d764f2, __VMLINUX_SYMBOL_STR(edac_mc_free) },
	{ 0xc01fe078, __VMLINUX_SYMBOL_STR(wrmsr_on_cpus) },
	{ 0x9f46ced8, __VMLINUX_SYMBOL_STR(__sw_hweight64) },
	{ 0x7042c8c5, __VMLINUX_SYMBOL_STR(edac_mc_alloc) },
	{ 0xb9b8929c, __VMLINUX_SYMBOL_STR(edac_pci_create_generic_ctl) },
	{ 0x658c8186, __VMLINUX_SYMBOL_STR(amd_get_nb_id) },
	{ 0x5e6ddbf7, __VMLINUX_SYMBOL_STR(find_mci_by_dev) },
	{ 0xcd265af1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x245ccad5, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xed433664, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd919806a, __VMLINUX_SYMBOL_STR(amd_cache_northbridges) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xd062ca76, __VMLINUX_SYMBOL_STR(amd_unregister_ecc_decoder) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xa19b5331, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0x851d63a1, __VMLINUX_SYMBOL_STR(edac_mc_find) },
	{ 0x14cade97, __VMLINUX_SYMBOL_STR(edac_mc_del_mc) },
	{ 0xcdd142a3, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=edac_core,edac_mce_amd";

MODULE_ALIAS("pci:v00001022d00001102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001602sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000141Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001572sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001532sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001582sv*sd*bc*sc*i*");
