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
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x63aa83e3, __VMLINUX_SYMBOL_STR(devfreq_remove_governor) },
	{ 0x4285d3f9, __VMLINUX_SYMBOL_STR(devfreq_add_governor) },
	{ 0x222b6d7c, __VMLINUX_SYMBOL_STR(devfreq_monitor_suspend) },
	{ 0xa5d5f958, __VMLINUX_SYMBOL_STR(devfreq_monitor_stop) },
	{ 0x6ef08a89, __VMLINUX_SYMBOL_STR(devfreq_monitor_start) },
	{ 0xffac07c9, __VMLINUX_SYMBOL_STR(devfreq_monitor_resume) },
	{ 0xbc8b72fa, __VMLINUX_SYMBOL_STR(devfreq_interval_update) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

