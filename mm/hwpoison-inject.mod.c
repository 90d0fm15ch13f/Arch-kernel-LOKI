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
	{ 0x899a0bf4, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0xb01e5748, __VMLINUX_SYMBOL_STR(simple_attr_write) },
	{ 0x10e5903f, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0xb38cc013, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x1829b9ed, __VMLINUX_SYMBOL_STR(hwpoison_filter_memcg) },
	{ 0x1f1988f7, __VMLINUX_SYMBOL_STR(hwpoison_filter_flags_value) },
	{ 0x2df2c749, __VMLINUX_SYMBOL_STR(debugfs_create_u64) },
	{ 0x1edc21cb, __VMLINUX_SYMBOL_STR(hwpoison_filter_flags_mask) },
	{ 0xae6eaf93, __VMLINUX_SYMBOL_STR(hwpoison_filter_dev_minor) },
	{ 0x117c7305, __VMLINUX_SYMBOL_STR(hwpoison_filter_dev_major) },
	{ 0xe5bfd18, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0x16c745d, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xa56e18e4, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xce53df1d, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x10ba60dc, __VMLINUX_SYMBOL_STR(shake_page) },
	{ 0x748f1df7, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x3a38dc65, __VMLINUX_SYMBOL_STR(memory_failure) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd4aae24a, __VMLINUX_SYMBOL_STR(hwpoison_filter) },
	{ 0x6b6b8aab, __VMLINUX_SYMBOL_STR(PageHuge) },
	{ 0x1e000879, __VMLINUX_SYMBOL_STR(hwpoison_filter_enable) },
	{ 0xa4729c4b, __VMLINUX_SYMBOL_STR(get_hwpoison_page) },
	{ 0x4604a43a, __VMLINUX_SYMBOL_STR(mem_section) },
	{ 0xb907513f, __VMLINUX_SYMBOL_STR(unpoison_memory) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x82df4c21, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

