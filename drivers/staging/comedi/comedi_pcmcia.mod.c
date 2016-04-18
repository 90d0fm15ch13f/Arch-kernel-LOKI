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
	{ 0xe7578024, __VMLINUX_SYMBOL_STR(pcmcia_enable_device) },
	{ 0x949c1ffa, __VMLINUX_SYMBOL_STR(comedi_driver_register) },
	{ 0x7ce1fbc4, __VMLINUX_SYMBOL_STR(comedi_auto_config) },
	{ 0x94e180a2, __VMLINUX_SYMBOL_STR(pcmcia_register_driver) },
	{ 0x81e69548, __VMLINUX_SYMBOL_STR(comedi_auto_unconfig) },
	{ 0xc2f5bfc, __VMLINUX_SYMBOL_STR(pcmcia_request_io) },
	{ 0xcb70da6e, __VMLINUX_SYMBOL_STR(comedi_driver_unregister) },
	{ 0x61ac9c9, __VMLINUX_SYMBOL_STR(pcmcia_loop_config) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xca807607, __VMLINUX_SYMBOL_STR(pcmcia_unregister_driver) },
	{ 0xcb4626b0, __VMLINUX_SYMBOL_STR(pcmcia_disable_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pcmcia,comedi";

