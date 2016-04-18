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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf1a3e91c, __VMLINUX_SYMBOL_STR(serio_interrupt) },
	{ 0x63eb9355, __VMLINUX_SYMBOL_STR(panic_blink) },
	{ 0x42635d55, __VMLINUX_SYMBOL_STR(pm_suspend_global_flags) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x801b26d6, __VMLINUX_SYMBOL_STR(pnp_unregister_driver) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe1c6c34a, __VMLINUX_SYMBOL_STR(serio_unregister_port) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb7cb68df, __VMLINUX_SYMBOL_STR(serio_bus) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x14a4e0b4, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xe9e380d2, __VMLINUX_SYMBOL_STR(pnp_register_driver) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x755aaba0, __VMLINUX_SYMBOL_STR(pnp_get_resource) },
	{ 0x75576d5c, __VMLINUX_SYMBOL_STR(bus_register_notifier) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6daaaebe, __VMLINUX_SYMBOL_STR(__platform_create_bundle) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37c2b623, __VMLINUX_SYMBOL_STR(__serio_register_port) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xca563aeb, __VMLINUX_SYMBOL_STR(bus_unregister_notifier) },
	{ 0x28c9fdba, __VMLINUX_SYMBOL_STR(device_set_wakeup_capable) },
	{ 0x490a8df6, __VMLINUX_SYMBOL_STR(x86_platform) },
	{ 0x7f6df4a7, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=serio";

MODULE_ALIAS("pnp:dAUI0200*");
MODULE_ALIAS("acpi*:AUI0200:*");
MODULE_ALIAS("pnp:dFJC6000*");
MODULE_ALIAS("acpi*:FJC6000:*");
MODULE_ALIAS("pnp:dFJC6001*");
MODULE_ALIAS("acpi*:FJC6001:*");
MODULE_ALIAS("pnp:dPNP0f03*");
MODULE_ALIAS("acpi*:PNP0F03:*");
MODULE_ALIAS("pnp:dPNP0f0b*");
MODULE_ALIAS("acpi*:PNP0F0B:*");
MODULE_ALIAS("pnp:dPNP0f0e*");
MODULE_ALIAS("acpi*:PNP0F0E:*");
MODULE_ALIAS("pnp:dPNP0f12*");
MODULE_ALIAS("acpi*:PNP0F12:*");
MODULE_ALIAS("pnp:dPNP0f13*");
MODULE_ALIAS("acpi*:PNP0F13:*");
MODULE_ALIAS("pnp:dPNP0f19*");
MODULE_ALIAS("acpi*:PNP0F19:*");
MODULE_ALIAS("pnp:dPNP0f1c*");
MODULE_ALIAS("acpi*:PNP0F1C:*");
MODULE_ALIAS("pnp:dSYN0801*");
MODULE_ALIAS("acpi*:SYN0801:*");
MODULE_ALIAS("pnp:dPNP0300*");
MODULE_ALIAS("acpi*:PNP0300:*");
MODULE_ALIAS("pnp:dPNP0301*");
MODULE_ALIAS("acpi*:PNP0301:*");
MODULE_ALIAS("pnp:dPNP0302*");
MODULE_ALIAS("acpi*:PNP0302:*");
MODULE_ALIAS("pnp:dPNP0303*");
MODULE_ALIAS("acpi*:PNP0303:*");
MODULE_ALIAS("pnp:dPNP0304*");
MODULE_ALIAS("acpi*:PNP0304:*");
MODULE_ALIAS("pnp:dPNP0305*");
MODULE_ALIAS("acpi*:PNP0305:*");
MODULE_ALIAS("pnp:dPNP0306*");
MODULE_ALIAS("acpi*:PNP0306:*");
MODULE_ALIAS("pnp:dPNP0309*");
MODULE_ALIAS("acpi*:PNP0309:*");
MODULE_ALIAS("pnp:dPNP030a*");
MODULE_ALIAS("acpi*:PNP030A:*");
MODULE_ALIAS("pnp:dPNP030b*");
MODULE_ALIAS("acpi*:PNP030B:*");
MODULE_ALIAS("pnp:dPNP0320*");
MODULE_ALIAS("acpi*:PNP0320:*");
MODULE_ALIAS("pnp:dPNP0343*");
MODULE_ALIAS("acpi*:PNP0343:*");
MODULE_ALIAS("pnp:dPNP0344*");
MODULE_ALIAS("acpi*:PNP0344:*");
MODULE_ALIAS("pnp:dPNP0345*");
MODULE_ALIAS("acpi*:PNP0345:*");
MODULE_ALIAS("pnp:dCPQA0D7*");
MODULE_ALIAS("acpi*:CPQA0D7:*");
