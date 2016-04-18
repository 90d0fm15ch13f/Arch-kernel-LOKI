#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5e862211, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1a08b98d, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0xf0b108d5, __VMLINUX_SYMBOL_STR(scsi_block_requests) },
	{ 0x17016d9f, __VMLINUX_SYMBOL_STR(mpt_set_taskmgmt_in_progress_flag) },
	{ 0x7840036, __VMLINUX_SYMBOL_STR(mpt_HardResetHandler) },
	{ 0x9e117a6c, __VMLINUX_SYMBOL_STR(scsi_unblock_requests) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x7a51185b, __VMLINUX_SYMBOL_STR(mpt_get_msg_frame) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc5062429, __VMLINUX_SYMBOL_STR(mpt_halt_firmware) },
	{ 0x20cd2142, __VMLINUX_SYMBOL_STR(scsi_print_command) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc10c5692, __VMLINUX_SYMBOL_STR(mpt_raid_phys_disk_get_num_paths) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xbbc7277, __VMLINUX_SYMBOL_STR(mpt_send_handshake_request) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x502108d0, __VMLINUX_SYMBOL_STR(mpt_fwfault_debug) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd3fe78aa, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xde0a3fcf, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame) },
	{ 0x17492b87, __VMLINUX_SYMBOL_STR(mpt_resume) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6833be52, __VMLINUX_SYMBOL_STR(mpt_Soft_Hard_ResetHandler) },
	{ 0x6a207331, __VMLINUX_SYMBOL_STR(mpt_GetIocState) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x82701365, __VMLINUX_SYMBOL_STR(int_to_scsilun) },
	{ 0xf0dc658d, __VMLINUX_SYMBOL_STR(mpt_raid_phys_disk_pg1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x925ba13a, __VMLINUX_SYMBOL_STR(scsi_dma_unmap) },
	{ 0x63567f17, __VMLINUX_SYMBOL_STR(mpt_print_ioc_summary) },
	{ 0xf6e1a0da, __VMLINUX_SYMBOL_STR(blk_queue_dma_alignment) },
	{ 0xd2f3ca29, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x47582814, __VMLINUX_SYMBOL_STR(mpt_free_msg_frame) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xc726c8a8, __VMLINUX_SYMBOL_STR(mpt_suspend) },
	{ 0x7d09a450, __VMLINUX_SYMBOL_STR(mpt_detach) },
	{ 0x5d31000f, __VMLINUX_SYMBOL_STR(mpt_clear_taskmgmt_in_progress_flag) },
	{ 0x8f05954d, __VMLINUX_SYMBOL_STR(scsi_dma_map) },
	{ 0xc236f8f4, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame_hi_pri) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,mptbase";


MODULE_INFO(srcversion, "ACCC3B732514BB2911C40C0");
