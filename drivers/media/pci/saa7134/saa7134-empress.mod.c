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
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x42a5a194, __VMLINUX_SYMBOL_STR(saa7134_vb2_buffer_queue) },
	{ 0x1fbadf58, __VMLINUX_SYMBOL_STR(saa7134_ts_buffer_prepare) },
	{ 0xc640f1b0, __VMLINUX_SYMBOL_STR(saa7134_ts_buffer_init) },
	{ 0xb7a3febb, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x54f8a529, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xc720e4de, __VMLINUX_SYMBOL_STR(saa7134_ts_queue_setup) },
	{ 0x2c62be90, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x8fbd2922, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xabaad1be, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0xca62b868, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xb55617f0, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x9de5b601, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0x3369cba9, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xd2dc9b40, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x4056b6b9, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x54c1c904, __VMLINUX_SYMBOL_STR(saa7134_s_frequency) },
	{ 0x46c60294, __VMLINUX_SYMBOL_STR(saa7134_g_frequency) },
	{ 0x1ecdf337, __VMLINUX_SYMBOL_STR(saa7134_s_tuner) },
	{ 0xda0cf73c, __VMLINUX_SYMBOL_STR(saa7134_g_tuner) },
	{ 0xc51e4263, __VMLINUX_SYMBOL_STR(saa7134_s_input) },
	{ 0x7dbdbcc2, __VMLINUX_SYMBOL_STR(saa7134_g_input) },
	{ 0xcaa15511, __VMLINUX_SYMBOL_STR(saa7134_enum_input) },
	{ 0xb20ee241, __VMLINUX_SYMBOL_STR(saa7134_querystd) },
	{ 0x31d1673, __VMLINUX_SYMBOL_STR(saa7134_s_std) },
	{ 0x6bd071e3, __VMLINUX_SYMBOL_STR(saa7134_g_std) },
	{ 0xee406c70, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0xe4c4ccf5, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0x2158ee2b, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0xce5f6f0a, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x639e8bee, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x6aad15bc, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0x278b27ff, __VMLINUX_SYMBOL_STR(saa7134_querycap) },
	{ 0x2c01b47e, __VMLINUX_SYMBOL_STR(saa7134_ts_unregister) },
	{ 0xc7cf6852, __VMLINUX_SYMBOL_STR(saa7134_ts_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xeae2cb29, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x5c6ccbef, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0x612edd73, __VMLINUX_SYMBOL_STR(vb2_dma_sg_memops) },
	{ 0x7526af88, __VMLINUX_SYMBOL_STR(v4l2_ctrl_add_handler) },
	{ 0x888dcdf4, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x75c66969, __VMLINUX_SYMBOL_STR(saa7134_boards) },
	{ 0x47704de7, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0xcacdeb96, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2974e6b2, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x87e8ef4d, __VMLINUX_SYMBOL_STR(saa7134_ts_start_streaming) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x94a7d688, __VMLINUX_SYMBOL_STR(saa7134_ts_stop_streaming) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x468937ed, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xebb51a8d, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0xb59704da, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=saa7134,videobuf2-v4l2,videodev,videobuf2-dma-sg";

