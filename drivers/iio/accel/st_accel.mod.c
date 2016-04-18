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
	{ 0xa1e75bfa, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0xf3d6485e, __VMLINUX_SYMBOL_STR(st_sensors_set_dataready_irq) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa6e716f7, __VMLINUX_SYMBOL_STR(st_sensors_power_enable) },
	{ 0xdf76bbeb, __VMLINUX_SYMBOL_STR(iio_pollfunc_store_time) },
	{ 0xa913fbee, __VMLINUX_SYMBOL_STR(st_sensors_set_enable) },
	{ 0x74d7047, __VMLINUX_SYMBOL_STR(st_sensors_trigger_handler) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd5803494, __VMLINUX_SYMBOL_STR(st_sensors_deallocate_trigger) },
	{ 0x66431818, __VMLINUX_SYMBOL_STR(st_sensors_sysfs_sampling_frequency_avail) },
	{ 0x5ac3036, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0xf5a00363, __VMLINUX_SYMBOL_STR(st_sensors_allocate_trigger) },
	{ 0x334d1e84, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0xd8f37a30, __VMLINUX_SYMBOL_STR(st_sensors_set_fullscale_by_gain) },
	{ 0x7f96ea1c, __VMLINUX_SYMBOL_STR(st_sensors_check_device_support) },
	{ 0x1a2936a4, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_postenable) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xaa08e3bc, __VMLINUX_SYMBOL_STR(st_sensors_power_disable) },
	{ 0x2af5cfd2, __VMLINUX_SYMBOL_STR(st_sensors_init_sensor) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x38e9b010, __VMLINUX_SYMBOL_STR(st_sensors_debugfs_reg_access) },
	{ 0x45a7a3d1, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_predisable) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x19d5ed04, __VMLINUX_SYMBOL_STR(st_sensors_set_odr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x211daff9, __VMLINUX_SYMBOL_STR(st_sensors_sysfs_scale_avail) },
	{ 0x7084f105, __VMLINUX_SYMBOL_STR(st_sensors_set_axis_enable) },
	{ 0xd4d29fa2, __VMLINUX_SYMBOL_STR(st_sensors_read_info_raw) },
	{ 0x4129a2bc, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=industrialio-triggered-buffer,st_sensors,industrialio";

