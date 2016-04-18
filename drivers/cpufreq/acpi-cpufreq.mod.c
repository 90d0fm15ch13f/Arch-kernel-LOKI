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
	{ 0xbc2031de, __VMLINUX_SYMBOL_STR(acpi_processor_get_bios_limit) },
	{ 0x45959e44, __VMLINUX_SYMBOL_STR(cpufreq_generic_frequency_table_verify) },
	{ 0xed4df155, __VMLINUX_SYMBOL_STR(cpufreq_freq_attr_scaling_available_freqs) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x8fd20394, __VMLINUX_SYMBOL_STR(cpufreq_unregister_driver) },
	{ 0x792197f6, __VMLINUX_SYMBOL_STR(cpufreq_register_driver) },
	{ 0x7f62a045, __VMLINUX_SYMBOL_STR(cpu_maps_update_done) },
	{ 0x839430b2, __VMLINUX_SYMBOL_STR(__register_cpu_notifier) },
	{ 0x3465caa3, __VMLINUX_SYMBOL_STR(cpu_maps_update_begin) },
	{ 0xb1cfad22, __VMLINUX_SYMBOL_STR(rdmsr_on_cpu) },
	{ 0x3d7c1ed7, __VMLINUX_SYMBOL_STR(msrs_alloc) },
	{ 0xd655f199, __VMLINUX_SYMBOL_STR(acpi_processor_preregister_performance) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x7cd6f042, __VMLINUX_SYMBOL_STR(cpufreq_get_current_driver) },
	{ 0x1a45cb6c, __VMLINUX_SYMBOL_STR(acpi_disabled) },
	{ 0x69ad2f20, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0xd7d79132, __VMLINUX_SYMBOL_STR(put_online_cpus) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x3efb35c9, __VMLINUX_SYMBOL_STR(get_online_cpus) },
	{ 0xbdaf5b07, __VMLINUX_SYMBOL_STR(acpi_os_read_port) },
	{ 0x184e78fd, __VMLINUX_SYMBOL_STR(cpufreq_cpu_get_raw) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x966bccdf, __VMLINUX_SYMBOL_STR(smp_call_function_many) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xbe13fff, __VMLINUX_SYMBOL_STR(smp_call_function_any) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7d94f746, __VMLINUX_SYMBOL_STR(acpi_os_write_port) },
	{ 0x245ccad5, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0xd6b33026, __VMLINUX_SYMBOL_STR(cpu_khz) },
	{ 0x9b182fd4, __VMLINUX_SYMBOL_STR(acpi_processor_notify_smm) },
	{ 0x3e2d004d, __VMLINUX_SYMBOL_STR(cpufreq_table_validate_and_show) },
	{ 0x69880db7, __VMLINUX_SYMBOL_STR(cpu_sibling_map) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4348a091, __VMLINUX_SYMBOL_STR(cpu_core_map) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0xc8ad1169, __VMLINUX_SYMBOL_STR(acpi_processor_register_performance) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5f4aa299, __VMLINUX_SYMBOL_STR(cpu_info) },
	{ 0xcf6cfe1f, __VMLINUX_SYMBOL_STR(msrs_free) },
	{ 0x1fe9f800, __VMLINUX_SYMBOL_STR(unregister_cpu_notifier) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x59c1d110, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0xedd26dec, __VMLINUX_SYMBOL_STR(cpufreq_show_cpus) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xe7216340, __VMLINUX_SYMBOL_STR(cpu_bit_bitmap) },
	{ 0xc01fe078, __VMLINUX_SYMBOL_STR(wrmsr_on_cpus) },
	{ 0xed433664, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xa40499f1, __VMLINUX_SYMBOL_STR(rdmsr_on_cpus) },
	{ 0x6b9bda7f, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4c07a7e0, __VMLINUX_SYMBOL_STR(acpi_processor_unregister_performance) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=processor";

MODULE_ALIAS("acpi*:LNXCPU:*");
MODULE_ALIAS("acpi*:ACPI0007:*");
MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0016*");
MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*00E8*");
