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
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x6b4c4146, __VMLINUX_SYMBOL_STR(power_supply_changed) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x59688cf7, __VMLINUX_SYMBOL_STR(atomic_notifier_chain_register) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x7fe11ad1, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xfb1bf9a1, __VMLINUX_SYMBOL_STR(power_supply_register) },
	{ 0xa9bf98d, __VMLINUX_SYMBOL_STR(usb_get_phy) },
	{ 0x9b0aaca8, __VMLINUX_SYMBOL_STR(platform_get_resource_byname) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x33ec2cd1, __VMLINUX_SYMBOL_STR(usb_put_phy) },
	{ 0x6512c663, __VMLINUX_SYMBOL_STR(power_supply_unregister) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

