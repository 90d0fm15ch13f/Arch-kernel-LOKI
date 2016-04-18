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
	{ 0x91c0e5ad, __VMLINUX_SYMBOL_STR(drm_compat_ioctl) },
	{ 0x74c7662e, __VMLINUX_SYMBOL_STR(drm_pci_exit) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x13733273, __VMLINUX_SYMBOL_STR(drm_legacy_idlelock_take) },
	{ 0x79bb0f5a, __VMLINUX_SYMBOL_STR(drm_pci_set_busid) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x1a546ddd, __VMLINUX_SYMBOL_STR(drm_mm_init) },
	{ 0x809388ca, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x67633846, __VMLINUX_SYMBOL_STR(drm_mm_insert_node_generic) },
	{ 0x95ba9e29, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xa4fde00, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x1dd71f7a, __VMLINUX_SYMBOL_STR(drm_err) },
	{ 0xf765a158, __VMLINUX_SYMBOL_STR(drm_legacy_idlelock_release) },
	{ 0xdf1427e5, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x20645642, __VMLINUX_SYMBOL_STR(drm_debug) },
	{ 0x2f665a27, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0x81144f9d, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf0ce10f8, __VMLINUX_SYMBOL_STR(drm_legacy_mmap) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdd150721, __VMLINUX_SYMBOL_STR(drm_mm_takedown) },
	{ 0xa8ab39a3, __VMLINUX_SYMBOL_STR(drm_pci_init) },
	{ 0xc360e7e2, __VMLINUX_SYMBOL_STR(drm_ut_debug_printk) },
	{ 0xa4466414, __VMLINUX_SYMBOL_STR(drm_mm_remove_node) },
	{ 0x5fb2e8ef, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0x47c68e03, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0x801fa0e0, __VMLINUX_SYMBOL_STR(drm_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm";

