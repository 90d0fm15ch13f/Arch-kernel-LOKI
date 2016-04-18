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
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x72a711e7, __VMLINUX_SYMBOL_STR(cfb_imageblit) },
	{ 0x5940e928, __VMLINUX_SYMBOL_STR(cfb_copyarea) },
	{ 0x1b63457e, __VMLINUX_SYMBOL_STR(cfb_fillrect) },
	{ 0x1fa39043, __VMLINUX_SYMBOL_STR(driver_for_each_device) },
	{ 0xef3885d5, __VMLINUX_SYMBOL_STR(driver_find) },
	{ 0x6e85365a, __VMLINUX_SYMBOL_STR(pci_bus_type) },
	{ 0xcdccaed2, __VMLINUX_SYMBOL_STR(ivtv_udma_alloc) },
	{ 0x8ac9bd71, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0x7a890c8, __VMLINUX_SYMBOL_STR(fb_alloc_cmap) },
	{ 0xa9a8e17f, __VMLINUX_SYMBOL_STR(arch_phys_wc_add) },
	{ 0x71087758, __VMLINUX_SYMBOL_STR(ivtv_init_on_first_open) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x550ce709, __VMLINUX_SYMBOL_STR(pat_enabled) },
	{ 0xdd42d28b, __VMLINUX_SYMBOL_STR(ivtv_firmware_check) },
	{ 0x1bb67b39, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
	{ 0x50d68377, __VMLINUX_SYMBOL_STR(arch_phys_wc_del) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x98b71c6, __VMLINUX_SYMBOL_STR(fb_dealloc_cmap) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x3356b90b, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x14f67530, __VMLINUX_SYMBOL_STR(ivtv_debug) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd07a2c23, __VMLINUX_SYMBOL_STR(ivtv_udma_unmap) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x3bb5114a, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x69046954, __VMLINUX_SYMBOL_STR(ivtv_udma_prepare) },
	{ 0x5ed28215, __VMLINUX_SYMBOL_STR(ivtv_udma_setup) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa101afc0, __VMLINUX_SYMBOL_STR(ivtv_vapi_result) },
	{ 0xbbd83b9a, __VMLINUX_SYMBOL_STR(ivtv_vapi) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ivtv";

