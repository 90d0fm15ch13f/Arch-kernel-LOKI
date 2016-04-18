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
	{ 0xbd7942e8, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xb1181af, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xea554f20, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x4e1ae247, __VMLINUX_SYMBOL_STR(drm_property_create_range) },
	{ 0xee0ad904, __VMLINUX_SYMBOL_STR(drm_helper_probe_single_connector_modes) },
	{ 0xf66ecfa3, __VMLINUX_SYMBOL_STR(drm_object_property_set_value) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xbb1e4046, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xae21cc14, __VMLINUX_SYMBOL_STR(drm_object_attach_property) },
	{ 0x88084f49, __VMLINUX_SYMBOL_STR(drm_mode_duplicate) },
	{ 0x636f3c51, __VMLINUX_SYMBOL_STR(drm_mode_create_tv_properties) },
	{ 0x8b705af2, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6c0a5441, __VMLINUX_SYMBOL_STR(drm_i2c_encoder_destroy) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xec69a089, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0xfac54807, __VMLINUX_SYMBOL_STR(drm_mode_set_config_internal) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7fd5e3d0, __VMLINUX_SYMBOL_STR(drm_property_destroy) },
	{ 0x3e2ffc78, __VMLINUX_SYMBOL_STR(drm_mode_probed_add) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm,drm_kms_helper";

MODULE_ALIAS("i2c:ch7006");
