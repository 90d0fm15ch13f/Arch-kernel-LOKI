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
	{ 0x3356b90b, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0x150389d6, __VMLINUX_SYMBOL_STR(acpi_processor_power_init_bm_check) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x6031ebce, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0xfd5d664d, __VMLINUX_SYMBOL_STR(cpufreq_get_policy) },
	{ 0xd65b6b91, __VMLINUX_SYMBOL_STR(cpu_subsys) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xbfe5616d, __VMLINUX_SYMBOL_STR(tick_broadcast_oneshot_control) },
	{ 0x2bb55d6e, __VMLINUX_SYMBOL_STR(acpi_remove_notify_handler) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x691001b5, __VMLINUX_SYMBOL_STR(acpi_evaluate_integer) },
	{ 0xd9091363, __VMLINUX_SYMBOL_STR(acpi_install_notify_handler) },
	{ 0x6b54447a, __VMLINUX_SYMBOL_STR(thermal_cooling_device_unregister) },
	{ 0x2366a2c0, __VMLINUX_SYMBOL_STR(errata) },
	{ 0x6b9bda7f, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x8f45676b, __VMLINUX_SYMBOL_STR(acpi_bus_get_device) },
	{ 0x65d9e877, __VMLINUX_SYMBOL_STR(cpufreq_register_notifier) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x44a81d5f, __VMLINUX_SYMBOL_STR(acpi_evaluate_object) },
	{ 0xfb14fb1f, __VMLINUX_SYMBOL_STR(cpuidle_get_driver) },
	{ 0x5f4aa299, __VMLINUX_SYMBOL_STR(cpu_info) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x20ebcbdb, __VMLINUX_SYMBOL_STR(cpuidle_unregister_driver) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x5c0442fd, __VMLINUX_SYMBOL_STR(acpi_gbl_FADT) },
	{ 0x56398615, __VMLINUX_SYMBOL_STR(mark_tsc_unstable) },
	{ 0x6214aef2, __VMLINUX_SYMBOL_STR(cpufreq_unregister_notifier) },
	{ 0x1848a8e, __VMLINUX_SYMBOL_STR(local_apic_timer_c2_ok) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xb9c425de, __VMLINUX_SYMBOL_STR(register_syscore_ops) },
	{ 0xcabe04de, __VMLINUX_SYMBOL_STR(cpuidle_resume_and_unlock) },
	{ 0xf82f3657, __VMLINUX_SYMBOL_STR(work_on_cpu) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0x59c1d110, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x7d94f746, __VMLINUX_SYMBOL_STR(acpi_os_write_port) },
	{ 0xbdaf5b07, __VMLINUX_SYMBOL_STR(acpi_os_read_port) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0xa59e8efc, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x8664f62e, __VMLINUX_SYMBOL_STR(cpufreq_update_policy) },
	{ 0x52280eba, __VMLINUX_SYMBOL_STR(set_cpus_allowed_ptr) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x36bda7b0, __VMLINUX_SYMBOL_STR(cpuidle_unregister_device) },
	{ 0x99a9ff9a, __VMLINUX_SYMBOL_STR(cpuidle_register_device) },
	{ 0xab29ad96, __VMLINUX_SYMBOL_STR(cpuidle_disable_device) },
	{ 0x1a45cb6c, __VMLINUX_SYMBOL_STR(acpi_disabled) },
	{ 0x1f1d9750, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0xe7216340, __VMLINUX_SYMBOL_STR(cpu_bit_bitmap) },
	{ 0xd80efb5, __VMLINUX_SYMBOL_STR(acpi_evaluate_ost) },
	{ 0x93f3e52b, __VMLINUX_SYMBOL_STR(acpi_extract_package) },
	{ 0x1fe9f800, __VMLINUX_SYMBOL_STR(unregister_cpu_notifier) },
	{ 0x93b3f2a6, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x59bc9609, __VMLINUX_SYMBOL_STR(acpi_write_bit_register) },
	{ 0x8b43159b, __VMLINUX_SYMBOL_STR(register_cpu_notifier) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd7d79132, __VMLINUX_SYMBOL_STR(put_online_cpus) },
	{ 0x827c6b10, __VMLINUX_SYMBOL_STR(cpuidle_register_driver) },
	{ 0xfb64b230, __VMLINUX_SYMBOL_STR(acpi_processor_ffh_cstate_probe) },
	{ 0x245ccad5, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0x7d7d63df, __VMLINUX_SYMBOL_STR(cpumask_next_and) },
	{ 0xa466de38, __VMLINUX_SYMBOL_STR(acpi_processor_ffh_cstate_enter) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3efb35c9, __VMLINUX_SYMBOL_STR(get_online_cpus) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xed433664, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xef9aedfc, __VMLINUX_SYMBOL_STR(boot_option_idle_override) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x9697f24e, __VMLINUX_SYMBOL_STR(thermal_cooling_device_register) },
	{ 0xe0ac8bd2, __VMLINUX_SYMBOL_STR(acpi_bus_generate_netlink_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd969b2c7, __VMLINUX_SYMBOL_STR(amd_e400_c1e_detected) },
	{ 0xfa1eb910, __VMLINUX_SYMBOL_STR(unregister_syscore_ops) },
	{ 0xb0cae9ed, __VMLINUX_SYMBOL_STR(processors) },
	{ 0x7521afb6, __VMLINUX_SYMBOL_STR(leave_mm) },
	{ 0x20aa6f51, __VMLINUX_SYMBOL_STR(cpuidle_enable_device) },
	{ 0x4097fa45, __VMLINUX_SYMBOL_STR(acpi_read_bit_register) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5c5a1b16, __VMLINUX_SYMBOL_STR(tick_broadcast_control) },
	{ 0x95395301, __VMLINUX_SYMBOL_STR(acpi_exception) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x509b64ea, __VMLINUX_SYMBOL_STR(acpi_has_method) },
	{ 0xf553318d, __VMLINUX_SYMBOL_STR(cpuidle_pause_and_lock) },
	{ 0x6228c21f, __VMLINUX_SYMBOL_STR(smp_call_function_single) },
	{ 0x419d3f61, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:LNXCPU:*");
MODULE_ALIAS("acpi*:ACPI0007:*");
