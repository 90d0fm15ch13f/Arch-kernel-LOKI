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
	{ 0xb7a3febb, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x54f8a529, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0x2c62be90, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x8fbd2922, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xabaad1be, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0xca62b868, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xb55617f0, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x9de5b601, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0xee406c70, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0xe4c4ccf5, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0x57d4b84, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0x2158ee2b, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0xab2e8c96, __VMLINUX_SYMBOL_STR(vb2_ioctl_expbuf) },
	{ 0xce5f6f0a, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x639e8bee, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x6aad15bc, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x3684001c, __VMLINUX_SYMBOL_STR(input_unregister_polled_device) },
	{ 0xd30ec30f, __VMLINUX_SYMBOL_STR(vb2_dma_sg_cleanup_ctx) },
	{ 0xb59704da, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xeae2cb29, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xd2669c41, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0xdd12d1f, __VMLINUX_SYMBOL_STR(vb2_dma_sg_init_ctx) },
	{ 0xa33e8b13, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x5c6ccbef, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0x612edd73, __VMLINUX_SYMBOL_STR(vb2_dma_sg_memops) },
	{ 0x57c9a5f0, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x80a680df, __VMLINUX_SYMBOL_STR(input_free_polled_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x943eee4, __VMLINUX_SYMBOL_STR(input_register_polled_device) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x1865702e, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x85881d8f, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x678ab9b5, __VMLINUX_SYMBOL_STR(input_allocate_polled_device) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x2974e6b2, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x5c97b352, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x5cb96a66, __VMLINUX_SYMBOL_STR(usb_sg_wait) },
	{ 0x825caa40, __VMLINUX_SYMBOL_STR(usb_sg_init) },
	{ 0x27814dd3, __VMLINUX_SYMBOL_STR(vb2_plane_cookie) },
	{ 0x9ff713cb, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x4db57397, __VMLINUX_SYMBOL_STR(input_mt_sync_frame) },
	{ 0xf1e67c28, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0x42c00678, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xe2247aba, __VMLINUX_SYMBOL_STR(input_mt_get_slot_by_key) },
	{ 0xfe632894, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,usbcore,input-polldev,videobuf2-dma-sg,videobuf2-core";

MODULE_ALIAS("usb:v045Ep0775d*dc*dsc*dp*ic*isc*ip*in*");
