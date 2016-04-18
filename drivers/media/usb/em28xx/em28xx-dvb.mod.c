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
	{ 0x3c7bf0ea, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x147289eb, __VMLINUX_SYMBOL_STR(em28xx_unregister_extension) },
	{ 0xaac87098, __VMLINUX_SYMBOL_STR(em28xx_register_extension) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x28a82d5e, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0x73f4a9b1, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0x9da54278, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0xd82225d7, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0xc906433a, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x7fc8652c, __VMLINUX_SYMBOL_STR(em28xx_tuner_callback) },
	{ 0x419d3f61, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x8f6d00f0, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x2ea8fc01, __VMLINUX_SYMBOL_STR(em28xx_alloc_urbs) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x91e409d0, __VMLINUX_SYMBOL_STR(em28xx_setup_xc3028) },
	{ 0x4400e181, __VMLINUX_SYMBOL_STR(em28xx_init_usb_xfer) },
	{ 0x193ddacd, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xcd75ef7f, __VMLINUX_SYMBOL_STR(em28xx_free_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1fca5e55, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x3a6284d1, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0xff370a9a, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0x296df6b1, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x1efa54a0, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0xc1a83fe8, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0xa0dd51ff, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x663bb9e3, __VMLINUX_SYMBOL_STR(em28xx_uninit_usb_xfer) },
	{ 0x118e768d, __VMLINUX_SYMBOL_STR(dvb_frontend_suspend) },
	{ 0xfced8243, __VMLINUX_SYMBOL_STR(dvb_frontend_resume) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9b4a3bcc, __VMLINUX_SYMBOL_STR(em28xx_stop_urbs) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbd7942e8, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9c85825b, __VMLINUX_SYMBOL_STR(em28xx_write_reg) },
	{ 0xdf54906e, __VMLINUX_SYMBOL_STR(em28xx_gpio_set) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x6dc6dd56, __VMLINUX_SYMBOL_STR(down) },
	{ 0x78e739aa, __VMLINUX_SYMBOL_STR(up) },
	{ 0xfe502c4b, __VMLINUX_SYMBOL_STR(em28xx_write_reg_bits) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x403f9529, __VMLINUX_SYMBOL_STR(gpio_request_one) },
	{ 0xbab50c29, __VMLINUX_SYMBOL_STR(em28xx_set_mode) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5de26614, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx,dvb-core,usbcore";


MODULE_INFO(srcversion, "63FF8A468D68791394FB59D");
