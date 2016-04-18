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
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x19e9fbf8, __VMLINUX_SYMBOL_STR(target_unregister_template) },
	{ 0xae405b5f, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xdd2e185e, __VMLINUX_SYMBOL_STR(xenbus_unregister_driver) },
	{ 0x1718bd28, __VMLINUX_SYMBOL_STR(target_register_template) },
	{ 0x55647798, __VMLINUX_SYMBOL_STR(__xenbus_register_backend) },
	{ 0x92234a23, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x1def880e, __VMLINUX_SYMBOL_STR(bind_interdomain_evtchn_to_irq) },
	{ 0xcb899159, __VMLINUX_SYMBOL_STR(xenbus_map_ring_valloc) },
	{ 0xf7016530, __VMLINUX_SYMBOL_STR(xenbus_gather) },
	{ 0xb5c97aba, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x2d82cc0f, __VMLINUX_SYMBOL_STR(xenbus_dev_is_online) },
	{ 0xfe2d570, __VMLINUX_SYMBOL_STR(xenbus_directory) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xb99d5837, __VMLINUX_SYMBOL_STR(xenbus_read) },
	{ 0x964add15, __VMLINUX_SYMBOL_STR(xenbus_scanf) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x47ee2faf, __VMLINUX_SYMBOL_STR(transport_send_check_condition_and_sense) },
	{ 0xac361f0c, __VMLINUX_SYMBOL_STR(target_submit_cmd_map_sgls) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xc0cd3b13, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xd189bba9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x411d62d7, __VMLINUX_SYMBOL_STR(gnttab_map_refs) },
	{ 0x9360f94e, __VMLINUX_SYMBOL_STR(gnttab_unmap_refs) },
	{ 0x748f1df7, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x55526907, __VMLINUX_SYMBOL_STR(xen_features) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x70f9b509, __VMLINUX_SYMBOL_STR(xenbus_dev_fatal) },
	{ 0xf020776b, __VMLINUX_SYMBOL_STR(xenbus_dev_error) },
	{ 0x73e7bc97, __VMLINUX_SYMBOL_STR(xenbus_switch_state) },
	{ 0x73013896, __VMLINUX_SYMBOL_STR(xenbus_printf) },
	{ 0xc5d7ac13, __VMLINUX_SYMBOL_STR(transport_generic_handle_tmr) },
	{ 0x3a4cad84, __VMLINUX_SYMBOL_STR(transport_lookup_tmr_lun) },
	{ 0xbbf50fd6, __VMLINUX_SYMBOL_STR(core_tmr_alloc_req) },
	{ 0xdda86e72, __VMLINUX_SYMBOL_STR(transport_init_se_cmd) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xd9fb2aa, __VMLINUX_SYMBOL_STR(gnttab_alloc_pages) },
	{ 0xc9295c8b, __VMLINUX_SYMBOL_STR(xenbus_unmap_ring_vfree) },
	{ 0x7712771a, __VMLINUX_SYMBOL_STR(unbind_from_irqhandler) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xf3e270f1, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0xe17f8bc8, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xe813096b, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0x86623fd7, __VMLINUX_SYMBOL_STR(notify_remote_via_irq) },
	{ 0xb7488905, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0xf1d3bb4b, __VMLINUX_SYMBOL_STR(gnttab_free_pages) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb11ad4db, __VMLINUX_SYMBOL_STR(core_tpg_register) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xcef51982, __VMLINUX_SYMBOL_STR(kstrtou16) },
	{ 0x78f8b045, __VMLINUX_SYMBOL_STR(core_tpg_deregister) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe8702f44, __VMLINUX_SYMBOL_STR(transport_free_session) },
	{ 0x645d1830, __VMLINUX_SYMBOL_STR(transport_register_session) },
	{ 0x62c925a, __VMLINUX_SYMBOL_STR(core_tpg_check_initiator_node_acl) },
	{ 0x39f84fb8, __VMLINUX_SYMBOL_STR(transport_init_session) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4d0b32bd, __VMLINUX_SYMBOL_STR(transport_deregister_session) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod,scsi_mod";

