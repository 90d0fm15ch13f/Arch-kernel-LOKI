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
	{ 0xbdd46a85, __VMLINUX_SYMBOL_STR(line6_read_serial_number) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x2a55ce1e, __VMLINUX_SYMBOL_STR(line6_version_request_async) },
	{ 0x3cc93a0d, __VMLINUX_SYMBOL_STR(line6_resume) },
	{ 0x97009ff8, __VMLINUX_SYMBOL_STR(line6_probe) },
	{ 0x5f5cfdd7, __VMLINUX_SYMBOL_STR(line6_alloc_sysex_buffer) },
	{ 0x44030260, __VMLINUX_SYMBOL_STR(line6_init_midi) },
	{ 0x599fdf0f, __VMLINUX_SYMBOL_STR(line6_disconnect) },
	{ 0x5da68cb9, __VMLINUX_SYMBOL_STR(line6_send_sysex_message) },
	{ 0x8ec973cd, __VMLINUX_SYMBOL_STR(line6_start_timer) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x202a1b1b, __VMLINUX_SYMBOL_STR(line6_midi_id) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xc2b3d227, __VMLINUX_SYMBOL_STR(snd_card_add_dev_attr) },
	{ 0xa38733, __VMLINUX_SYMBOL_STR(line6_init_pcm) },
	{ 0x2b83bc9, __VMLINUX_SYMBOL_STR(line6_suspend) },
	{ 0xc4e9245d, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x558a08, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x83180130, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-usb-line6,usbcore,snd";

MODULE_ALIAS("usb:v0E41p4250d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4642d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4252d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p5051d*dc*dsc*dp*ic*isc*ip*in01*");
MODULE_ALIAS("usb:v0E41p5044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E41p4650d*dc*dsc*dp*ic*isc*ip*in00*");
MODULE_ALIAS("usb:v0E41p5050d*dc*dsc*dp*ic*isc*ip*in*");
