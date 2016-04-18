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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5e862211, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x949c1ffa, __VMLINUX_SYMBOL_STR(comedi_driver_register) },
	{ 0x7ce1fbc4, __VMLINUX_SYMBOL_STR(comedi_auto_config) },
	{ 0x81e69548, __VMLINUX_SYMBOL_STR(comedi_auto_unconfig) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xcb70da6e, __VMLINUX_SYMBOL_STR(comedi_driver_unregister) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi,usbcore";
