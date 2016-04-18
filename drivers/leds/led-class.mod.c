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
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x94465962, __VMLINUX_SYMBOL_STR(class_find_device) },
	{ 0x7d41e813, __VMLINUX_SYMBOL_STR(led_stop_software_blink) },
	{ 0x4d95f411, __VMLINUX_SYMBOL_STR(led_init_core) },
	{ 0x9c6f776a, __VMLINUX_SYMBOL_STR(led_set_brightness) },
	{ 0xa036d914, __VMLINUX_SYMBOL_STR(led_trigger_set_default) },
	{ 0x72b8d318, __VMLINUX_SYMBOL_STR(led_trigger_show) },
	{ 0xe93e49c3, __VMLINUX_SYMBOL_STR(devres_free) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa5b968a9, __VMLINUX_SYMBOL_STR(device_create_with_groups) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xdaa15204, __VMLINUX_SYMBOL_STR(devres_alloc_node) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2cde5e39, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xbfb6ce61, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xe88fc204, __VMLINUX_SYMBOL_STR(led_trigger_set) },
	{ 0xe8dc188f, __VMLINUX_SYMBOL_STR(devres_release) },
	{ 0x4fb9f94, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xb8e479a8, __VMLINUX_SYMBOL_STR(led_update_brightness) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x24eb7e32, __VMLINUX_SYMBOL_STR(leds_list) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xfd895908, __VMLINUX_SYMBOL_STR(devres_add) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x9d70c4e3, __VMLINUX_SYMBOL_STR(led_trigger_store) },
	{ 0xab3fa570, __VMLINUX_SYMBOL_STR(led_trigger_remove) },
	{ 0xbd58457d, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xb5c97aba, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x231651bc, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x9e23ef7, __VMLINUX_SYMBOL_STR(led_set_brightness_nopm) },
	{ 0xb3372e39, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0xaf9439db, __VMLINUX_SYMBOL_STR(leds_list_lock) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

