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
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4f6f6ff2, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xdd89b658, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x92b22b5, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xd679af25, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x88b966ec, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x14a4e0b4, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xefd24019, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0x16fe83a6, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x48d212cd, __VMLINUX_SYMBOL_STR(sdio_f0_writeb) },
	{ 0xfe73309a, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7231563e, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe65b210e, __VMLINUX_SYMBOL_STR(mmc_power_save_host) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x7751ea6d, __VMLINUX_SYMBOL_STR(mmc_power_restore_host) },
	{ 0x30d12acd, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf80ef3f2, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xfa5ba5ff, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0x94e48a7a, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x6b2f6ff0, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0xa0eb2176, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x15c03c40, __VMLINUX_SYMBOL_STR(sdio_release_host) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core";

MODULE_ALIAS("sdio:c*v0097d4076*");
