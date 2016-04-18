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
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xa83588eb, __VMLINUX_SYMBOL_STR(dm_rh_recovery_end) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfad9d53a, __VMLINUX_SYMBOL_STR(dm_rh_get_region_size) },
	{ 0xa68e1f06, __VMLINUX_SYMBOL_STR(dm_rh_get_state) },
	{ 0x7eb99bb3, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x2ec58183, __VMLINUX_SYMBOL_STR(dm_io) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x4b1d757, __VMLINUX_SYMBOL_STR(dm_rh_inc_pending) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0xfc62ef4e, __VMLINUX_SYMBOL_STR(dm_rh_get_region_key) },
	{ 0x154c6338, __VMLINUX_SYMBOL_STR(dm_kcopyd_client_destroy) },
	{ 0x60d5601, __VMLINUX_SYMBOL_STR(dm_region_hash_create) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xdfca6e09, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0x1575a6e3, __VMLINUX_SYMBOL_STR(dm_kcopyd_copy) },
	{ 0xd8aa4284, __VMLINUX_SYMBOL_STR(dm_rh_region_context) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xa53387c7, __VMLINUX_SYMBOL_STR(dm_rh_flush) },
	{ 0x9e4faeef, __VMLINUX_SYMBOL_STR(dm_io_client_destroy) },
	{ 0x1d2f9ac, __VMLINUX_SYMBOL_STR(dm_rh_recovery_start) },
	{ 0xbe38a431, __VMLINUX_SYMBOL_STR(dm_rh_recovery_prepare) },
	{ 0x17028329, __VMLINUX_SYMBOL_STR(dm_rh_bio_to_region) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xad84bef8, __VMLINUX_SYMBOL_STR(dm_table_event) },
	{ 0x7bb21632, __VMLINUX_SYMBOL_STR(dm_set_target_max_io_len) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x9a3d4d7a, __VMLINUX_SYMBOL_STR(dm_ratelimit_state) },
	{ 0xf86e270f, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x325d80af, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x7774620f, __VMLINUX_SYMBOL_STR(dm_rh_stop_recovery) },
	{ 0x7c7ad83c, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xa50ee358, __VMLINUX_SYMBOL_STR(dm_rh_dirty_log) },
	{ 0x4430764e, __VMLINUX_SYMBOL_STR(dm_rh_region_to_sector) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xc0cd3b13, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xd688716b, __VMLINUX_SYMBOL_STR(dm_kcopyd_client_create) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x38efaf5a, __VMLINUX_SYMBOL_STR(dm_region_hash_destroy) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x601f665f, __VMLINUX_SYMBOL_STR(dm_io_client_create) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa416b5d4, __VMLINUX_SYMBOL_STR(dm_rh_mark_nosync) },
	{ 0x241a89c6, __VMLINUX_SYMBOL_STR(dm_dirty_log_destroy) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x7d053fc5, __VMLINUX_SYMBOL_STR(dm_rh_start_recovery) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x3a18389a, __VMLINUX_SYMBOL_STR(dm_rh_update_states) },
	{ 0xfd8ceeac, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0x450522d8, __VMLINUX_SYMBOL_STR(dm_noflush_suspending) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xfd93482e, __VMLINUX_SYMBOL_STR(dm_rh_recovery_in_flight) },
	{ 0xd23382d0, __VMLINUX_SYMBOL_STR(dm_rh_delay) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x4dbbd84b, __VMLINUX_SYMBOL_STR(dm_dirty_log_create) },
	{ 0x45ab972a, __VMLINUX_SYMBOL_STR(dm_rh_dec) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-region-hash,dm-mod,dm-log";

