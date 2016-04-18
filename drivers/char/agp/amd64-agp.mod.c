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
	{ 0x10d0068c, __VMLINUX_SYMBOL_STR(agp_generic_type_to_mask_type) },
	{ 0x39b2ecde, __VMLINUX_SYMBOL_STR(agp_generic_destroy_pages) },
	{ 0x19a63858, __VMLINUX_SYMBOL_STR(agp_generic_destroy_page) },
	{ 0xb3ca4c77, __VMLINUX_SYMBOL_STR(agp_generic_alloc_pages) },
	{ 0x62f17287, __VMLINUX_SYMBOL_STR(agp_generic_alloc_page) },
	{ 0x74474445, __VMLINUX_SYMBOL_STR(agp_generic_free_by_type) },
	{ 0x27b9fcde, __VMLINUX_SYMBOL_STR(agp_generic_alloc_by_type) },
	{ 0x7c93ba8a, __VMLINUX_SYMBOL_STR(agp_generic_remove_memory) },
	{ 0x1240ccf1, __VMLINUX_SYMBOL_STR(agp_generic_free_gatt_table) },
	{ 0x58fa8433, __VMLINUX_SYMBOL_STR(agp_generic_create_gatt_table) },
	{ 0x34ecb06c, __VMLINUX_SYMBOL_STR(agp_generic_mask_memory) },
	{ 0x8fb1f40, __VMLINUX_SYMBOL_STR(agp_generic_enable) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x4acd93d3, __VMLINUX_SYMBOL_STR(release_resource) },
	{ 0x4fa0dd97, __VMLINUX_SYMBOL_STR(driver_attach) },
	{ 0x3145216f, __VMLINUX_SYMBOL_STR(pci_dev_present) },
	{ 0xaf611eac, __VMLINUX_SYMBOL_STR(amd_nb_misc_ids) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xc5d9c46c, __VMLINUX_SYMBOL_STR(agp_try_unsupported_boot) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x7538b132, __VMLINUX_SYMBOL_STR(agp_off) },
	{ 0x16a1d1cc, __VMLINUX_SYMBOL_STR(agp_add_bridge) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa0868027, __VMLINUX_SYMBOL_STR(pcibios_resource_to_bus) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x2b227e8a, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xd919806a, __VMLINUX_SYMBOL_STR(amd_cache_northbridges) },
	{ 0x649b5df7, __VMLINUX_SYMBOL_STR(agp_alloc_bridge) },
	{ 0x3adc97d6, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x15b0606e, __VMLINUX_SYMBOL_STR(e820_any_mapped) },
	{ 0x49581969, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xa4d4f0e6, __VMLINUX_SYMBOL_STR(global_cache_flush) },
	{ 0xd6feefa5, __VMLINUX_SYMBOL_STR(agp_num_entries) },
	{ 0xf74a620a, __VMLINUX_SYMBOL_STR(agp_put_bridge) },
	{ 0x6c6129f6, __VMLINUX_SYMBOL_STR(agp_remove_bridge) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x69a358a6, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0xf6a9feb8, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x2d09eb2b, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0xf9a516bb, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xbcb838a1, __VMLINUX_SYMBOL_STR(amd_flush_garts) },
	{ 0xedaa19a7, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xcdd142a3, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xe8fa44fc, __VMLINUX_SYMBOL_STR(pci_get_slot) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2b6342ee, __VMLINUX_SYMBOL_STR(agp_bridge) },
	{ 0xcd265af1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xf825f5a6, __VMLINUX_SYMBOL_STR(amd_northbridges) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001022d00007454sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v000010B9d00001689sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000282sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003188sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000204sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000336sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000238sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d0000B188sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v000010DEd000000D1sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v000010DEd000000E1sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000755sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000760sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v000010B9d00001695sv*sd*bc06sc00i00*");
