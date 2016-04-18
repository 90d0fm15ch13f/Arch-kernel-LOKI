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
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0xdb7c6e44, __VMLINUX_SYMBOL_STR(videobuf_mmap_free) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3369cba9, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x42a25e97, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd2669c41, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x6f372006, __VMLINUX_SYMBOL_STR(videobuf_mmap_mapper) },
	{ 0x336c6d0, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0xa33e8b13, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x468937ed, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x6e3e1a81, __VMLINUX_SYMBOL_STR(videobuf_queue_vmalloc_init) },
	{ 0x836a4033, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x6a3f5477, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x842071e3, __VMLINUX_SYMBOL_STR(usb_reset_configuration) },
	{ 0x1c44294, __VMLINUX_SYMBOL_STR(videobuf_streamon) },
	{ 0xeae2cb29, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x26d9b3c5, __VMLINUX_SYMBOL_STR(videobuf_iolock) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x76286c7a, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0xa17e6d0a, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb9f9ae95, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x57c9a5f0, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd805a922, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x43ebfc0b, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xf1fa7158, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xef01aa61, __VMLINUX_SYMBOL_STR(videobuf_qbuf) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xb59704da, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x193ddacd, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x548af5b2, __VMLINUX_SYMBOL_STR(v4l2_event_pending) },
	{ 0x153c240e, __VMLINUX_SYMBOL_STR(v4l2_fh_init) },
	{ 0xd2dc9b40, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xbb5d3bed, __VMLINUX_SYMBOL_STR(rc_keydown) },
	{ 0xcac2e086, __VMLINUX_SYMBOL_STR(videobuf_querybuf) },
	{ 0x5c97b352, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x65e8a892, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8fcc0753, __VMLINUX_SYMBOL_STR(videobuf_read_stream) },
	{ 0x519b3309, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0x123959a1, __VMLINUX_SYMBOL_STR(v4l2_type_names) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x2e6e5c27, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x84e80a1e, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x737db3b0, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x2974e6b2, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa86168ff, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xb460a66f, __VMLINUX_SYMBOL_STR(videobuf_vmalloc_free) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xb2644fb5, __VMLINUX_SYMBOL_STR(videobuf_to_vmalloc) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x3e9c0da0, __VMLINUX_SYMBOL_STR(videobuf_dqbuf) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x993c684a, __VMLINUX_SYMBOL_STR(videobuf_reqbufs) },
	{ 0x888dcdf4, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x552ae03a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xeac34e92, __VMLINUX_SYMBOL_STR(v4l2_fh_add) },
	{ 0x961d5d07, __VMLINUX_SYMBOL_STR(v4l2_fh_del) },
	{ 0x7526af88, __VMLINUX_SYMBOL_STR(v4l2_ctrl_add_handler) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xc3f61831, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xd70a2bf5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0xca62b868, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xa08727e7, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0x25a4dd41, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x377bb193, __VMLINUX_SYMBOL_STR(v4l2_fh_exit) },
	{ 0x952d7edc, __VMLINUX_SYMBOL_STR(videobuf_streamoff) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-core,videodev,rc-core,v4l2-common,videobuf-vmalloc,usbcore";

MODULE_ALIAS("usb:v6000p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1pF332d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14AAp0620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1pB339d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6600d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p6611d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0086d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3241d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3243d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3264d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6000pDEC3d*dc*dsc*dp*ic*isc*ip*in*");
