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
	{ 0xca3d7762, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0xb36e899, __VMLINUX_SYMBOL_STR(transport_class_register) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x40463733, __VMLINUX_SYMBOL_STR(scsi_remove_target) },
	{ 0xd3542d1f, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xea554f20, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x941316e5, __VMLINUX_SYMBOL_STR(transport_destroy_device) },
	{ 0xb1609d86, __VMLINUX_SYMBOL_STR(attribute_container_unregister) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x37ac2ec5, __VMLINUX_SYMBOL_STR(scsi_scan_target) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x90652e96, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x9eeb2c7c, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0xf62f44bf, __VMLINUX_SYMBOL_STR(transport_add_device) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf9036fe3, __VMLINUX_SYMBOL_STR(bsg_register_queue) },
	{ 0x2f927cb7, __VMLINUX_SYMBOL_STR(transport_configure_device) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x838e555d, __VMLINUX_SYMBOL_STR(attribute_container_register) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1f1d9750, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x97862a03, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0xcd6b1d10, __VMLINUX_SYMBOL_STR(transport_class_unregister) },
	{ 0x93b3f2a6, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x4fb9f94, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x3e83329e, __VMLINUX_SYMBOL_STR(transport_setup_device) },
	{ 0x62f52dc1, __VMLINUX_SYMBOL_STR(bsg_unregister_queue) },
	{ 0x4198f7ad, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x8dfc89f0, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xfd0d57ff, __VMLINUX_SYMBOL_STR(device_for_each_child) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb899985f, __VMLINUX_SYMBOL_STR(blk_end_request_all) },
	{ 0xd40413b5, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xba6657e5, __VMLINUX_SYMBOL_STR(scsi_get_vpd_page) },
	{ 0xceea76ee, __VMLINUX_SYMBOL_STR(transport_remove_device) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6aca8238, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x4f4cd251, __VMLINUX_SYMBOL_STR(scsi_mode_sense) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";

