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
	{ 0xb5a6ebe2, __VMLINUX_SYMBOL_STR(wmi_remove_notify_handler) },
	{ 0x3ecf6cfc, __VMLINUX_SYMBOL_STR(wmi_install_notify_handler) },
	{ 0x57251682, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xb3ed5ffb, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x9e788ced, __VMLINUX_SYMBOL_STR(sparse_keymap_setup) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4fd35f87, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x56947347, __VMLINUX_SYMBOL_STR(dmi_walk) },
	{ 0xfb882fb7, __VMLINUX_SYMBOL_STR(wmi_query_block) },
	{ 0xc9d4d6d1, __VMLINUX_SYMBOL_STR(wmi_has_guid) },
	{ 0x883866e0, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x8c803238, __VMLINUX_SYMBOL_STR(sparse_keymap_free) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x876d29f1, __VMLINUX_SYMBOL_STR(wmi_get_event_data) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x7cc484a5, __VMLINUX_SYMBOL_STR(acpi_video_handles_brightness_key_presses) },
	{ 0x5e400dc1, __VMLINUX_SYMBOL_STR(sparse_keymap_report_entry) },
	{ 0xc91139df, __VMLINUX_SYMBOL_STR(sparse_keymap_entry_from_scancode) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wmi,sparse-keymap,video";

