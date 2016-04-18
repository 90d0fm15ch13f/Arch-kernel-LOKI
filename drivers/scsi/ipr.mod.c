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
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x1b4223ba, __VMLINUX_SYMBOL_STR(ata_sas_port_stop) },
	{ 0x26bcffcc, __VMLINUX_SYMBOL_STR(ata_sas_port_start) },
	{ 0xb45c7115, __VMLINUX_SYMBOL_STR(ata_noop_qc_prep) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xac1a55be, __VMLINUX_SYMBOL_STR(unregister_reboot_notifier) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x3517383e, __VMLINUX_SYMBOL_STR(register_reboot_notifier) },
	{ 0x77bc13a0, __VMLINUX_SYMBOL_STR(strim) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x5789a6a3, __VMLINUX_SYMBOL_STR(ata_sas_slave_configure) },
	{ 0xe60e848e, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0xb23e20c5, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x782841f2, __VMLINUX_SYMBOL_STR(ata_std_error_handler) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xc2e587d1, __VMLINUX_SYMBOL_STR(reset_devices) },
	{ 0x771cf835, __VMLINUX_SYMBOL_STR(dma_pool_alloc) },
	{ 0x5d870e54, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x52cfb587, __VMLINUX_SYMBOL_STR(dma_pool_create) },
	{ 0xe6a9fa13, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x231b98d3, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x4350a31a, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0x65bd2eb5, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x1729abed, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x80268790, __VMLINUX_SYMBOL_STR(ata_host_init) },
	{ 0xa97b6d88, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0xd2f3ca29, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0xd3fe78aa, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x9cfae1a5, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xa8721b97, __VMLINUX_SYMBOL_STR(system_state) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x8c886110, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xb7cd8ba, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xe9463caf, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0x494bcb5d, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0x86eac651, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0x173ad2ac, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x79df5377, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x8b8a081e, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xcf14c2f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x554ae3a4, __VMLINUX_SYMBOL_STR(irq_poll_sched) },
	{ 0xd7d280ad, __VMLINUX_SYMBOL_STR(irq_poll_complete) },
	{ 0x339b4475, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x3adc97d6, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0x2b227e8a, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x1075585f, __VMLINUX_SYMBOL_STR(pci_enable_msix_range) },
	{ 0x49581969, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x358508ce, __VMLINUX_SYMBOL_STR(pci_cfg_access_unlock) },
	{ 0xe8109543, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7c0bf1fa, __VMLINUX_SYMBOL_STR(ata_sas_scsi_ioctl) },
	{ 0x6128b5fc, __VMLINUX_SYMBOL_STR(__printk_ratelimit) },
	{ 0x8f05954d, __VMLINUX_SYMBOL_STR(scsi_dma_map) },
	{ 0xbcb76644, __VMLINUX_SYMBOL_STR(ata_sas_queuecmd) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9eba25fe, __VMLINUX_SYMBOL_STR(scmd_printk) },
	{ 0xf9b1c9bc, __VMLINUX_SYMBOL_STR(ata_sas_sync_probe) },
	{ 0xa54c555, __VMLINUX_SYMBOL_STR(ata_sas_port_init) },
	{ 0x8e1f89d3, __VMLINUX_SYMBOL_STR(ata_sas_port_alloc) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa1eacee2, __VMLINUX_SYMBOL_STR(ata_sas_port_destroy) },
	{ 0x90652e96, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x1a08b98d, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0xab3697e4, __VMLINUX_SYMBOL_STR(irq_poll_init) },
	{ 0x7f7f7bb4, __VMLINUX_SYMBOL_STR(irq_poll_disable) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xbd785ad5, __VMLINUX_SYMBOL_STR(scsi_report_device_reset) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xefe313ce, __VMLINUX_SYMBOL_STR(pci_set_pcie_reset_state) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb5aa7165, __VMLINUX_SYMBOL_STR(dma_pool_destroy) },
	{ 0x2a37d074, __VMLINUX_SYMBOL_STR(dma_pool_free) },
	{ 0x1dea959e, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xa4eb8c7b, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xf9a516bb, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x925ba13a, __VMLINUX_SYMBOL_STR(scsi_dma_unmap) },
	{ 0xd22e0242, __VMLINUX_SYMBOL_STR(ata_qc_complete) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xbf098c10, __VMLINUX_SYMBOL_STR(pci_cfg_access_trylock) },
	{ 0xb138eda2, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0x9402a6a5, __VMLINUX_SYMBOL_STR(scsilun_to_int) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xf0b108d5, __VMLINUX_SYMBOL_STR(scsi_block_requests) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x9e117a6c, __VMLINUX_SYMBOL_STR(scsi_unblock_requests) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xfb15bd25, __VMLINUX_SYMBOL_STR(scsi_report_bus_reset) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata,scsi_mod";

MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd00000266bc*sc*i*");
MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd00000278bc*sc*i*");
MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd000002D4bc*sc*i*");
MODULE_ALIAS("pci:v00001069d0000B166sv00001014sd000002D3bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000028Csv00001014sd000002BEbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000028Csv00001014sd0000028Dbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000028Csv00001014sd000002C0bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000028Csv00001014sd0000030Dbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000500sv00001014sd000002C1bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000500sv00001014sd000002C2bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000500sv00001014sd00000338bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000002BDsv00001014sd000002C1bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000002BDsv00001014sd000002C2bc*sc*i*");
MODULE_ALIAS("pci:v00001014d000002BDsv00001014sd00000338bc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000339sv00001014sd0000030Abc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000339sv00001014sd0000033Abc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000339sv00001014sd0000035Cbc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000339sv00001014sd00000360bc*sc*i*");
MODULE_ALIAS("pci:v00001014d00000180sv00001014sd00000264bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000503sv00001014sd000002BFbc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000503sv00001014sd000002D5bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000503sv00001014sd000002C3bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd0000033Cbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd00000356bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd0000035Fbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd00000352bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd00000353bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000033Dsv00001014sd00000354bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000033Bbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000355bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000357bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000035Dbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000035Ebc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000003FBbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000003FCbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000003FFbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000003FEbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000046Dbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000004CAbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000474bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000475bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd00000499bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000049Abc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000049Bbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd0000049Cbc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000004C7bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000004C8bc*sc*i*");
MODULE_ALIAS("pci:v00001014d0000034Asv00001014sd000004C9bc*sc*i*");

MODULE_INFO(srcversion, "A10354C31CF2467A5D55D99");
