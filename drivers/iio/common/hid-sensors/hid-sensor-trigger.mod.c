#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5e862211, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x75de6205, __VMLINUX_SYMBOL_STR(iio_trigger_unregister) },
	{ 0x6859bd4e, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0xc48a3366, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0xd14cabb7, __VMLINUX_SYMBOL_STR(iio_trigger_alloc) },
	{ 0x20dae21b, __VMLINUX_SYMBOL_STR(sensor_hub_get_feature) },
	{ 0xffeb35ae, __VMLINUX_SYMBOL_STR(sensor_hub_device_open) },
	{ 0xd679af25, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x82f2df7f, __VMLINUX_SYMBOL_STR(hid_sensor_read_poll_value) },
	{ 0x8ccadfa5, __VMLINUX_SYMBOL_STR(sensor_hub_device_close) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb7d8f184, __VMLINUX_SYMBOL_STR(hid_sensor_get_usage_index) },
	{ 0x79fc2151, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x93b1554a, __VMLINUX_SYMBOL_STR(iio_trigger_register) },
	{ 0xd5957482, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x9e54223f, __VMLINUX_SYMBOL_STR(sensor_hub_set_feature) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x8dfc89f0, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x79f29d12, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x797e0ad7, __VMLINUX_SYMBOL_STR(iio_trigger_free) },
	{ 0xafa0835e, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio,hid-sensor-hub,hid-sensor-iio-common";

