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
	{ 0x87475bfe, __VMLINUX_SYMBOL_STR(agp_generic_insert_memory) },
	{ 0x1240ccf1, __VMLINUX_SYMBOL_STR(agp_generic_free_gatt_table) },
	{ 0x58fa8433, __VMLINUX_SYMBOL_STR(agp_generic_create_gatt_table) },
	{ 0xa4d4f0e6, __VMLINUX_SYMBOL_STR(global_cache_flush) },
	{ 0x34ecb06c, __VMLINUX_SYMBOL_STR(agp_generic_mask_memory) },
	{ 0x8fb1f40, __VMLINUX_SYMBOL_STR(agp_generic_enable) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x7538b132, __VMLINUX_SYMBOL_STR(agp_off) },
	{ 0x685f4eac, __VMLINUX_SYMBOL_STR(dev_emerg) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x88387165, __VMLINUX_SYMBOL_STR(pci_assign_resource) },
	{ 0x16a1d1cc, __VMLINUX_SYMBOL_STR(agp_add_bridge) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x8e6ce53f, __VMLINUX_SYMBOL_STR(intel_gmch_probe) },
	{ 0x649b5df7, __VMLINUX_SYMBOL_STR(agp_alloc_bridge) },
	{ 0x3adc97d6, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0xcd265af1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x5c912edc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xa0868027, __VMLINUX_SYMBOL_STR(pcibios_resource_to_bus) },
	{ 0xe8109543, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x339b4475, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2b227e8a, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xedaa19a7, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x2b6342ee, __VMLINUX_SYMBOL_STR(agp_bridge) },
	{ 0xf74a620a, __VMLINUX_SYMBOL_STR(agp_put_bridge) },
	{ 0xb2f74fb6, __VMLINUX_SYMBOL_STR(intel_gmch_remove) },
	{ 0x6c6129f6, __VMLINUX_SYMBOL_STR(agp_remove_bridge) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=intel-gtt";

MODULE_ALIAS("pci:v00008086d00001237sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00007180sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00007190sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d000071A0sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00007120sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00007122sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00007124sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00001130sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002500sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002501sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00003575sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00001A21sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00001A30sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002560sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002530sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d0000358Csv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00003340sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00003580sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002531sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002570sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002578sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002550sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d0000255Dsv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002588sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002580sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002590sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002770sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d000027A0sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d000027ACsv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d0000A010sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d0000A000sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002970sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002980sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002990sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d000029A0sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002A00sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002A10sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d000029C0sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d000029B0sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d000029D0sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002A40sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002E00sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002E10sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002E20sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002E30sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002E40sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00002E90sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00000040sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00000069sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00000044sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d00000062sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00008086d0000006Asv*sd*bc06sc00i00*");
