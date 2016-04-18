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
	{ 0x3cc93a0d, __VMLINUX_SYMBOL_STR(line6_resume) },
	{ 0x97009ff8, __VMLINUX_SYMBOL_STR(line6_probe) },
	{ 0x44030260, __VMLINUX_SYMBOL_STR(line6_init_midi) },
	{ 0x599fdf0f, __VMLINUX_SYMBOL_STR(line6_disconnect) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xa38733, __VMLINUX_SYMBOL_STR(line6_init_pcm) },
	{ 0x2b83bc9, __VMLINUX_SYMBOL_STR(line6_suspend) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x558a08, __VMLINUX_SYMBOL_STR(snd_card_register) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-usb-line6,usbcore,snd";

MODULE_ALIAS("usb:v0E41p5057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p5058d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p414Dd*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p414Dd*dc*dsc*dp*ic*isc*ip*in01*");
