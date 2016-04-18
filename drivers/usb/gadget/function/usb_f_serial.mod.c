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
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x84697d24, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0xe64c83c3, __VMLINUX_SYMBOL_STR(gserial_connect) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x1b7fe38c, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0xc08f519b, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x625d7654, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0x6aa77a56, __VMLINUX_SYMBOL_STR(gserial_disconnect) },
	{ 0x7eb6055d, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x33bfdca2, __VMLINUX_SYMBOL_STR(gserial_alloc_line) },
	{ 0xd9c0ba04, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x33ba4ae3, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb6652875, __VMLINUX_SYMBOL_STR(gserial_free_line) },
	{ 0xde36c70e, __VMLINUX_SYMBOL_STR(usb_string_id) },
	{ 0xef96bf75, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x8bb48ba6, __VMLINUX_SYMBOL_STR(usb_interface_id) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_serial";

