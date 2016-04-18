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
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xe8101219, __VMLINUX_SYMBOL_STR(fb_sys_read) },
	{ 0xdd2e185e, __VMLINUX_SYMBOL_STR(xenbus_unregister_driver) },
	{ 0x5c72451, __VMLINUX_SYMBOL_STR(__xenbus_register_frontend) },
	{ 0x85cb2c45, __VMLINUX_SYMBOL_STR(xen_has_pv_devices) },
	{ 0xa11b55b2, __VMLINUX_SYMBOL_STR(xen_start_info) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0xa31c26f4, __VMLINUX_SYMBOL_STR(fb_sys_write) },
	{ 0xc16b4743, __VMLINUX_SYMBOL_STR(sys_fillrect) },
	{ 0x8348eb15, __VMLINUX_SYMBOL_STR(sys_copyarea) },
	{ 0x15f98235, __VMLINUX_SYMBOL_STR(sys_imageblit) },
	{ 0x86623fd7, __VMLINUX_SYMBOL_STR(notify_remote_via_irq) },
	{ 0x6968c54b, __VMLINUX_SYMBOL_STR(register_console) },
	{ 0x67dab13c, __VMLINUX_SYMBOL_STR(unregister_console) },
	{ 0xc631580a, __VMLINUX_SYMBOL_STR(console_unlock) },
	{ 0x2e9d688b, __VMLINUX_SYMBOL_STR(console_drivers) },
	{ 0xfbaaf01e, __VMLINUX_SYMBOL_STR(console_lock) },
	{ 0x2459bbcc, __VMLINUX_SYMBOL_STR(console_set_on_cmdline) },
	{ 0x8ac9bd71, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0x6fd3e55e, __VMLINUX_SYMBOL_STR(fb_deferred_io_init) },
	{ 0x7a890c8, __VMLINUX_SYMBOL_STR(fb_alloc_cmap) },
	{ 0x846a4eda, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x964add15, __VMLINUX_SYMBOL_STR(xenbus_scanf) },
	{ 0x28451120, __VMLINUX_SYMBOL_STR(xenbus_frontend_closed) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xdeae2349, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0x98b71c6, __VMLINUX_SYMBOL_STR(fb_dealloc_cmap) },
	{ 0x1bb67b39, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
	{ 0x8b65b399, __VMLINUX_SYMBOL_STR(fb_deferred_io_cleanup) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa8cfa9c3, __VMLINUX_SYMBOL_STR(xenbus_free_evtchn) },
	{ 0x73e7bc97, __VMLINUX_SYMBOL_STR(xenbus_switch_state) },
	{ 0x7712771a, __VMLINUX_SYMBOL_STR(unbind_from_irqhandler) },
	{ 0x70f9b509, __VMLINUX_SYMBOL_STR(xenbus_dev_fatal) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x8c06a108, __VMLINUX_SYMBOL_STR(xenbus_transaction_start) },
	{ 0xca81ea9a, __VMLINUX_SYMBOL_STR(xenbus_transaction_end) },
	{ 0x73013896, __VMLINUX_SYMBOL_STR(xenbus_printf) },
	{ 0xe41534ce, __VMLINUX_SYMBOL_STR(bind_evtchn_to_irqhandler) },
	{ 0x7c097ed0, __VMLINUX_SYMBOL_STR(xenbus_alloc_evtchn) },
	{ 0xfe727411, __VMLINUX_SYMBOL_STR(get_phys_to_machine) },
	{ 0x25f02c87, __VMLINUX_SYMBOL_STR(xen_p2m_addr) },
	{ 0x3a7d80f9, __VMLINUX_SYMBOL_STR(xen_max_p2m_pfn) },
	{ 0x3362b03c, __VMLINUX_SYMBOL_STR(xen_p2m_size) },
	{ 0x55526907, __VMLINUX_SYMBOL_STR(xen_features) },
	{ 0xac9828d3, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fb_sys_fops,sysfillrect,syscopyarea,sysimgblt";

