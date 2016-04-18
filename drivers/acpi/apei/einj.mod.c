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
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xd2c58ab2, __VMLINUX_SYMBOL_STR(apei_exec_noop) },
	{ 0xfc968c8b, __VMLINUX_SYMBOL_STR(apei_exec_write_register_value) },
	{ 0x33b96e5d, __VMLINUX_SYMBOL_STR(apei_exec_write_register) },
	{ 0x3b7145bb, __VMLINUX_SYMBOL_STR(apei_exec_read_register_value) },
	{ 0x6c1251fd, __VMLINUX_SYMBOL_STR(apei_exec_read_register) },
	{ 0xb97785f1, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x8e9ddd80, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x723b74aa, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x899a0bf4, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0xb01e5748, __VMLINUX_SYMBOL_STR(simple_attr_write) },
	{ 0x10e5903f, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0xb38cc013, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xce53df1d, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x7dd1e8b1, __VMLINUX_SYMBOL_STR(debugfs_create_blob) },
	{ 0x92a5cf9d, __VMLINUX_SYMBOL_STR(debugfs_create_x64) },
	{ 0xb10cf5cc, __VMLINUX_SYMBOL_STR(debugfs_create_x32) },
	{ 0xc04b21bd, __VMLINUX_SYMBOL_STR(acpi_os_unmap_iomem) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8d9fa235, __VMLINUX_SYMBOL_STR(acpi_os_map_iomem) },
	{ 0x16c745d, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xa56e18e4, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x5d55b49e, __VMLINUX_SYMBOL_STR(apei_get_debugfs_dir) },
	{ 0x2dedc4c2, __VMLINUX_SYMBOL_STR(acpi_format_exception) },
	{ 0x81472677, __VMLINUX_SYMBOL_STR(acpi_get_table) },
	{ 0x1a45cb6c, __VMLINUX_SYMBOL_STR(acpi_disabled) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x3386efc1, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xfc03d97a, __VMLINUX_SYMBOL_STR(page_is_ram) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf51ae235, __VMLINUX_SYMBOL_STR(touch_nmi_watchdog) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x635ec980, __VMLINUX_SYMBOL_STR(apei_exec_post_unmap_gars) },
	{ 0xb52e502, __VMLINUX_SYMBOL_STR(apei_resources_add) },
	{ 0xe13cb4d, __VMLINUX_SYMBOL_STR(apei_resources_release) },
	{ 0x279cb985, __VMLINUX_SYMBOL_STR(apei_exec_pre_map_gars) },
	{ 0xef1f6e23, __VMLINUX_SYMBOL_STR(apei_resources_request) },
	{ 0x17614bf3, __VMLINUX_SYMBOL_STR(apei_resources_sub) },
	{ 0x74457e56, __VMLINUX_SYMBOL_STR(apei_resources_fini) },
	{ 0x94c318be, __VMLINUX_SYMBOL_STR(apei_exec_collect_resources) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x68c7263, __VMLINUX_SYMBOL_STR(ioremap_cache) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x69a358a6, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xeb370805, __VMLINUX_SYMBOL_STR(__apei_exec_run) },
	{ 0x8956aeae, __VMLINUX_SYMBOL_STR(apei_exec_ctx_init) },
	{ 0x82df4c21, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

