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
	{ 0x8b8a081e, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x1e0c2be4, __VMLINUX_SYMBOL_STR(ioremap_wc) },
	{ 0x62f17287, __VMLINUX_SYMBOL_STR(agp_generic_alloc_page) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x69a358a6, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x4acd93d3, __VMLINUX_SYMBOL_STR(release_resource) },
	{ 0x8f2703b7, __VMLINUX_SYMBOL_STR(wbinvd_on_all_cpus) },
	{ 0xeb8cc104, __VMLINUX_SYMBOL_STR(pci_dev_get) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x339b4475, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x380244c0, __VMLINUX_SYMBOL_STR(pci_bus_alloc_resource) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3da171f9, __VMLINUX_SYMBOL_STR(pci_mem_start) },
	{ 0xb3ca4c77, __VMLINUX_SYMBOL_STR(agp_generic_alloc_pages) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe6303543, __VMLINUX_SYMBOL_STR(agp_create_memory) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x79e69460, __VMLINUX_SYMBOL_STR(intel_iommu_gfx_mapped) },
	{ 0xedaa19a7, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x9c491f60, __VMLINUX_SYMBOL_STR(sg_alloc_table) },
	{ 0x19a63858, __VMLINUX_SYMBOL_STR(agp_generic_destroy_page) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x79df5377, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x2b227e8a, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xcd265af1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xdc2cee13, __VMLINUX_SYMBOL_STR(set_pages_wb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xa0868027, __VMLINUX_SYMBOL_STR(pcibios_resource_to_bus) },
	{ 0x6680019b, __VMLINUX_SYMBOL_STR(set_pages_uc) },
	{ 0xa19b5331, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0xb1645a2e, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0xcdd142a3, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x3e882943, __VMLINUX_SYMBOL_STR(pcibios_align_resource) },
	{ 0xa4d4f0e6, __VMLINUX_SYMBOL_STR(global_cache_flush) },
	{ 0x764bd77c, __VMLINUX_SYMBOL_STR(request_resource) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x39b2ecde, __VMLINUX_SYMBOL_STR(agp_generic_destroy_pages) },
	{ 0xd0fef3b2, __VMLINUX_SYMBOL_STR(agp_free_key) },
	{ 0x2b6342ee, __VMLINUX_SYMBOL_STR(agp_bridge) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

