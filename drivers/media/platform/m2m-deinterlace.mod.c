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
	{ 0xca62b868, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xd2669c41, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x5c6ccbef, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
	{ 0xfb597d2e, __VMLINUX_SYMBOL_STR(vb2_dma_contig_memops) },
	{ 0xee4714a5, __VMLINUX_SYMBOL_STR(v4l2_m2m_get_vq) },
	{ 0xe4d575fe, __VMLINUX_SYMBOL_STR(v4l2_m2m_ctx_init) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x17eb0eee, __VMLINUX_SYMBOL_STR(v4l2_m2m_init) },
	{ 0x447fb1c4, __VMLINUX_SYMBOL_STR(vb2_dma_contig_init_ctx) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xeae2cb29, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x57c9a5f0, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x76d79325, __VMLINUX_SYMBOL_STR(__dma_request_channel) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xd487efd5, __VMLINUX_SYMBOL_STR(v4l2_m2m_poll) },
	{ 0x4a3dc79b, __VMLINUX_SYMBOL_STR(v4l2_m2m_mmap) },
	{ 0x4f9e6799, __VMLINUX_SYMBOL_STR(v4l2_m2m_buf_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x32d6fab7, __VMLINUX_SYMBOL_STR(v4l2_m2m_ctx_release) },
	{ 0x2974e6b2, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x938d3410, __VMLINUX_SYMBOL_STR(v4l2_m2m_reqbufs) },
	{ 0x8c240176, __VMLINUX_SYMBOL_STR(v4l2_m2m_querybuf) },
	{ 0xb657c898, __VMLINUX_SYMBOL_STR(v4l2_m2m_qbuf) },
	{ 0x1ae53ede, __VMLINUX_SYMBOL_STR(v4l2_m2m_dqbuf) },
	{ 0x283ebb8a, __VMLINUX_SYMBOL_STR(v4l2_m2m_streamon) },
	{ 0x5389b4c1, __VMLINUX_SYMBOL_STR(v4l2_m2m_streamoff) },
	{ 0x27814dd3, __VMLINUX_SYMBOL_STR(vb2_plane_cookie) },
	{ 0x6f4ad79e, __VMLINUX_SYMBOL_STR(v4l2_m2m_next_buf) },
	{ 0x9ff713cb, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0xcf70ed98, __VMLINUX_SYMBOL_STR(v4l2_m2m_buf_remove) },
	{ 0x7dd15391, __VMLINUX_SYMBOL_STR(v4l2_m2m_job_finish) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc48bae63, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0xe57f0426, __VMLINUX_SYMBOL_STR(vb2_dma_contig_cleanup_ctx) },
	{ 0xa33e8b13, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xb59704da, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xc6fca5ad, __VMLINUX_SYMBOL_STR(v4l2_m2m_release) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,videobuf2-v4l2,videobuf2-dma-contig,v4l2-mem2mem,videobuf2-core";


MODULE_INFO(srcversion, "9AFF9D1D1F1CD321B531476");
