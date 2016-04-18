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
	{ 0xa13d009b, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x67206855, __VMLINUX_SYMBOL_STR(class_remove_file_ns) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb522ac5b, __VMLINUX_SYMBOL_STR(ib_send_cm_rej) },
	{ 0x6dc0ff64, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0x41f2c5af, __VMLINUX_SYMBOL_STR(ib_send_cm_req) },
	{ 0x7a91f320, __VMLINUX_SYMBOL_STR(ib_send_cm_dreq) },
	{ 0xb5fbd4c5, __VMLINUX_SYMBOL_STR(ib_send_cm_rtu) },
	{ 0x7cb1c2a3, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x4c7f8a89, __VMLINUX_SYMBOL_STR(kobject_set_name) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x4593540e, __VMLINUX_SYMBOL_STR(ib_copy_path_rec_to_user) },
	{ 0x1e445a3f, __VMLINUX_SYMBOL_STR(ib_copy_path_rec_from_user) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x6fa9799d, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0xac2d1ad9, __VMLINUX_SYMBOL_STR(ib_send_cm_mra) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfdf7e4b, __VMLINUX_SYMBOL_STR(ib_send_cm_drep) },
	{ 0x2ec9dc75, __VMLINUX_SYMBOL_STR(ib_cm_init_qp_attr) },
	{ 0x809388ca, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x71bb4555, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x48ef0255, __VMLINUX_SYMBOL_STR(ib_copy_qp_attr_to_user) },
	{ 0x5a988e72, __VMLINUX_SYMBOL_STR(ib_send_cm_rep) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa4fde00, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0xcba15626, __VMLINUX_SYMBOL_STR(ib_set_client_data) },
	{ 0xcd69507f, __VMLINUX_SYMBOL_STR(ib_create_cm_id) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0xdf1427e5, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xdcf8f6bf, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x13b955c5, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x6113ef14, __VMLINUX_SYMBOL_STR(ib_register_client) },
	{ 0x81144f9d, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x61441b09, __VMLINUX_SYMBOL_STR(ib_cm_notify) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x4db2823f, __VMLINUX_SYMBOL_STR(class_create_file_ns) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa8320354, __VMLINUX_SYMBOL_STR(ib_destroy_cm_id) },
	{ 0x6952a81, __VMLINUX_SYMBOL_STR(ib_send_cm_apr) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x9aab09cd, __VMLINUX_SYMBOL_STR(ib_cm_listen) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xb5c97aba, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb21a320c, __VMLINUX_SYMBOL_STR(ib_send_cm_lap) },
	{ 0x3b6dd562, __VMLINUX_SYMBOL_STR(cm_class) },
	{ 0x6aca8238, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x2370eacf, __VMLINUX_SYMBOL_STR(ib_send_cm_sidr_rep) },
	{ 0x83253bf8, __VMLINUX_SYMBOL_STR(show_class_attr_string) },
	{ 0xca83eb24, __VMLINUX_SYMBOL_STR(ib_unregister_client) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x6306f64c, __VMLINUX_SYMBOL_STR(ib_send_cm_sidr_req) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_cm,ib_uverbs,ib_core";

