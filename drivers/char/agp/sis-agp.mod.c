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
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x7538b132, __VMLINUX_SYMBOL_STR(agp_off) },
	{ 0xb5c312a4, __VMLINUX_SYMBOL_STR(agp3_generic_tlbflush) },
	{ 0xc2424641, __VMLINUX_SYMBOL_STR(agp3_generic_cleanup) },
	{ 0xde9b17ed, __VMLINUX_SYMBOL_STR(agp3_generic_fetch_size) },
	{ 0x4b085dbf, __VMLINUX_SYMBOL_STR(agp3_generic_configure) },
	{ 0xc65abeb7, __VMLINUX_SYMBOL_STR(agp3_generic_sizes) },
	{ 0x16a1d1cc, __VMLINUX_SYMBOL_STR(agp_add_bridge) },
	{ 0x58336855, __VMLINUX_SYMBOL_STR(get_agp_version) },
	{ 0x649b5df7, __VMLINUX_SYMBOL_STR(agp_alloc_bridge) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x3adc97d6, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0xa19b5331, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0xb5e749a, __VMLINUX_SYMBOL_STR(agp_collect_device_status) },
	{ 0xcd265af1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf74a620a, __VMLINUX_SYMBOL_STR(agp_put_bridge) },
	{ 0x6c6129f6, __VMLINUX_SYMBOL_STR(agp_remove_bridge) },
	{ 0x2d09eb2b, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0xf9a516bb, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x5c912edc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xedaa19a7, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xa0868027, __VMLINUX_SYMBOL_STR(pcibios_resource_to_bus) },
	{ 0xe8109543, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x2b6342ee, __VMLINUX_SYMBOL_STR(agp_bridge) },
	{ 0x49581969, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xf6a9feb8, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001039d00005591sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000530sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000540sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000550sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000620sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000630sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000635sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000645sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000646sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000648sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000650sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000651sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000655sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000661sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000662sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000671sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000730sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000735sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000740sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000741sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000745sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001039d00000746sv*sd*bc06sc00i00*");
