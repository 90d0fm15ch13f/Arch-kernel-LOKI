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
	{ 0x9ea85de1, __VMLINUX_SYMBOL_STR(usb_add_config) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xbb1e4046, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xc08f519b, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xae12d784, __VMLINUX_SYMBOL_STR(usb_composite_overwrite_options) },
	{ 0x32c28fd0, __VMLINUX_SYMBOL_STR(usb_composite_probe) },
	{ 0xec82d7a8, __VMLINUX_SYMBOL_STR(usb_add_function) },
	{ 0x582aebae, __VMLINUX_SYMBOL_STR(usb_put_function) },
	{ 0x1f7d4df7, __VMLINUX_SYMBOL_STR(usb_composite_unregister) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xb25ada23, __VMLINUX_SYMBOL_STR(usb_get_function) },
	{ 0x353bb8dc, __VMLINUX_SYMBOL_STR(usb_string_ids_tab) },
	{ 0xbdd8f704, __VMLINUX_SYMBOL_STR(usb_get_function_instance) },
	{ 0x6947cf01, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite";

