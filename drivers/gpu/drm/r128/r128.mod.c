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
	{ 0x3356b90b, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x91c0e5ad, __VMLINUX_SYMBOL_STR(drm_compat_ioctl) },
	{ 0x43622c83, __VMLINUX_SYMBOL_STR(drm_legacy_ioremapfree) },
	{ 0x74c7662e, __VMLINUX_SYMBOL_STR(drm_pci_exit) },
	{ 0xa32b090d, __VMLINUX_SYMBOL_STR(drm_ati_pcigart_cleanup) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x2300953f, __VMLINUX_SYMBOL_STR(drm_vblank_init) },
	{ 0x8074028d, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0xe2e8af02, __VMLINUX_SYMBOL_STR(drm_ati_pcigart_init) },
	{ 0x79bb0f5a, __VMLINUX_SYMBOL_STR(drm_pci_set_busid) },
	{ 0x6645ee3b, __VMLINUX_SYMBOL_STR(drm_legacy_getsarea) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x7a509c12, __VMLINUX_SYMBOL_STR(drm_handle_vblank) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1f406635, __VMLINUX_SYMBOL_STR(drm_legacy_ioremap_wc) },
	{ 0x95ba9e29, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x14a4e0b4, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x1dd71f7a, __VMLINUX_SYMBOL_STR(drm_err) },
	{ 0x20645642, __VMLINUX_SYMBOL_STR(drm_debug) },
	{ 0x2f665a27, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc3971a29, __VMLINUX_SYMBOL_STR(drm_irq_uninstall) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf0ce10f8, __VMLINUX_SYMBOL_STR(drm_legacy_mmap) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbffde8ec, __VMLINUX_SYMBOL_STR(compat_alloc_user_space) },
	{ 0xcf14c2f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0xa8ab39a3, __VMLINUX_SYMBOL_STR(drm_pci_init) },
	{ 0xc360e7e2, __VMLINUX_SYMBOL_STR(drm_ut_debug_printk) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x173ad2ac, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x47c68e03, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0x801fa0e0, __VMLINUX_SYMBOL_STR(drm_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm";

