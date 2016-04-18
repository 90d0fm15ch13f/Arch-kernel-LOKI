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
	{ 0xbb7d3182, __VMLINUX_SYMBOL_STR(comedi_dio_update_state) },
	{ 0xbdbe75c6, __VMLINUX_SYMBOL_STR(range_unipolar2_5) },
	{ 0x6410a679, __VMLINUX_SYMBOL_STR(comedi_alloc_subdev_readback) },
	{ 0xbb52fc7f, __VMLINUX_SYMBOL_STR(range_bipolar10) },
	{ 0xdb2044b2, __VMLINUX_SYMBOL_STR(range_unipolar5) },
	{ 0x6566f328, __VMLINUX_SYMBOL_STR(comedi_alloc_subdevices) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x842071e3, __VMLINUX_SYMBOL_STR(usb_reset_configuration) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xcbbeac12, __VMLINUX_SYMBOL_STR(comedi_alloc_devpriv) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfe632894, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x48b9c0f3, __VMLINUX_SYMBOL_STR(comedi_to_usb_dev) },
	{ 0xff0f718c, __VMLINUX_SYMBOL_STR(comedi_to_usb_interface) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x59253649, __VMLINUX_SYMBOL_STR(comedi_readback_insn_read) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x23e6f55a, __VMLINUX_SYMBOL_STR(comedi_usb_auto_config) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi_usb,comedi,usbcore";

MODULE_ALIAS("usb:v0867p9812d*dc*dsc*dp*ic*isc*ip*in*");
