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
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3369cba9, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x447fb1c4, __VMLINUX_SYMBOL_STR(vb2_dma_contig_init_ctx) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x6581870b, __VMLINUX_SYMBOL_STR(v4l2_event_queue) },
	{ 0x4056b6b9, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x62d0edee, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x47704de7, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0xd08f6239, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0x8526c35a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xa33e8b13, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x944907a1, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0x468937ed, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x836a4033, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xb55617f0, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0xe4c4ccf5, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xd30ec30f, __VMLINUX_SYMBOL_STR(vb2_dma_sg_cleanup_ctx) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x54f8a529, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9cfae1a5, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xeae2cb29, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x9bcf62c3, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xb9f9ae95, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x57c9a5f0, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x9de5b601, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x7438d68e, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8043b4c6, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0xcacdeb96, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x71bb4555, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x5dd64fbb, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xabaad1be, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x4d3c16fc, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xce5f6f0a, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0xf1fa7158, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xccb48e4, __VMLINUX_SYMBOL_STR(v4l2_event_subscribe) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x79a88b5a, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xb59704da, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xe57f0426, __VMLINUX_SYMBOL_STR(vb2_dma_contig_cleanup_ctx) },
	{ 0xe9c96410, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xd2dc9b40, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xf7584a9c, __VMLINUX_SYMBOL_STR(find_font) },
	{ 0xad80fa49, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0x9ff713cb, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc9629d0d, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0x85e3e31b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_custom) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x69d7dd8a, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x4c759827, __VMLINUX_SYMBOL_STR(byte_rev_table) },
	{ 0x2158ee2b, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x609c4bcd, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0x17dabc79, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0xdcf8f6bf, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xe6a9fa13, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x27814dd3, __VMLINUX_SYMBOL_STR(vb2_plane_cookie) },
	{ 0x2e6e5c27, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x2c62be90, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x2974e6b2, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xc4e9245d, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0x3ecf2902, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x41a8bcb3, __VMLINUX_SYMBOL_STR(device_create_bin_file) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x65bd2eb5, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8fbd2922, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xe8109543, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xc9fef317, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x639e8bee, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0xfb597d2e, __VMLINUX_SYMBOL_STR(vb2_dma_contig_memops) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1729abed, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x3bb5114a, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0x888dcdf4, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xb7a3febb, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xdd12d1f, __VMLINUX_SYMBOL_STR(vb2_dma_sg_init_ctx) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x7e77e84d, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages_for_all) },
	{ 0xbef58428, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xb5c97aba, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x558a08, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xecaa8e77, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x83180130, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x6aca8238, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xd56b5f64, __VMLINUX_SYMBOL_STR(ktime_get_ts64) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xee406c70, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xca62b868, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x612edd73, __VMLINUX_SYMBOL_STR(vb2_dma_sg_memops) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x5c6ccbef, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-v4l2,videodev,videobuf2-dma-contig,snd-pcm,videobuf2-dma-sg,snd,videobuf2-core";

MODULE_ALIAS("pci:v00009413d00006010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00004304sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00004309sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00004310sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00004E04sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00004E09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00004E10sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009413d00006110sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00005304sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00005308sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB3d00005310sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8561BFBB5A97ACF58B882B9");
