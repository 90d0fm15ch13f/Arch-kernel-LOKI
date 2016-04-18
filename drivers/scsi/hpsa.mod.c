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
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x89eab1e, __VMLINUX_SYMBOL_STR(sas_release_transport) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xc6b5ea1b, __VMLINUX_SYMBOL_STR(sas_attach_transport) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x339b4475, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x49581969, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x231b98d3, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x4350a31a, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xf6a9feb8, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xf9a516bb, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x2b227e8a, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x65bd2eb5, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe6a9fa13, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0xa97b6d88, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x2a303d4d, __VMLINUX_SYMBOL_STR(check_signature) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x1729abed, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x805e31c2, __VMLINUX_SYMBOL_STR(pci_disable_link_state) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xf116d4b5, __VMLINUX_SYMBOL_STR(copy_in_user) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x8f9c199c, __VMLINUX_SYMBOL_STR(__get_user_2) },
	{ 0xbffde8ec, __VMLINUX_SYMBOL_STR(compat_alloc_user_space) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x9e117a6c, __VMLINUX_SYMBOL_STR(scsi_unblock_requests) },
	{ 0xf0b108d5, __VMLINUX_SYMBOL_STR(scsi_block_requests) },
	{ 0x7d8183fc, __VMLINUX_SYMBOL_STR(scsi_host_get) },
	{ 0xf5a7a64f, __VMLINUX_SYMBOL_STR(sas_port_add_phy) },
	{ 0xb7cd8ba, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xe9463caf, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0x4d7a90e8, __VMLINUX_SYMBOL_STR(scsi_device_lookup) },
	{ 0x86eac651, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0xc3c3499b, __VMLINUX_SYMBOL_STR(sas_rphy_add) },
	{ 0x289d731d, __VMLINUX_SYMBOL_STR(sas_end_device_alloc) },
	{ 0x874399fb, __VMLINUX_SYMBOL_STR(sas_phy_add) },
	{ 0x1c51c620, __VMLINUX_SYMBOL_STR(sas_phy_alloc) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xf1fa7158, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xd3fe78aa, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0xd2f3ca29, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xce2c45cc, __VMLINUX_SYMBOL_STR(wait_for_completion_io) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x20cd2142, __VMLINUX_SYMBOL_STR(scsi_print_command) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0xea554f20, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x8f05954d, __VMLINUX_SYMBOL_STR(scsi_dma_map) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x925ba13a, __VMLINUX_SYMBOL_STR(scsi_dma_unmap) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9cfae1a5, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x1dea959e, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xa4eb8c7b, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0xe7216340, __VMLINUX_SYMBOL_STR(cpu_bit_bitmap) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x3275457, __VMLINUX_SYMBOL_STR(irq_set_affinity_hint) },
	{ 0xb7488905, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x479c3c86, __VMLINUX_SYMBOL_STR(find_next_zero_bit) },
	{ 0x1a08b98d, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x72ea7b2d, __VMLINUX_SYMBOL_STR(scsi_device_type) },
	{ 0x5d870e54, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x1075585f, __VMLINUX_SYMBOL_STR(pci_enable_msix_range) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x3adc97d6, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xc28c092a, __VMLINUX_SYMBOL_STR(sas_port_free) },
	{ 0xace88f34, __VMLINUX_SYMBOL_STR(sas_port_add) },
	{ 0x672b66e0, __VMLINUX_SYMBOL_STR(sas_port_alloc_num) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xed433664, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xbbf7c01f, __VMLINUX_SYMBOL_STR(sas_port_delete) },
	{ 0x6e26e8f7, __VMLINUX_SYMBOL_STR(sas_phy_free) },
	{ 0xf7c9a9cb, __VMLINUX_SYMBOL_STR(sas_port_delete_phy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xc2e587d1, __VMLINUX_SYMBOL_STR(reset_devices) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_transport_sas,scsi_mod";

MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003241bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003243bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003245bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003247bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003249bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd0000324Abc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd0000324Bbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Asv0000103Csd00003233bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003350bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003351bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003352bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003353bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003354bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003355bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Bsv0000103Csd00003356bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001921bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001922bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001923bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001924bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001926bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001928bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000323Csv0000103Csd00001929bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021BDbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021BEbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021BFbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C0bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C1bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C2bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C3bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C4bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C5bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C6bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C7bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C8bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021C9bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CAbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CBbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CCbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CDbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd00003239sv0000103Csd000021CEbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000580bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000581bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000582bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000583bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000584bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000290sv00009005sd00000585bc*sc*i*");
MODULE_ALIAS("pci:v00001590d00000075sv00001590sd00000076bc*sc*i*");
MODULE_ALIAS("pci:v00001590d00000075sv00001590sd00000087bc*sc*i*");
MODULE_ALIAS("pci:v00001590d00000075sv00001590sd0000007Dbc*sc*i*");
MODULE_ALIAS("pci:v00001590d00000075sv00001590sd00000088bc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd0000333Fsv0000103Csd0000333Fbc*sc*i*");
MODULE_ALIAS("pci:v0000103Cd*sv*sd*bc01sc04i*");

MODULE_INFO(srcversion, "FACA18350B28122A4A90D1B");
