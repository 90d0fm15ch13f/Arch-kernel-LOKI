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
	{ 0xa59e8efc, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x566a4ec5, __VMLINUX_SYMBOL_STR(__spi_register_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x44eaa3cf, __VMLINUX_SYMBOL_STR(usb_hcd_giveback_urb) },
	{ 0xff7b2eaf, __VMLINUX_SYMBOL_STR(usb_hcd_unlink_urb_from_ep) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xec5ad261, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xb2da8e0a, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0x79a88b5a, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xc54cc9b2, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0x9bcf62c3, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x1f988a63, __VMLINUX_SYMBOL_STR(usb_create_hcd) },
	{ 0xcd6f343a, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x31d6ecc, __VMLINUX_SYMBOL_STR(usb_hcd_link_urb_to_ep) },
	{ 0x2d9bbb2b, __VMLINUX_SYMBOL_STR(usb_hcd_check_unlink_urb) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x1293d74a, __VMLINUX_SYMBOL_STR(usb_hcd_resume_root_hub) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x84d41b47, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x3ecf2902, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbcore";

