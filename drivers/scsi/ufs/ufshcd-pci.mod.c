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
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e06c47, __VMLINUX_SYMBOL_STR(pm_runtime_allow) },
	{ 0x54609a2a, __VMLINUX_SYMBOL_STR(ufshcd_init) },
	{ 0x276d6cf1, __VMLINUX_SYMBOL_STR(ufshcd_alloc_host) },
	{ 0xb411b484, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x270e8dd, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x597e7731, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x1b650c7d, __VMLINUX_SYMBOL_STR(ufshcd_remove) },
	{ 0x2d1b2c3c, __VMLINUX_SYMBOL_STR(pm_runtime_forbid) },
	{ 0xb317b2c6, __VMLINUX_SYMBOL_STR(ufshcd_shutdown) },
	{ 0xaf08f4db, __VMLINUX_SYMBOL_STR(ufshcd_system_suspend) },
	{ 0x9301984c, __VMLINUX_SYMBOL_STR(ufshcd_system_resume) },
	{ 0xcaf0ea4b, __VMLINUX_SYMBOL_STR(ufshcd_runtime_suspend) },
	{ 0xdbc6ce14, __VMLINUX_SYMBOL_STR(ufshcd_runtime_resume) },
	{ 0x7ac5b890, __VMLINUX_SYMBOL_STR(ufshcd_runtime_idle) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ufshcd";

MODULE_ALIAS("pci:v0000144Dd0000C00Csv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "9462FFE506D9063CE8BD992");
