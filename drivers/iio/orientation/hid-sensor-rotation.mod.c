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
	{ 0x4e09bc83, __VMLINUX_SYMBOL_STR(sensor_hub_register_callback) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5ac3036, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x12a96826, __VMLINUX_SYMBOL_STR(hid_sensor_setup_trigger) },
	{ 0x4129a2bc, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
	{ 0xdf76bbeb, __VMLINUX_SYMBOL_STR(iio_pollfunc_store_time) },
	{ 0xd79ee8be, __VMLINUX_SYMBOL_STR(sensor_hub_input_get_attribute_info) },
	{ 0xe1b60dea, __VMLINUX_SYMBOL_STR(devm_kmemdup) },
	{ 0x766eb032, __VMLINUX_SYMBOL_STR(hid_sensor_parse_common_attributes) },
	{ 0x14cedccb, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0x7bb85b1e, __VMLINUX_SYMBOL_STR(hid_sensor_read_samp_freq_value) },
	{ 0xdfd4ca34, __VMLINUX_SYMBOL_STR(hid_sensor_read_raw_hyst_value) },
	{ 0x763cdac5, __VMLINUX_SYMBOL_STR(iio_push_to_buffers) },
	{ 0x476ab1a5, __VMLINUX_SYMBOL_STR(hid_sensor_write_samp_freq_value) },
	{ 0x9889b2c5, __VMLINUX_SYMBOL_STR(hid_sensor_write_raw_hyst_value) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xa1e75bfa, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0xf82af71a, __VMLINUX_SYMBOL_STR(hid_sensor_remove_trigger) },
	{ 0x334d1e84, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0xf5208dc9, __VMLINUX_SYMBOL_STR(sensor_hub_remove_callback) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid-sensor-hub,industrialio,hid-sensor-trigger,industrialio-triggered-buffer,hid-sensor-iio-common";

MODULE_ALIAS("platform:HID-SENSOR-20008a");
