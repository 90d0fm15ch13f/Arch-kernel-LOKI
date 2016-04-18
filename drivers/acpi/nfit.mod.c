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
	{ 0xafc412ac, __VMLINUX_SYMBOL_STR(acpi_bus_register_driver) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2b005570, __VMLINUX_SYMBOL_STR(nd_blk_region_provider_data) },
	{ 0xbe3afb2f, __VMLINUX_SYMBOL_STR(devm_ioremap_nocache) },
	{ 0x525be907, __VMLINUX_SYMBOL_STR(nd_blk_region_to_dimm) },
	{ 0x61f4039, __VMLINUX_SYMBOL_STR(acpi_get_table_with_size) },
	{ 0xa36e196, __VMLINUX_SYMBOL_STR(nvdimm_bus_attribute_group) },
	{ 0x69a358a6, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x35bf2acd, __VMLINUX_SYMBOL_STR(nd_fletcher64) },
	{ 0xdf12a927, __VMLINUX_SYMBOL_STR(acpi_check_dsm) },
	{ 0x375a43c, __VMLINUX_SYMBOL_STR(nvdimm_attribute_group) },
	{ 0x1db7706b, __VMLINUX_SYMBOL_STR(__copy_user_nocache) },
	{ 0xb66421b2, __VMLINUX_SYMBOL_STR(acpi_str_to_uuid) },
	{ 0xf9a9540f, __VMLINUX_SYMBOL_STR(nd_blk_region_set_provider_data) },
	{ 0xfff378a, __VMLINUX_SYMBOL_STR(nvdimm_pmem_region_create) },
	{ 0x44a81d5f, __VMLINUX_SYMBOL_STR(acpi_evaluate_object) },
	{ 0xf0ef15b4, __VMLINUX_SYMBOL_STR(list_sort) },
	{ 0x54f17d35, __VMLINUX_SYMBOL_STR(acpi_bus_unregister_driver) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x1517f30c, __VMLINUX_SYMBOL_STR(nvdimm_bus_add_poison) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x905c72d4, __VMLINUX_SYMBOL_STR(nd_cmd_in_size) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x89c50b45, __VMLINUX_SYMBOL_STR(nd_numa_attribute_group) },
	{ 0xc805f93, __VMLINUX_SYMBOL_STR(clflush_cache_range) },
	{ 0xd1da8c18, __VMLINUX_SYMBOL_STR(nd_region_acquire_lane) },
	{ 0x70689c2a, __VMLINUX_SYMBOL_STR(nvdimm_provider_data) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x138c4580, __VMLINUX_SYMBOL_STR(nvdimm_volatile_region_create) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x343ae5f0, __VMLINUX_SYMBOL_STR(nd_region_attribute_group) },
	{ 0x8a2ab201, __VMLINUX_SYMBOL_STR(nvdimm_name) },
	{ 0x9e9fdd9d, __VMLINUX_SYMBOL_STR(memunmap) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x792bc904, __VMLINUX_SYMBOL_STR(nvdimm_bus_unregister) },
	{ 0xf1c346b6, __VMLINUX_SYMBOL_STR(nd_cmd_dimm_desc) },
	{ 0x2ce0f087, __VMLINUX_SYMBOL_STR(__nvdimm_bus_register) },
	{ 0x3f0e0fec, __VMLINUX_SYMBOL_STR(nd_mapping_attribute_group) },
	{ 0xe3a53f4c, __VMLINUX_SYMBOL_STR(sort) },
	{ 0xf0b384, __VMLINUX_SYMBOL_STR(nd_cmd_out_size) },
	{ 0x18c9c0d6, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0x267e9be5, __VMLINUX_SYMBOL_STR(nd_region_release_lane) },
	{ 0x1616cb30, __VMLINUX_SYMBOL_STR(acpi_evaluate_dsm) },
	{ 0xa570dd2c, __VMLINUX_SYMBOL_STR(nd_device_attribute_group) },
	{ 0x59d9253e, __VMLINUX_SYMBOL_STR(to_nd_desc) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x137ec605, __VMLINUX_SYMBOL_STR(acpi_find_child_device) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x8f47b5d0, __VMLINUX_SYMBOL_STR(to_nvdimm_bus) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x310f02ec, __VMLINUX_SYMBOL_STR(memremap) },
	{ 0x8384647a, __VMLINUX_SYMBOL_STR(acpi_map_pxm_to_online_node) },
	{ 0x8fb7f0ee, __VMLINUX_SYMBOL_STR(nvdimm_create) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7055af97, __VMLINUX_SYMBOL_STR(nvdimm_bus_check_dimm_count) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xdb2dc055, __VMLINUX_SYMBOL_STR(to_nd_region) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x36b34617, __VMLINUX_SYMBOL_STR(to_nvdimm) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x66c397f7, __VMLINUX_SYMBOL_STR(nd_cmd_bus_desc) },
	{ 0x15340440, __VMLINUX_SYMBOL_STR(nd_region_provider_data) },
	{ 0x7709009f, __VMLINUX_SYMBOL_STR(to_nd_blk_region) },
	{ 0x2cc09f58, __VMLINUX_SYMBOL_STR(nvdimm_blk_region_create) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:ACPI0012:*");
