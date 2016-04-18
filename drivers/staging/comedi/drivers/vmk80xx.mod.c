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
	{ 0xc4f8006e, __VMLINUX_SYMBOL_STR(comedi_usb_auto_unconfig) },
	{ 0xc2f95ac5, __VMLINUX_SYMBOL_STR(comedi_usb_driver_unregister) },
	{ 0x3be60d39, __VMLINUX_SYMBOL_STR(comedi_usb_driver_register) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xdb2044b2, __VMLINUX_SYMBOL_STR(range_unipolar5) },
	{ 0x6566f328, __VMLINUX_SYMBOL_STR(comedi_alloc_subdevices) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xcbbeac12, __VMLINUX_SYMBOL_STR(comedi_alloc_devpriv) },
	{ 0xbb7d3182, __VMLINUX_SYMBOL_STR(comedi_dio_update_state) },
	{ 0xb678366f, __VMLINUX_SYMBOL_STR(int_sqrt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xff0f718c, __VMLINUX_SYMBOL_STR(comedi_to_usb_interface) },
	{ 0x78e739aa, __VMLINUX_SYMBOL_STR(up) },
	{ 0x6dc6dd56, __VMLINUX_SYMBOL_STR(down) },
	{ 0xb5a9210, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0xfe632894, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x48b9c0f3, __VMLINUX_SYMBOL_STR(comedi_to_usb_dev) },
	{ 0x23e6f55a, __VMLINUX_SYMBOL_STR(comedi_usb_auto_config) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi_usb,comedi,usbcore";

MODULE_ALIAS("usb:v10CFp5500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10CFp5501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10CFp5502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10CFp5503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10CFp8061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10CFp8062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10CFp8063d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10CFp8064d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10CFp8065d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10CFp8066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10CFp8067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10CFp8068d*dc*dsc*dp*ic*isc*ip*in*");
