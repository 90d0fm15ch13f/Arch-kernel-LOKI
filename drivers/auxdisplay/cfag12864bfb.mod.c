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
	{ 0x15f98235, __VMLINUX_SYMBOL_STR(sys_imageblit) },
	{ 0x8348eb15, __VMLINUX_SYMBOL_STR(sys_copyarea) },
	{ 0xc16b4743, __VMLINUX_SYMBOL_STR(sys_fillrect) },
	{ 0xa31c26f4, __VMLINUX_SYMBOL_STR(fb_sys_write) },
	{ 0xe8101219, __VMLINUX_SYMBOL_STR(fb_sys_read) },
	{ 0xecb2e5d, __VMLINUX_SYMBOL_STR(cfag12864b_disable) },
	{ 0x14a4e0b4, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x879dcb22, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0xe260d833, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x2232533c, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x3389f926, __VMLINUX_SYMBOL_STR(cfag12864b_enable) },
	{ 0x2ff9464, __VMLINUX_SYMBOL_STR(cfag12864b_isinited) },
	{ 0xd786f5e8, __VMLINUX_SYMBOL_STR(vm_insert_page) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8ac9bd71, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0xc48e9d95, __VMLINUX_SYMBOL_STR(cfag12864b_buffer) },
	{ 0x846a4eda, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0xdeae2349, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0x1bb67b39, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sysimgblt,syscopyarea,sysfillrect,fb_sys_fops,cfag12864b";

