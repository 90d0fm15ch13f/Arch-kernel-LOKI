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
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x6ffbbaa6, __VMLINUX_SYMBOL_STR(p9_client_cb) },
	{ 0x1eed3baa, __VMLINUX_SYMBOL_STR(v9fs_unregister_trans) },
	{ 0x67d09f20, __VMLINUX_SYMBOL_STR(iov_iter_get_pages_alloc) },
	{ 0x8c886110, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x60660aa8, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0x68708c3d, __VMLINUX_SYMBOL_STR(v9fs_register_trans) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe31d9f2b, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0x75b156c, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xc7e7eaa4, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa510b470, __VMLINUX_SYMBOL_STR(p9_release_pages) },
	{ 0xcfc8af13, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0x5e317742, __VMLINUX_SYMBOL_STR(sysfs_remove_file_ns) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x478eaea3, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x59b0f0df, __VMLINUX_SYMBOL_STR(iov_iter_single_seg_count) },
	{ 0xac9828d3, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x8be20f22, __VMLINUX_SYMBOL_STR(sysfs_create_file_ns) },
	{ 0x27fa66e1, __VMLINUX_SYMBOL_STR(nr_free_buffer_pages) },
	{ 0x685f4eac, __VMLINUX_SYMBOL_STR(dev_emerg) },
	{ 0xdba36ed7, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=9pnet,virtio,virtio_ring";

MODULE_ALIAS("virtio:d00000009v*");
