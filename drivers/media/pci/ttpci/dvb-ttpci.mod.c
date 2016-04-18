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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x8bcbbafd, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_free) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xeaf47cb5, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_init) },
	{ 0xe3b8c66e, __VMLINUX_SYMBOL_STR(saa7146_vfree_destroy_pgtable) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x9da54278, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x1fca5e55, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0xb6c51671, __VMLINUX_SYMBOL_STR(saa7146_vmalloc_build_pgtable) },
	{ 0xf826deb0, __VMLINUX_SYMBOL_STR(dvb_filter_pes2ts) },
	{ 0x74a5a698, __VMLINUX_SYMBOL_STR(dvb_filter_pes2ts_init) },
	{ 0xc49c1597, __VMLINUX_SYMBOL_STR(saa7146_setgpio) },
	{ 0xd82225d7, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x944907a1, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x63abf15e, __VMLINUX_SYMBOL_STR(dvb_register_device) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x4cf3b0d9, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_read_user) },
	{ 0x54609bdc, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xd1c0141e, __VMLINUX_SYMBOL_STR(proc_set_size) },
	{ 0xff370a9a, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x167e7f9d, __VMLINUX_SYMBOL_STR(__get_user_1) },
	{ 0xa53fd4d8, __VMLINUX_SYMBOL_STR(saa7146_stop_preview) },
	{ 0x60e27ede, __VMLINUX_SYMBOL_STR(saa7146_set_hps_source_and_sync) },
	{ 0x24428be5, __VMLINUX_SYMBOL_STR(strncpy_from_user) },
	{ 0xc1a83fe8, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0x9bcf62c3, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb9f9ae95, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0xd8988b7b, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_flush_spinlock_wakeup) },
	{ 0x3a6284d1, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0xa9e32c5f, __VMLINUX_SYMBOL_STR(ttpci_eeprom_parse_mac) },
	{ 0x42c00678, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xdf2347a8, __VMLINUX_SYMBOL_STR(saa7146_register_device) },
	{ 0x6560e532, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_write) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x70c7b78e, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x3c7bf0ea, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x1efa54a0, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0xf1fa7158, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x79a88b5a, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x50c404fb, __VMLINUX_SYMBOL_STR(saa7146_unregister_device) },
	{ 0x28a82d5e, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x7e3df998, __VMLINUX_SYMBOL_STR(dvb_generic_release) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x393d4de9, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x95ba9e29, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x9e967386, __VMLINUX_SYMBOL_STR(dvb_unregister_device) },
	{ 0x296df6b1, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x5652f8fc, __VMLINUX_SYMBOL_STR(saa7146_start_preview) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xe6a9fa13, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x8c0ecf2, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_read) },
	{ 0x2e6e5c27, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xe9d4f949, __VMLINUX_SYMBOL_STR(saa7146_register_extension) },
	{ 0xe8ea3061, __VMLINUX_SYMBOL_STR(dvb_generic_ioctl) },
	{ 0x631af55c, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter_packets) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb3ed5ffb, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x942c87db, __VMLINUX_SYMBOL_STR(dvb_generic_open) },
	{ 0x57251682, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x3405dbfc, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_avail) },
	{ 0x3ecf2902, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xc906433a, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7d736d6a, __VMLINUX_SYMBOL_STR(saa7146_vv_release) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x22557813, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xd3c856a, __VMLINUX_SYMBOL_STR(dvb_ringbuffer_empty) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x883866e0, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x80e3832d, __VMLINUX_SYMBOL_STR(dvb_filter_get_ac3info) },
	{ 0x7c472002, __VMLINUX_SYMBOL_STR(saa7146_i2c_adapter_prepare) },
	{ 0xcf14c2f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xfd5e97f7, __VMLINUX_SYMBOL_STR(saa7146_wait_for_debi_done) },
	{ 0x666aa566, __VMLINUX_SYMBOL_STR(saa7146_vv_init) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x173ad2ac, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x5754657a, __VMLINUX_SYMBOL_STR(saa7146_unregister_extension) },
	{ 0x73f4a9b1, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0x4fd35f87, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core,saa7146,saa7146_vv,ttpci-eeprom";

MODULE_ALIAS("pci:v00001131d00007146sv0000110Asd00000000bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000000bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000001bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000002bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000003bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000004bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000006bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00000008bc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000000Abc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd0000000Ebc*sc*i*");
MODULE_ALIAS("pci:v00001131d00007146sv000013C2sd00001002bc*sc*i*");
