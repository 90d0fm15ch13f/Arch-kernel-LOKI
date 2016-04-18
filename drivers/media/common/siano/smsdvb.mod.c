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
	{ 0x68416c89, __VMLINUX_SYMBOL_STR(smscore_register_hotplug) },
	{ 0xeeb3d97b, __VMLINUX_SYMBOL_STR(smscore_get_board_id) },
	{ 0x167ee09c, __VMLINUX_SYMBOL_STR(sms_board_setup) },
	{ 0x9da54278, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x1fca5e55, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0xec4e6ac2, __VMLINUX_SYMBOL_STR(sms_board_event) },
	{ 0xd82225d7, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xbbdb5c42, __VMLINUX_SYMBOL_STR(smscore_unregister_client) },
	{ 0xff370a9a, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3c7bf0ea, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x99a81ab3, __VMLINUX_SYMBOL_STR(smsclient_sendrequest) },
	{ 0x1efa54a0, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa897fe9d, __VMLINUX_SYMBOL_STR(sms_board_lna_control) },
	{ 0x5de26614, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x296df6b1, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x1c740a9b, __VMLINUX_SYMBOL_STR(smscore_putbuffer) },
	{ 0x13a4cf07, __VMLINUX_SYMBOL_STR(smscore_unregister_hotplug) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x844539ae, __VMLINUX_SYMBOL_STR(sms_get_board) },
	{ 0xc906433a, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0xa784aef2, __VMLINUX_SYMBOL_STR(sms_board_power) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf0173dd1, __VMLINUX_SYMBOL_STR(sms_board_led_feedback) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x72e8f418, __VMLINUX_SYMBOL_STR(smscore_register_client) },
	{ 0x71a9d142, __VMLINUX_SYMBOL_STR(smscore_get_device_mode) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x73f4a9b1, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=smsmdtv,dvb-core";

