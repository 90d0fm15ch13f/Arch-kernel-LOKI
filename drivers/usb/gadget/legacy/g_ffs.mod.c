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
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x6947cf01, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0xbbad9800, __VMLINUX_SYMBOL_STR(param_ops_byte) },
	{ 0xbb1e4046, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x1a995d81, __VMLINUX_SYMBOL_STR(ffs_name_dev) },
	{ 0x9f5648e6, __VMLINUX_SYMBOL_STR(ffs_single_dev) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x32c28fd0, __VMLINUX_SYMBOL_STR(usb_composite_probe) },
	{ 0xe48c44c4, __VMLINUX_SYMBOL_STR(usb_remove_function) },
	{ 0xec82d7a8, __VMLINUX_SYMBOL_STR(usb_add_function) },
	{ 0xb25ada23, __VMLINUX_SYMBOL_STR(usb_get_function) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xae12d784, __VMLINUX_SYMBOL_STR(usb_composite_overwrite_options) },
	{ 0x9ea85de1, __VMLINUX_SYMBOL_STR(usb_add_config) },
	{ 0x353bb8dc, __VMLINUX_SYMBOL_STR(usb_string_ids_tab) },
	{ 0x75a888d1, __VMLINUX_SYMBOL_STR(rndis_borrow_net) },
	{ 0x4f806f09, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0x9ea74df2, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0xfbfd5923, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0xbdb7850e, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0x93abe29a, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0xbdd8f704, __VMLINUX_SYMBOL_STR(usb_get_function_instance) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc08f519b, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x582aebae, __VMLINUX_SYMBOL_STR(usb_put_function) },
	{ 0x1f7d4df7, __VMLINUX_SYMBOL_STR(usb_composite_unregister) },
	{ 0x419d3f61, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb_f_fs,libcomposite,usb_f_rndis,u_ether";

