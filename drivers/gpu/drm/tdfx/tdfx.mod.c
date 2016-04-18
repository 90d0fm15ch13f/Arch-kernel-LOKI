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
	{ 0x91c0e5ad, __VMLINUX_SYMBOL_STR(drm_compat_ioctl) },
	{ 0x74c7662e, __VMLINUX_SYMBOL_STR(drm_pci_exit) },
	{ 0x79bb0f5a, __VMLINUX_SYMBOL_STR(drm_pci_set_busid) },
	{ 0x95ba9e29, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x2f665a27, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0xf0ce10f8, __VMLINUX_SYMBOL_STR(drm_legacy_mmap) },
	{ 0xa8ab39a3, __VMLINUX_SYMBOL_STR(drm_pci_init) },
	{ 0x47c68e03, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0x801fa0e0, __VMLINUX_SYMBOL_STR(drm_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm";

