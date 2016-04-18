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
	{ 0x54f17d35, __VMLINUX_SYMBOL_STR(acpi_bus_unregister_driver) },
	{ 0xafc412ac, __VMLINUX_SYMBOL_STR(acpi_bus_register_driver) },
	{ 0x7ed41a18, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x4521cc52, __VMLINUX_SYMBOL_STR(i8042_install_filter) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xdbbf91b8, __VMLINUX_SYMBOL_STR(lis3lv02d_init_device) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0x7bad7a1a, __VMLINUX_SYMBOL_STR(acpi_walk_resources) },
	{ 0xf1a3e91c, __VMLINUX_SYMBOL_STR(serio_interrupt) },
	{ 0x44a81d5f, __VMLINUX_SYMBOL_STR(acpi_evaluate_object) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x691001b5, __VMLINUX_SYMBOL_STR(acpi_evaluate_integer) },
	{ 0x7394f4bd, __VMLINUX_SYMBOL_STR(lis3lv02d_remove_fs) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0xdb02a8c6, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0xdd9e178c, __VMLINUX_SYMBOL_STR(lis3lv02d_joystick_disable) },
	{ 0x48902dbb, __VMLINUX_SYMBOL_STR(i8042_remove_filter) },
	{ 0xd7a036fe, __VMLINUX_SYMBOL_STR(lis3lv02d_poweroff) },
	{ 0xc6af20e6, __VMLINUX_SYMBOL_STR(lis3lv02d_poweron) },
	{ 0x6144470f, __VMLINUX_SYMBOL_STR(lis3_dev) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=led-class,i8042,lis3lv02d,serio";

MODULE_ALIAS("acpi*:HPQ0004:*");
MODULE_ALIAS("acpi*:HPQ6000:*");
MODULE_ALIAS("acpi*:HPQ6007:*");
