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
	{ 0xbd7942e8, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5c912edc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x42a25e97, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd2669c41, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x1bc05b6, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x85f5b38c, __VMLINUX_SYMBOL_STR(ir_raw_event_store_with_filter) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x69a358a6, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x336c6d0, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0xd2d1927b, __VMLINUX_SYMBOL_STR(hrtimer_forward) },
	{ 0xc34171c6, __VMLINUX_SYMBOL_STR(tveeprom_hauppauge_analog) },
	{ 0xa33e8b13, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xe418fde4, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x944907a1, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0x468937ed, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xf2a353ac, __VMLINUX_SYMBOL_STR(v4l2_i2c_tuner_addrs) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa17e6d0a, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x57c9a5f0, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xd45ea32f, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0xd805a922, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x4d3c16fc, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9ff713cb, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0xbb5d3bed, __VMLINUX_SYMBOL_STR(rc_keydown) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x65e8a892, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc0a0c007, __VMLINUX_SYMBOL_STR(rc_keydown_notimeout) },
	{ 0x12a08047, __VMLINUX_SYMBOL_STR(tveeprom_read) },
	{ 0xa0dd51ff, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0xabba9fd9, __VMLINUX_SYMBOL_STR(rc_keyup) },
	{ 0xe6a9fa13, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x2e6e5c27, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x6ec1abd6, __VMLINUX_SYMBOL_STR(i2c_smbus_xfer) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xb678366f, __VMLINUX_SYMBOL_STR(int_sqrt) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xe7cf1e94, __VMLINUX_SYMBOL_STR(v4l2_ctrl_grab) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xec69a089, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xdc14eda7, __VMLINUX_SYMBOL_STR(pci_pci_problems) },
	{ 0xe8109543, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0x83ba5fbb, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x888dcdf4, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xc371c3cc, __VMLINUX_SYMBOL_STR(i2c_bit_add_bus) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x60d1ccca, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0x8f6d00f0, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xf3251e7b, __VMLINUX_SYMBOL_STR(v4l2_norm_to_name) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core,videodev,v4l2-common,tveeprom,videobuf2-core,i2c-algo-bit";

