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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xa13d009b, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6e85365a, __VMLINUX_SYMBOL_STR(pci_bus_type) },
	{ 0x6dc0ff64, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x138be331, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xc1d8cfaf, __VMLINUX_SYMBOL_STR(__fdget) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xcaa6d0ed, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xa843805a, __VMLINUX_SYMBOL_STR(get_unused_fd_flags) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x72e426bc, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xf4e76787, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x809388ca, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x36075bb5, __VMLINUX_SYMBOL_STR(iommu_group_register_notifier) },
	{ 0x6a1733eb, __VMLINUX_SYMBOL_STR(iommu_group_unregister_notifier) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe1a1579d, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xa4fde00, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x2cde5e39, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x41482d8b, __VMLINUX_SYMBOL_STR(strndup_user) },
	{ 0xbfb6ce61, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xf5a3c7ce, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x6e7943ec, __VMLINUX_SYMBOL_STR(iommu_group_id) },
	{ 0xdf1427e5, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x13b955c5, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x81144f9d, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x891c1ae9, __VMLINUX_SYMBOL_STR(iommu_group_for_each_dev) },
	{ 0x3f4547a7, __VMLINUX_SYMBOL_STR(put_unused_fd) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x89485687, __VMLINUX_SYMBOL_STR(iommu_group_put) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2338b1f7, __VMLINUX_SYMBOL_STR(fd_install) },
	{ 0xbd58457d, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x708739f3, __VMLINUX_SYMBOL_STR(iommu_group_get) },
	{ 0x5fb2e8ef, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x231651bc, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x3bcbc272, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xb3372e39, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0xcbaf73cc, __VMLINUX_SYMBOL_STR(anon_inode_getfile) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x419d3f61, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "812A5145B0C1A7A5D246618");
