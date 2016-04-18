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
	{ 0x2f31b3ec, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0x7c49c773, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0x5a110592, __VMLINUX_SYMBOL_STR(roccat_common2_receive) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x562f9257, __VMLINUX_SYMBOL_STR(roccat_common2_send) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc9dd14a5, __VMLINUX_SYMBOL_STR(sysfs_create_bin_file) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xda26c251, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x897792e3, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0xc7f1212d, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9145fe5d, __VMLINUX_SYMBOL_STR(sysfs_remove_bin_file) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid,hid-roccat-common";

MODULE_ALIAS("hid:b0003g*v00001E7Dp00002C2E");
