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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x91bec164, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0xa13d009b, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa5f9b31, __VMLINUX_SYMBOL_STR(watchdog_unregister_device) },
	{ 0x80f9913a, __VMLINUX_SYMBOL_STR(perf_tp_event) },
	{ 0x6dc0ff64, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x6031ebce, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x138be331, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xb38cc013, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xa56e18e4, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x8e24fc22, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0xc48a3366, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x7cb1c2a3, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xcaa6d0ed, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x21df74d9, __VMLINUX_SYMBOL_STR(bitmap_set) },
	{ 0xd679af25, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x8bec995b, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x16c745d, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xa5b968a9, __VMLINUX_SYMBOL_STR(device_create_with_groups) },
	{ 0xce53df1d, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x6fa9799d, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x72e426bc, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x45bd495e, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0xdb3bcca6, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x9eeb2c7c, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xa59e8efc, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xd7ee3a56, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0x549db71f, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa4fde00, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x97862a03, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x84ac7241, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x8b2c5df7, __VMLINUX_SYMBOL_STR(debugfs_create_bool) },
	{ 0x2cde5e39, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xbfb6ce61, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x1c16d6f6, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0xdf1427e5, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x13b955c5, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe5df83fe, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0x4fb9f94, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x860012ca, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x8dfc89f0, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x79f29d12, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xe388ece7, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xf9eae5b5, __VMLINUX_SYMBOL_STR(watchdog_register_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe1096f6a, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0xd40413b5, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x42bb8d80, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xbd58457d, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xb624ce9f, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xaa973d1a, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x11caddc7, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x6aca8238, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x231651bc, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xb3372e39, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x7c2d098f, __VMLINUX_SYMBOL_STR(krealloc) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x6c07d933, __VMLINUX_SYMBOL_STR(add_uevent_var) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";
