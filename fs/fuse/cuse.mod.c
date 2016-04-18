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
	{ 0xfad46b8f, __VMLINUX_SYMBOL_STR(fuse_file_poll) },
	{ 0x95ba9e29, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x3bcbc272, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xbd58457d, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xf4e76787, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x231651bc, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xf8e009e2, __VMLINUX_SYMBOL_STR(fuse_dev_operations) },
	{ 0x79db108e, __VMLINUX_SYMBOL_STR(fuse_put_request) },
	{ 0x691e2aed, __VMLINUX_SYMBOL_STR(fuse_dev_free) },
	{ 0xafa47bbc, __VMLINUX_SYMBOL_STR(fuse_request_send_background) },
	{ 0x8b8a081e, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x375c379a, __VMLINUX_SYMBOL_STR(fuse_get_req_for_background) },
	{ 0x896ea1db, __VMLINUX_SYMBOL_STR(fuse_dev_alloc) },
	{ 0x55fb3e52, __VMLINUX_SYMBOL_STR(fuse_conn_init) },
	{ 0x8c886110, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x13b955c5, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x6596af7a, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4fb9f94, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x97862a03, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x77bc13a0, __VMLINUX_SYMBOL_STR(strim) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x6aca8238, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xd40413b5, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0x79df5377, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfbde7e3b, __VMLINUX_SYMBOL_STR(fuse_direct_io) },
	{ 0x3777a1fa, __VMLINUX_SYMBOL_STR(fuse_do_ioctl) },
	{ 0x298f0d0b, __VMLINUX_SYMBOL_STR(fuse_do_open) },
	{ 0x29affec1, __VMLINUX_SYMBOL_STR(fuse_conn_get) },
	{ 0x71258543, __VMLINUX_SYMBOL_STR(fuse_sync_release) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x476a8eb6, __VMLINUX_SYMBOL_STR(fuse_dev_release) },
	{ 0x74345555, __VMLINUX_SYMBOL_STR(fuse_conn_put) },
	{ 0xa13d009b, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xb5c97aba, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x67a7d636, __VMLINUX_SYMBOL_STR(fuse_abort_conn) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fuse";

