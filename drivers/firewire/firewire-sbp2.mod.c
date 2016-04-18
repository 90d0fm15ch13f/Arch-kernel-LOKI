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
	{ 0x16e91e21, __VMLINUX_SYMBOL_STR(fw_csr_iterator_next) },
	{ 0x471aaad0, __VMLINUX_SYMBOL_STR(fw_device_enable_phys_dma) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x6031ebce, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x486530e8, __VMLINUX_SYMBOL_STR(__scsi_add_device) },
	{ 0xa97b6d88, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x4350a31a, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xf0b108d5, __VMLINUX_SYMBOL_STR(scsi_block_requests) },
	{ 0xe60e848e, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0xe9463caf, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0x14a2b2f, __VMLINUX_SYMBOL_STR(fw_send_request) },
	{ 0x9e117a6c, __VMLINUX_SYMBOL_STR(scsi_unblock_requests) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xb624905b, __VMLINUX_SYMBOL_STR(fw_bus_type) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x65c9438b, __VMLINUX_SYMBOL_STR(fw_csr_iterator_init) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x9402a6a5, __VMLINUX_SYMBOL_STR(scsilun_to_int) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x3c56ef91, __VMLINUX_SYMBOL_STR(fw_workqueue) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xa59e8efc, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xd3fe78aa, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x50dc766e, __VMLINUX_SYMBOL_STR(blk_queue_update_dma_alignment) },
	{ 0x79e7ed18, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xb7cd8ba, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x607cfea9, __VMLINUX_SYMBOL_STR(fw_cancel_transaction) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x4d7a90e8, __VMLINUX_SYMBOL_STR(scsi_device_lookup) },
	{ 0xa35e5e1, __VMLINUX_SYMBOL_STR(fw_core_add_address_handler) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xb6531491, __VMLINUX_SYMBOL_STR(fw_core_remove_address_handler) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x925ba13a, __VMLINUX_SYMBOL_STR(scsi_dma_unmap) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd2f3ca29, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x90863005, __VMLINUX_SYMBOL_STR(fw_high_memory_region) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xb412800a, __VMLINUX_SYMBOL_STR(fw_run_transaction) },
	{ 0xd8875a7b, __VMLINUX_SYMBOL_STR(fw_send_response) },
	{ 0x8f05954d, __VMLINUX_SYMBOL_STR(scsi_dma_map) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=firewire-core,scsi_mod";

MODULE_ALIAS("ieee1394:ven*mo*sp0000609Ever00010483*");
