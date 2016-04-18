#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5e862211, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xf5f718f0, __VMLINUX_SYMBOL_STR(phy_init) },
	{ 0x582b5a1, __VMLINUX_SYMBOL_STR(ata_dummy_port_ops) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4f6f6ff2, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xea50dad3, __VMLINUX_SYMBOL_STR(ahci_ignore_sss) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xbdf58c59, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0xc1193953, __VMLINUX_SYMBOL_STR(ahci_save_initial_config) },
	{ 0x47a24099, __VMLINUX_SYMBOL_STR(ata_host_suspend) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xad071e54, __VMLINUX_SYMBOL_STR(ahci_reset_em) },
	{ 0x2e1ca751, __VMLINUX_SYMBOL_STR(clk_put) },
	{ 0x9d4a0a9f, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0xd679af25, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xe3f1bb5a, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0x9597f28a, __VMLINUX_SYMBOL_STR(ata_port_desc) },
	{ 0xdaa15204, __VMLINUX_SYMBOL_STR(devres_alloc_node) },
	{ 0x7edb48b, __VMLINUX_SYMBOL_STR(ata_host_alloc_pinfo) },
	{ 0x3786b3f0, __VMLINUX_SYMBOL_STR(phy_power_off) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd1854689, __VMLINUX_SYMBOL_STR(ahci_print_info) },
	{ 0x97849624, __VMLINUX_SYMBOL_STR(devres_open_group) },
	{ 0x7705f972, __VMLINUX_SYMBOL_STR(phy_power_on) },
	{ 0x7267942f, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xf7308d7a, __VMLINUX_SYMBOL_STR(ahci_reset_controller) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2c5e725d, __VMLINUX_SYMBOL_STR(phy_exit) },
	{ 0xeb3f7f2f, __VMLINUX_SYMBOL_STR(ahci_host_activate) },
	{ 0x79fc2151, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbe2ad731, __VMLINUX_SYMBOL_STR(ahci_init_controller) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xd5957482, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xfd895908, __VMLINUX_SYMBOL_STR(devres_add) },
	{ 0x8c2eb814, __VMLINUX_SYMBOL_STR(ahci_set_em_messages) },
	{ 0xb4546cd9, __VMLINUX_SYMBOL_STR(clk_get) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x7eb7a8b, __VMLINUX_SYMBOL_STR(devm_of_phy_get) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x9d8c8fe2, __VMLINUX_SYMBOL_STR(devres_remove_group) },
	{ 0x1df660c1, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x73e7e0a2, __VMLINUX_SYMBOL_STR(devres_release_group) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x35af06da, __VMLINUX_SYMBOL_STR(ahci_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata,libahci";

