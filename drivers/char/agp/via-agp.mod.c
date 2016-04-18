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
	{ 0xc65abeb7, __VMLINUX_SYMBOL_STR(agp3_generic_sizes) },
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
	{ 0x16a1d1cc, __VMLINUX_SYMBOL_STR(agp_add_bridge) },
	{ 0x58336855, __VMLINUX_SYMBOL_STR(get_agp_version) },
	{ 0x649b5df7, __VMLINUX_SYMBOL_STR(agp_alloc_bridge) },
	{ 0x3adc97d6, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0xf74a620a, __VMLINUX_SYMBOL_STR(agp_put_bridge) },
	{ 0x6c6129f6, __VMLINUX_SYMBOL_STR(agp_remove_bridge) },
	{ 0xf9a516bb, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x49581969, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xf6a9feb8, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xa0868027, __VMLINUX_SYMBOL_STR(pcibios_resource_to_bus) },
	{ 0x2b227e8a, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5c912edc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xe8109543, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xedaa19a7, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xcd265af1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x2b6342ee, __VMLINUX_SYMBOL_STR(agp_bridge) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001106d00000597sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000598sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000501sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000601sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000691sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000391sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003091sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003156sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003112sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000305sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003128sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003099sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003101sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003116sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003123sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003189sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000605sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003148sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003168sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000198sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003205sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000258sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000308sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00003208sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000259sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000269sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d0000B198sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000296sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000314sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000324sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000327sv*sd*bc06sc00i00*");
MODULE_ALIAS("pci:v00001106d00000364sv*sd*bc06sc00i00*");
