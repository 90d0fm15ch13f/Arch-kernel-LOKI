#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5e862211, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xf8b0190b, __VMLINUX_SYMBOL_STR(vb2_core_streamoff) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc2482b06, __VMLINUX_SYMBOL_STR(vb2_core_dqbuf) },
	{ 0xc0aa6c3e, __VMLINUX_SYMBOL_STR(vb2_mmap) },
	{ 0xd1b24990, __VMLINUX_SYMBOL_STR(vb2_core_qbuf) },
	{ 0xaa7234f8, __VMLINUX_SYMBOL_STR(vb2_core_querybuf) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe03b58ef, __VMLINUX_SYMBOL_STR(vb2_core_streamon) },
	{ 0x91287e16, __VMLINUX_SYMBOL_STR(vb2_core_poll) },
	{ 0xb484d3d1, __VMLINUX_SYMBOL_STR(vb2_read) },
	{ 0xb2ea8957, __VMLINUX_SYMBOL_STR(vb2_core_prepare_buf) },
	{ 0xf1fa7158, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x548af5b2, __VMLINUX_SYMBOL_STR(v4l2_event_pending) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x40110c6e, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x4f6ac575, __VMLINUX_SYMBOL_STR(vb2_core_queue_release) },
	{ 0x5142993c, __VMLINUX_SYMBOL_STR(vb2_write) },
	{ 0x2974e6b2, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x92cf7b3c, __VMLINUX_SYMBOL_STR(vb2_core_create_bufs) },
	{ 0x3e5903a9, __VMLINUX_SYMBOL_STR(vb2_core_expbuf) },
	{ 0xa9231189, __VMLINUX_SYMBOL_STR(vb2_core_reqbufs) },
	{ 0xfc66977f, __VMLINUX_SYMBOL_STR(vb2_verify_memory_type) },
	{ 0xde062fdc, __VMLINUX_SYMBOL_STR(vb2_core_queue_init) },
	{ 0xeb64a325, __VMLINUX_SYMBOL_STR(vb2_buffer_in_use) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-core,videodev";

