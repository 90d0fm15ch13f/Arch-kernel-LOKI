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
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x40110c6e, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x8fbd2922, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xca62b868, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xa08727e7, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0x3369cba9, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xd2dc9b40, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x4056b6b9, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0xd2669c41, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xeae2cb29, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8b602d0, __VMLINUX_SYMBOL_STR(v4l2_device_register_subdev) },
	{ 0x57c9a5f0, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x2974e6b2, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xa33e8b13, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xb59704da, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev";


MODULE_INFO(srcversion, "555737BC92425AFC6D9EE14");
