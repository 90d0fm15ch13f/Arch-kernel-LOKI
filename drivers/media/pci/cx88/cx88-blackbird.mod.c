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
	{ 0xb7a3febb, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x54f8a529, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0x2c62be90, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x8fbd2922, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xabaad1be, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0xca62b868, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xb55617f0, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x9de5b601, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0x3369cba9, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xd2dc9b40, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xee406c70, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0xe4c4ccf5, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0x2158ee2b, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0xce5f6f0a, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x639e8bee, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x6aad15bc, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0x3e1d812e, __VMLINUX_SYMBOL_STR(cx8802_unregister_driver) },
	{ 0x5efb3d29, __VMLINUX_SYMBOL_STR(cx8802_register_driver) },
	{ 0xf9b8200f, __VMLINUX_SYMBOL_STR(cx88_set_freq) },
	{ 0xeae2cb29, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x1b52929, __VMLINUX_SYMBOL_STR(cx88_vdev_init) },
	{ 0x5c6ccbef, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0x612edd73, __VMLINUX_SYMBOL_STR(vb2_dma_sg_memops) },
	{ 0x7526af88, __VMLINUX_SYMBOL_STR(v4l2_ctrl_add_handler) },
	{ 0xfb33001, __VMLINUX_SYMBOL_STR(cx2341x_handler_init) },
	{ 0x505e7e5b, __VMLINUX_SYMBOL_STR(cx8802_start_dma) },
	{ 0x173ad2ac, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xcf14c2f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x8485174b, __VMLINUX_SYMBOL_STR(cx2341x_handler_setup) },
	{ 0xed4dbced, __VMLINUX_SYMBOL_STR(cx2341x_handler_set_50hz) },
	{ 0xd5ab3a6a, __VMLINUX_SYMBOL_STR(cx88_set_scale) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9ff713cb, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa85aa0ad, __VMLINUX_SYMBOL_STR(cx8802_get_driver) },
	{ 0x8bda0020, __VMLINUX_SYMBOL_STR(cx8802_cancel_buffers) },
	{ 0x9511113c, __VMLINUX_SYMBOL_STR(cx2341x_handler_set_busy) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x417d470d, __VMLINUX_SYMBOL_STR(cx88_querycap) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0x31c96acf, __VMLINUX_SYMBOL_STR(cx88_enum_input) },
	{ 0x96f43237, __VMLINUX_SYMBOL_STR(cx88_video_mux) },
	{ 0x3b7a6bc1, __VMLINUX_SYMBOL_STR(cx88_newstation) },
	{ 0x6c78a542, __VMLINUX_SYMBOL_STR(cx88_get_stereo) },
	{ 0x5d542395, __VMLINUX_SYMBOL_STR(cx88_set_stereo) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x28aedab2, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_log_status) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x26b908a9, __VMLINUX_SYMBOL_STR(cx88_set_tvnorm) },
	{ 0x2974e6b2, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x8e6adf77, __VMLINUX_SYMBOL_STR(cx8802_buf_prepare) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x1ab38f6d, __VMLINUX_SYMBOL_STR(cx8802_buf_queue) },
	{ 0x468937ed, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xb59704da, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,cx8802,cx8800,cx88xx,videobuf2-dma-sg,cx2341x,videobuf2-core,v4l2-common";


MODULE_INFO(srcversion, "B6A1E15B1A6A5B02AB9D896");
