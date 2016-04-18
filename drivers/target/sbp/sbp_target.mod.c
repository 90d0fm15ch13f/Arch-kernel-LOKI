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
	{ 0x19e9fbf8, __VMLINUX_SYMBOL_STR(target_unregister_template) },
	{ 0x1718bd28, __VMLINUX_SYMBOL_STR(target_register_template) },
	{ 0x78f8b045, __VMLINUX_SYMBOL_STR(core_tpg_deregister) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xe813096b, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0xdd489b0e, __VMLINUX_SYMBOL_STR(target_submit_cmd) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0xe8702f44, __VMLINUX_SYMBOL_STR(transport_free_session) },
	{ 0x645d1830, __VMLINUX_SYMBOL_STR(transport_register_session) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x62c925a, __VMLINUX_SYMBOL_STR(core_tpg_check_initiator_node_acl) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x39f84fb8, __VMLINUX_SYMBOL_STR(transport_init_session) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x4d0b32bd, __VMLINUX_SYMBOL_STR(transport_deregister_session) },
	{ 0xd2424372, __VMLINUX_SYMBOL_STR(transport_deregister_session_configfs) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x645b715f, __VMLINUX_SYMBOL_STR(fw_core_add_descriptor) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4d0f641, __VMLINUX_SYMBOL_STR(fw_core_remove_descriptor) },
	{ 0xf3e270f1, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0xf4ade51f, __VMLINUX_SYMBOL_STR(fw_card_release) },
	{ 0x7f8d3818, __VMLINUX_SYMBOL_STR(sg_miter_stop) },
	{ 0xcab8c2ed, __VMLINUX_SYMBOL_STR(sg_miter_next) },
	{ 0xc3bdaf83, __VMLINUX_SYMBOL_STR(sg_miter_start) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4c14632, __VMLINUX_SYMBOL_STR(system_unbound_wq) },
	{ 0x2885fec5, __VMLINUX_SYMBOL_STR(fw_get_request_speed) },
	{ 0xd8875a7b, __VMLINUX_SYMBOL_STR(fw_send_response) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xb412800a, __VMLINUX_SYMBOL_STR(fw_run_transaction) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xb6531491, __VMLINUX_SYMBOL_STR(fw_core_remove_address_handler) },
	{ 0xb11ad4db, __VMLINUX_SYMBOL_STR(core_tpg_register) },
	{ 0xa35e5e1, __VMLINUX_SYMBOL_STR(fw_core_add_address_handler) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod,firewire-core";

