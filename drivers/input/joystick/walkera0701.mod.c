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
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x86a2caf0, __VMLINUX_SYMBOL_STR(parport_unregister_driver) },
	{ 0xc3ac7e7a, __VMLINUX_SYMBOL_STR(__parport_register_driver) },
	{ 0x883866e0, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x42c00678, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xd45ea32f, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x74b9f79b, __VMLINUX_SYMBOL_STR(hrtimer_try_to_cancel) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x8e1226e2, __VMLINUX_SYMBOL_STR(parport_claim) },
	{ 0xb3e1bb0f, __VMLINUX_SYMBOL_STR(parport_release) },
	{ 0xe418fde4, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x21428eb8, __VMLINUX_SYMBOL_STR(parport_unregister_device) },
	{ 0x57251682, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb3ed5ffb, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x85881d8f, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x4fd35f87, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x83ba5fbb, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x45efa539, __VMLINUX_SYMBOL_STR(parport_negotiate) },
	{ 0x1965bfb7, __VMLINUX_SYMBOL_STR(parport_register_dev_model) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=parport";

