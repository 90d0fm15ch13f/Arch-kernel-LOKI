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
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x47f99642, __VMLINUX_SYMBOL_STR(v4l2_subdev_querymenu) },
	{ 0xa8c91e7a, __VMLINUX_SYMBOL_STR(v4l2_subdev_try_ext_ctrls) },
	{ 0x1d813390, __VMLINUX_SYMBOL_STR(v4l2_subdev_s_ext_ctrls) },
	{ 0xb82e558e, __VMLINUX_SYMBOL_STR(v4l2_subdev_g_ext_ctrls) },
	{ 0x1bfbb3ec, __VMLINUX_SYMBOL_STR(v4l2_subdev_s_ctrl) },
	{ 0xd5b23565, __VMLINUX_SYMBOL_STR(v4l2_subdev_g_ctrl) },
	{ 0x650323a9, __VMLINUX_SYMBOL_STR(v4l2_subdev_queryctrl) },
	{ 0xb1181af, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x8b705af2, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xbad40823, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x35e41fb3, __VMLINUX_SYMBOL_STR(v4l2_ctrl_auto_cluster) },
	{ 0x836a4033, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x888dcdf4, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xaa0684fb, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x28aedab2, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_log_status) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1bc05b6, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x93780674, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x468937ed, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x455725fc, __VMLINUX_SYMBOL_STR(v4l2_device_unregister_subdev) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,v4l2-common";

MODULE_ALIAS("i2c:saa7115_auto");
MODULE_ALIAS("i2c:saa7111");
MODULE_ALIAS("i2c:saa7113");
MODULE_ALIAS("i2c:saa7114");
MODULE_ALIAS("i2c:saa7115");
MODULE_ALIAS("i2c:saa7118");
MODULE_ALIAS("i2c:gm7113c");
