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
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x56a32036, __VMLINUX_SYMBOL_STR(__platform_driver_probe) },
	{ 0x43d14dcd, __VMLINUX_SYMBOL_STR(devm_rtc_device_register) },
	{ 0x68b9f836, __VMLINUX_SYMBOL_STR(mc13xxx_irq_request) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xba546d6, __VMLINUX_SYMBOL_STR(rtc_update_irq) },
	{ 0x5838f6c9, __VMLINUX_SYMBOL_STR(rtc_valid_tm) },
	{ 0x356461c8, __VMLINUX_SYMBOL_STR(rtc_time64_to_tm) },
	{ 0x1f4e485a, __VMLINUX_SYMBOL_STR(mc13xxx_irq_status) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x4f2250ba, __VMLINUX_SYMBOL_STR(rtc_tm_to_time64) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe66a5131, __VMLINUX_SYMBOL_STR(mc13xxx_reg_write) },
	{ 0x8f509fe8, __VMLINUX_SYMBOL_STR(mc13xxx_reg_read) },
	{ 0xab436d2b, __VMLINUX_SYMBOL_STR(mc13xxx_irq_free) },
	{ 0x5e2d7cb1, __VMLINUX_SYMBOL_STR(mc13xxx_unlock) },
	{ 0x59e9506e, __VMLINUX_SYMBOL_STR(mc13xxx_irq_unmask) },
	{ 0xdb77e278, __VMLINUX_SYMBOL_STR(mc13xxx_irq_mask) },
	{ 0x987122c, __VMLINUX_SYMBOL_STR(mc13xxx_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mc13xxx-core";

MODULE_ALIAS("platform:mc13783-rtc");
MODULE_ALIAS("platform:mc13892-rtc");
MODULE_ALIAS("platform:mc34708-rtc");
