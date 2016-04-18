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
	{ 0xb7a3febb, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x54f8a529, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0x3e1d812e, __VMLINUX_SYMBOL_STR(cx8802_unregister_driver) },
	{ 0x5efb3d29, __VMLINUX_SYMBOL_STR(cx8802_register_driver) },
	{ 0x1992e6a3, __VMLINUX_SYMBOL_STR(vb2_dvb_register_bus) },
	{ 0x6141c8c5, __VMLINUX_SYMBOL_STR(cx88_tuner_callback) },
	{ 0x59cf7dd4, __VMLINUX_SYMBOL_STR(vb2_dvb_dealloc_frontends) },
	{ 0x5c6ccbef, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0x612edd73, __VMLINUX_SYMBOL_STR(vb2_dma_sg_memops) },
	{ 0xadeace0e, __VMLINUX_SYMBOL_STR(vb2_dvb_alloc_frontend) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x6317a067, __VMLINUX_SYMBOL_STR(vp3054_i2c_probe) },
	{ 0xff370a9a, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0x3a6284d1, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x25491198, __VMLINUX_SYMBOL_STR(cx88_setup_xc3028) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa85aa0ad, __VMLINUX_SYMBOL_STR(cx8802_get_driver) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd36cf6aa, __VMLINUX_SYMBOL_STR(vb2_dvb_find_frontend) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x944907a1, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x8e6adf77, __VMLINUX_SYMBOL_STR(cx8802_buf_prepare) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x505e7e5b, __VMLINUX_SYMBOL_STR(cx8802_start_dma) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9ff713cb, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8bda0020, __VMLINUX_SYMBOL_STR(cx8802_cancel_buffers) },
	{ 0x1ab38f6d, __VMLINUX_SYMBOL_STR(cx8802_buf_queue) },
	{ 0xfe0993d1, __VMLINUX_SYMBOL_STR(vb2_dvb_get_frontend) },
	{ 0x1ab7788f, __VMLINUX_SYMBOL_STR(vp3054_i2c_remove) },
	{ 0x3a7fcb82, __VMLINUX_SYMBOL_STR(vb2_dvb_unregister_bus) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,cx8802,videobuf2-dvb,cx88xx,videobuf2-dma-sg,cx88-vp3054-i2c,dvb-core,videobuf2-core";


MODULE_INFO(srcversion, "7A4892576AF195F357D47CA");
