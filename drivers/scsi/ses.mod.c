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
	{ 0xa59e8efc, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xc64d20cb, __VMLINUX_SYMBOL_STR(class_interface_unregister) },
	{ 0xac4bd32f, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0xc5939ab2, __VMLINUX_SYMBOL_STR(scsi_register_interface) },
	{ 0x8c886110, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x12a06986, __VMLINUX_SYMBOL_STR(enclosure_add_device) },
	{ 0x62d9cd59, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0x90ffdea0, __VMLINUX_SYMBOL_STR(enclosure_register) },
	{ 0x84983b7a, __VMLINUX_SYMBOL_STR(sas_get_address) },
	{ 0x485e94c, __VMLINUX_SYMBOL_STR(enclosure_for_each_device) },
	{ 0xde6ccb75, __VMLINUX_SYMBOL_STR(is_sas_attached) },
	{ 0xbaa5db02, __VMLINUX_SYMBOL_STR(enclosure_component_alloc) },
	{ 0xb357a4e, __VMLINUX_SYMBOL_STR(enclosure_component_register) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6974a1a7, __VMLINUX_SYMBOL_STR(scsi_execute_req_flags) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf3da8294, __VMLINUX_SYMBOL_STR(enclosure_remove_device) },
	{ 0x17c83842, __VMLINUX_SYMBOL_STR(enclosure_unregister) },
	{ 0x4fb9f94, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2b2b3333, __VMLINUX_SYMBOL_STR(enclosure_find) },
	{ 0xb138eda2, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_mod,enclosure,scsi_transport_sas";

