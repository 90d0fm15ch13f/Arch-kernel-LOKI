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
	{ 0x1e3500a3, __VMLINUX_SYMBOL_STR(cpufreq_generic_attr) },
	{ 0xbc2031de, __VMLINUX_SYMBOL_STR(acpi_processor_get_bios_limit) },
	{ 0x45959e44, __VMLINUX_SYMBOL_STR(cpufreq_generic_frequency_table_verify) },
	{ 0x8fd20394, __VMLINUX_SYMBOL_STR(cpufreq_unregister_driver) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x9f46ced8, __VMLINUX_SYMBOL_STR(__sw_hweight64) },
	{ 0x6b9bda7f, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xd94743ef, __VMLINUX_SYMBOL_STR(node_states) },
	{ 0x792197f6, __VMLINUX_SYMBOL_STR(cpufreq_register_driver) },
	{ 0xd7d79132, __VMLINUX_SYMBOL_STR(put_online_cpus) },
	{ 0x3efb35c9, __VMLINUX_SYMBOL_STR(get_online_cpus) },
	{ 0xbec30d05, __VMLINUX_SYMBOL_STR(x86_match_cpu) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x7cd6f042, __VMLINUX_SYMBOL_STR(cpufreq_get_current_driver) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa14e73d6, __VMLINUX_SYMBOL_STR(cpufreq_freq_transition_end) },
	{ 0xce0db0c4, __VMLINUX_SYMBOL_STR(cpufreq_freq_transition_begin) },
	{ 0xdd90cccb, __VMLINUX_SYMBOL_STR(cpufreq_cpu_put) },
	{ 0x3a452182, __VMLINUX_SYMBOL_STR(cpufreq_cpu_get) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0x3e2d004d, __VMLINUX_SYMBOL_STR(cpufreq_table_validate_and_show) },
	{ 0x9b182fd4, __VMLINUX_SYMBOL_STR(acpi_processor_notify_smm) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x4348a091, __VMLINUX_SYMBOL_STR(cpu_core_map) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0xc8ad1169, __VMLINUX_SYMBOL_STR(acpi_processor_register_performance) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x4c07a7e0, __VMLINUX_SYMBOL_STR(acpi_processor_unregister_performance) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf82f3657, __VMLINUX_SYMBOL_STR(work_on_cpu) },
	{ 0x245ccad5, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6228c21f, __VMLINUX_SYMBOL_STR(smp_call_function_single) },
	{ 0xed433664, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=processor";

MODULE_ALIAS("cpu:type:x86,ven0002fam000Fmod*:feature:*");
