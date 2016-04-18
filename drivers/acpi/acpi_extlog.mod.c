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
	{ 0xf2d7d87, __VMLINUX_SYMBOL_STR(mce_unregister_decode_chain) },
	{ 0xb8b2b1f7, __VMLINUX_SYMBOL_STR(mce_register_decode_chain) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xc04b21bd, __VMLINUX_SYMBOL_STR(acpi_os_unmap_iomem) },
	{ 0x8d9fa235, __VMLINUX_SYMBOL_STR(acpi_os_map_iomem) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x69a358a6, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x8c646600, __VMLINUX_SYMBOL_STR(edac_report_status) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1616cb30, __VMLINUX_SYMBOL_STR(acpi_evaluate_dsm) },
	{ 0xdf12a927, __VMLINUX_SYMBOL_STR(acpi_check_dsm) },
	{ 0x2bfeb410, __VMLINUX_SYMBOL_STR(acpi_get_handle) },
	{ 0xb66421b2, __VMLINUX_SYMBOL_STR(acpi_str_to_uuid) },
	{ 0x245ccad5, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0x7260e249, __VMLINUX_SYMBOL_STR(___preempt_schedule_notrace) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x7dcdc93f, __VMLINUX_SYMBOL_STR(__tracepoint_extlog_mem_event) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xcdb6adcc, __VMLINUX_SYMBOL_STR(ras_userspace_consumers) },
	{ 0xed433664, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x75bc549a, __VMLINUX_SYMBOL_STR(x86_cpu_to_apicid) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x973ab8ad, __VMLINUX_SYMBOL_STR(cper_estatus_print) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xc0cd3b13, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

