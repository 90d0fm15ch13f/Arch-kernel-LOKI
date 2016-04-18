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
	{ 0x9a1dfd65, __VMLINUX_SYMBOL_STR(strpbrk) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5c912edc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x3369cba9, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0x521d817c, __VMLINUX_SYMBOL_STR(videocodec_attach) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x3386efc1, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x336c6d0, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xb97785f1, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xa33e8b13, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x468937ed, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x54609bdc, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xeae2cb29, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x339b4475, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x8e9ddd80, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x57c9a5f0, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x67081da3, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xcacdeb96, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb59704da, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x153c240e, __VMLINUX_SYMBOL_STR(v4l2_fh_init) },
	{ 0xd2dc9b40, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xedaa19a7, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x2e6e5c27, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0x2b227e8a, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x2974e6b2, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x65bd2eb5, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xdc14eda7, __VMLINUX_SYMBOL_STR(pci_pci_problems) },
	{ 0x28f5601e, __VMLINUX_SYMBOL_STR(videocodec_detach) },
	{ 0x22557813, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xe8109543, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x723b74aa, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x37176ede, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3bb5114a, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x888dcdf4, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xeac34e92, __VMLINUX_SYMBOL_STR(v4l2_fh_add) },
	{ 0x961d5d07, __VMLINUX_SYMBOL_STR(v4l2_fh_del) },
	{ 0xc371c3cc, __VMLINUX_SYMBOL_STR(i2c_bit_add_bus) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x6b71aeb1, __VMLINUX_SYMBOL_STR(param_ops_ulong) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0xca62b868, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xa08727e7, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x377bb193, __VMLINUX_SYMBOL_STR(v4l2_fh_exit) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,videocodec,v4l2-common,i2c-algo-bit";

MODULE_ALIAS("pci:v000011DEd00006057sv00001031sd00007EFEbc*sc*i*");
MODULE_ALIAS("pci:v000011DEd00006057sv00001031sd0000D801bc*sc*i*");
MODULE_ALIAS("pci:v000011DEd00006057sv000012F8sd00008A02bc*sc*i*");
MODULE_ALIAS("pci:v000011DEd00006057sv000013CAsd00004231bc*sc*i*");
MODULE_ALIAS("pci:v000011DEd00006057sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F4B166B6AC5C445FB29D8DB");
