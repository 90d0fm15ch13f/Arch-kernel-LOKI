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
	{ 0x6aad15bc, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3369cba9, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x42a25e97, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb94b2fc6, __VMLINUX_SYMBOL_STR(_vb2_fop_release) },
	{ 0xd2669c41, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x9da54278, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x1fca5e55, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0xabca69a4, __VMLINUX_SYMBOL_STR(media_device_unregister_entity) },
	{ 0x336c6d0, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0x4056b6b9, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0xc34171c6, __VMLINUX_SYMBOL_STR(tveeprom_hauppauge_analog) },
	{ 0x118e768d, __VMLINUX_SYMBOL_STR(dvb_frontend_suspend) },
	{ 0xd82225d7, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0xa33e8b13, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xfced8243, __VMLINUX_SYMBOL_STR(dvb_frontend_resume) },
	{ 0x944907a1, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x468937ed, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xb55617f0, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xe4c4ccf5, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x6a3f5477, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x54f8a529, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xff370a9a, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xeae2cb29, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x67ea0c11, __VMLINUX_SYMBOL_STR(media_entity_setup_link) },
	{ 0x76286c7a, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0xa17e6d0a, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0xc1a83fe8, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb9f9ae95, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x3a6284d1, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0x57c9a5f0, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x9de5b601, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x98d3481c, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb0b07466, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0xd805a922, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x3c7bf0ea, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xabaad1be, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0xce5f6f0a, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x1efa54a0, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0xf1fa7158, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb59704da, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x5bf891d1, __VMLINUX_SYMBOL_STR(media_entity_pads_init) },
	{ 0x28a82d5e, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0x193ddacd, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xd2dc9b40, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xad80fa49, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x9ff713cb, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x5c97b352, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x65e8a892, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9179860d, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x12a08047, __VMLINUX_SYMBOL_STR(tveeprom_read) },
	{ 0x57d4b84, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0x519b3309, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x296df6b1, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x2158ee2b, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x190d5cff, __VMLINUX_SYMBOL_STR(media_device_cleanup) },
	{ 0x8a2e822b, __VMLINUX_SYMBOL_STR(media_device_register_entity) },
	{ 0x2e6e5c27, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x84e80a1e, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x631af55c, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter_packets) },
	{ 0x2974e6b2, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xd69cd53e, __VMLINUX_SYMBOL_STR(media_create_pad_link) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xc906433a, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xec69a089, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8fbd2922, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x639e8bee, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0xea0ce489, __VMLINUX_SYMBOL_STR(__media_device_register) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x888dcdf4, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xb7a3febb, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x3a3b142e, __VMLINUX_SYMBOL_STR(ir_raw_event_store) },
	{ 0xc62ece37, __VMLINUX_SYMBOL_STR(i2c_probe_func_quick_read) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0xdd59af8a, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xccf9055c, __VMLINUX_SYMBOL_STR(media_device_init) },
	{ 0xab2e8c96, __VMLINUX_SYMBOL_STR(vb2_ioctl_expbuf) },
	{ 0xc3f61831, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xee406c70, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0xebb51a8d, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0xfaa4dc91, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x60d1ccca, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0xd70a2bf5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x7872ca60, __VMLINUX_SYMBOL_STR(media_device_unregister) },
	{ 0xca62b868, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x25a4dd41, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x73f4a9b1, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0x5c6ccbef, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,rc-core,dvb-core,media,v4l2-common,tveeprom,usbcore,videobuf2-vmalloc,videobuf2-core";

MODULE_ALIAS("usb:v2040p7200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pD620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7217d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E1p0480d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p8200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7270d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "2D71C69D731D5F7D11C61D8");
