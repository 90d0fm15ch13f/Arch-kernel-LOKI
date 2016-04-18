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
	{ 0x2c01b47e, __VMLINUX_SYMBOL_STR(saa7134_ts_unregister) },
	{ 0xc7cf6852, __VMLINUX_SYMBOL_STR(saa7134_ts_register) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xcf14c2f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x1992e6a3, __VMLINUX_SYMBOL_STR(vb2_dvb_register_bus) },
	{ 0x4e83446, __VMLINUX_SYMBOL_STR(saa7134_tuner_callback) },
	{ 0x59cf7dd4, __VMLINUX_SYMBOL_STR(vb2_dvb_dealloc_frontends) },
	{ 0x5c6ccbef, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0x612edd73, __VMLINUX_SYMBOL_STR(vb2_dma_sg_memops) },
	{ 0xb7540b71, __VMLINUX_SYMBOL_STR(saa7134_ts_qops) },
	{ 0xadeace0e, __VMLINUX_SYMBOL_STR(vb2_dvb_alloc_frontend) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x21d945b4, __VMLINUX_SYMBOL_STR(saa7134_set_gpio) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xebb51a8d, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0x3a7fcb82, __VMLINUX_SYMBOL_STR(vb2_dvb_unregister_bus) },
	{ 0xfe0993d1, __VMLINUX_SYMBOL_STR(vb2_dvb_get_frontend) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x944907a1, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=saa7134,videobuf2-dvb,videobuf2-v4l2,videobuf2-dma-sg";

