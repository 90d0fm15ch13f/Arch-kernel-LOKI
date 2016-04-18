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
	{ 0xb36e899, __VMLINUX_SYMBOL_STR(transport_class_register) },
	{ 0x94465962, __VMLINUX_SYMBOL_STR(class_find_device) },
	{ 0x91bec164, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x40463733, __VMLINUX_SYMBOL_STR(scsi_remove_target) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd0ccf209, __VMLINUX_SYMBOL_STR(scsi_host_lookup) },
	{ 0x80163dcf, __VMLINUX_SYMBOL_STR(scsi_flush_work) },
	{ 0xd3542d1f, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xea554f20, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x768f7c70, __VMLINUX_SYMBOL_STR(bsg_request_fn) },
	{ 0x941316e5, __VMLINUX_SYMBOL_STR(transport_destroy_device) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xb1609d86, __VMLINUX_SYMBOL_STR(attribute_container_unregister) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x21e992a5, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x37ac2ec5, __VMLINUX_SYMBOL_STR(scsi_scan_target) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa89638c3, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x806516a2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x90652e96, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xdb3bcca6, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x9eeb2c7c, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0x71bb4555, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x56e4cf22, __VMLINUX_SYMBOL_STR(scsi_queue_work) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xf62f44bf, __VMLINUX_SYMBOL_STR(transport_add_device) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xe5be9fe5, __VMLINUX_SYMBOL_STR(device_find_child) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x958c688a, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xca933e23, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x7bd57fc5, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0x27882b9b, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x838e555d, __VMLINUX_SYMBOL_STR(attribute_container_register) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x97862a03, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x1ffec806, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xcd6b1d10, __VMLINUX_SYMBOL_STR(transport_class_unregister) },
	{ 0xd3fe78aa, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x28af6928, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x450b0bb6, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x1c16d6f6, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x60bd4827, __VMLINUX_SYMBOL_STR(scsi_target_unblock) },
	{ 0x9000a7f4, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x7d8183fc, __VMLINUX_SYMBOL_STR(scsi_host_get) },
	{ 0x323c5c50, __VMLINUX_SYMBOL_STR(netlink_broadcast) },
	{ 0x4fb9f94, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xaa7ada3e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3e83329e, __VMLINUX_SYMBOL_STR(transport_setup_device) },
	{ 0x62f52dc1, __VMLINUX_SYMBOL_STR(bsg_unregister_queue) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8dfc89f0, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xfd0d57ff, __VMLINUX_SYMBOL_STR(device_for_each_child) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x99f87c9a, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd40413b5, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xb5c97aba, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xceea76ee, __VMLINUX_SYMBOL_STR(transport_remove_device) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x7d3ad165, __VMLINUX_SYMBOL_STR(scsi_target_block) },
	{ 0xd7661d53, __VMLINUX_SYMBOL_STR(bsg_job_done) },
	{ 0x6aca8238, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x494c4683, __VMLINUX_SYMBOL_STR(bsg_setup_queue) },
	{ 0x4de398b5, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x419d3f61, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x9660584, __VMLINUX_SYMBOL_STR(__scsi_alloc_queue) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod";


MODULE_INFO(srcversion, "CA6475D39FA2AFE23213D91");
