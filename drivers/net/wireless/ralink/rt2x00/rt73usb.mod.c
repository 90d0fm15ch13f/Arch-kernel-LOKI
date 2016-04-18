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
	{ 0x41136b6e, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0x697a47c2, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0x5c11d0ce, __VMLINUX_SYMBOL_STR(rt2x00mac_get_antenna) },
	{ 0x55e30312, __VMLINUX_SYMBOL_STR(rt2x00mac_set_antenna) },
	{ 0x29e23ad, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0x761fddcb, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0x9a525d40, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0xd70f0d6f, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0x8e995bc8, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0x6446f4cf, __VMLINUX_SYMBOL_STR(rt2x00mac_set_key) },
	{ 0x34e6753, __VMLINUX_SYMBOL_STR(rt2x00mac_set_tim) },
	{ 0x5c85cc58, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0xa3cfddae, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0xa9bc1b81, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0x7d4786db, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0xced9b0a6, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x20f7465b, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0x4c7948d1, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0x67c1b3a, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0x3e77f770, __VMLINUX_SYMBOL_STR(rt2x00usb_flush_queue) },
	{ 0x59df3f63, __VMLINUX_SYMBOL_STR(rt2x00usb_kick_queue) },
	{ 0xc70ab31a, __VMLINUX_SYMBOL_STR(rt2x00usb_watchdog) },
	{ 0x388ff476, __VMLINUX_SYMBOL_STR(rt2x00usb_clear_entry) },
	{ 0x68f27c97, __VMLINUX_SYMBOL_STR(rt2x00usb_uninitialize) },
	{ 0xe2244a73, __VMLINUX_SYMBOL_STR(rt2x00usb_initialize) },
	{ 0x37a303df, __VMLINUX_SYMBOL_STR(rt2x00usb_resume) },
	{ 0x7af23995, __VMLINUX_SYMBOL_STR(rt2x00usb_suspend) },
	{ 0xa698fcd3, __VMLINUX_SYMBOL_STR(rt2x00usb_disconnect) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd29b009f, __VMLINUX_SYMBOL_STR(crc_itu_t_table) },
	{ 0x6d356209, __VMLINUX_SYMBOL_STR(crc_itu_t) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7d0231f4, __VMLINUX_SYMBOL_STR(rt2x00usb_disable_radio) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1aba42ff, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xe04bf35c, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x7e4a4f53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x6a575934, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xde58801b, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_req_buff_lock) },
	{ 0xe2c622ee, __VMLINUX_SYMBOL_STR(rt2x00usb_regbusy_read) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb6ef6830, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe641f26b, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request_buff) },
	{ 0x17ab2bed, __VMLINUX_SYMBOL_STR(rt2x00usb_probe) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,rt2x00usb,usbcore,crc-itu-t";

MODULE_ALIAS("usb:v07B8pB21Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB21Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB21Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB21Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pB21Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18C5p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1690p0722d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1723d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1724d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp705Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp905Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp905Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631pC019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00D8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00D9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00E6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p00F4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0119d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0137d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v178Dp02BEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p9022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1371p9032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C22d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp002Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C03d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C07d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7318d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392p7618d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p3701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A9p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p800Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1472p0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p4600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6874d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA874d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p7318d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp093Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2573d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2671d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0812p3101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6196d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6229d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v18E8p6238d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p4471d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p7100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p002Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p90ACd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p9712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p31F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6933p5001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p200Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB50d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7167p3840d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp001Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3415d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CAF3D53D215380FD460C870");