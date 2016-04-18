#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0x21a13cd3, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xd3542d1f, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xb82735a2, __VMLINUX_SYMBOL_STR(mtd_table_mutex) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf0d41697, __VMLINUX_SYMBOL_STR(__put_mtd_device) },
	{ 0x4721229c, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0xd7bdfd3b, __VMLINUX_SYMBOL_STR(blk_start_queue) },
	{ 0xb2fd6f82, __VMLINUX_SYMBOL_STR(__get_mtd_device) },
	{ 0xa89638c3, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x3dc7fac0, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x958c688a, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x1e7bc4b9, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0xc61a97c7, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x36cc0581, __VMLINUX_SYMBOL_STR(register_mtd_user) },
	{ 0xc0e9cc41, __VMLINUX_SYMBOL_STR(__mtd_next_device) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x2d7ca50f, __VMLINUX_SYMBOL_STR(unregister_mtd_user) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xe57d6a2b, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x105fee78, __VMLINUX_SYMBOL_STR(__blk_end_request_cur) },
	{ 0x4198f7ad, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0xde712334, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x79f29d12, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8b2f5c83, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa65fa395, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x57dc20d7, __VMLINUX_SYMBOL_STR(set_disk_ro) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mtd";

