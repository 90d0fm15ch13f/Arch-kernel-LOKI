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
	{ 0xcaf0ea4b, __VMLINUX_SYMBOL_STR(ufshcd_runtime_suspend) },
	{ 0xbdf58c59, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x276d6cf1, __VMLINUX_SYMBOL_STR(ufshcd_alloc_host) },
	{ 0x9d4a0a9f, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0xaf08f4db, __VMLINUX_SYMBOL_STR(ufshcd_system_suspend) },
	{ 0x54609a2a, __VMLINUX_SYMBOL_STR(ufshcd_init) },
	{ 0x9301984c, __VMLINUX_SYMBOL_STR(ufshcd_system_resume) },
	{ 0xb317b2c6, __VMLINUX_SYMBOL_STR(ufshcd_shutdown) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7ac5b890, __VMLINUX_SYMBOL_STR(ufshcd_runtime_idle) },
	{ 0x7267942f, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdbc6ce14, __VMLINUX_SYMBOL_STR(ufshcd_runtime_resume) },
	{ 0x79fc2151, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd5957482, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3184dff8, __VMLINUX_SYMBOL_STR(ufshcd_dealloc_host) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1df660c1, __VMLINUX_SYMBOL_STR(platform_get_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ufshcd";


MODULE_INFO(srcversion, "ADECE07DE5A1743FB9F78E1");
