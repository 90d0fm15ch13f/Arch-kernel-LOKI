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
	{ 0x91040120, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5aadc0dc, __VMLINUX_SYMBOL_STR(drm_dev_register) },
	{ 0x510394e2, __VMLINUX_SYMBOL_STR(drm_gem_put_pages) },
	{ 0x1ed02f33, __VMLINUX_SYMBOL_STR(drm_dev_alloc) },
	{ 0x91cf5c2d, __VMLINUX_SYMBOL_STR(drm_gem_free_mmap_offset) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x27436bee, __VMLINUX_SYMBOL_STR(drm_dev_unref) },
	{ 0xc57bee4b, __VMLINUX_SYMBOL_STR(drm_dev_unregister) },
	{ 0xe35e888e, __VMLINUX_SYMBOL_STR(drm_gem_handle_create) },
	{ 0x7d81d2de, __VMLINUX_SYMBOL_STR(dma_buf_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x66b92003, __VMLINUX_SYMBOL_STR(drm_gem_object_release) },
	{ 0x9f8150cd, __VMLINUX_SYMBOL_STR(drm_read) },
	{ 0xe35252f5, __VMLINUX_SYMBOL_STR(drm_gem_vm_open) },
	{ 0xd786f5e8, __VMLINUX_SYMBOL_STR(vm_insert_page) },
	{ 0x3ca0957, __VMLINUX_SYMBOL_STR(drm_gem_vm_close) },
	{ 0x20645642, __VMLINUX_SYMBOL_STR(drm_debug) },
	{ 0x4ea1f5a2, __VMLINUX_SYMBOL_STR(drm_gem_object_free) },
	{ 0x2f665a27, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0x5f561843, __VMLINUX_SYMBOL_STR(drm_gem_mmap) },
	{ 0xfe355749, __VMLINUX_SYMBOL_STR(drm_gem_object_lookup) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2dc82fdc, __VMLINUX_SYMBOL_STR(drm_gem_object_init) },
	{ 0xae4a1410, __VMLINUX_SYMBOL_STR(drm_dev_set_unique) },
	{ 0xe403b468, __VMLINUX_SYMBOL_STR(drm_gem_create_mmap_offset) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc360e7e2, __VMLINUX_SYMBOL_STR(drm_ut_debug_printk) },
	{ 0xd9af73a6, __VMLINUX_SYMBOL_STR(drm_gem_get_pages) },
	{ 0x47c68e03, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0x801fa0e0, __VMLINUX_SYMBOL_STR(drm_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm";

