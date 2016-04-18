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
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x2a303d4d, __VMLINUX_SYMBOL_STR(check_signature) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x8f6d00f0, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x8733aade, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x2b227e8a, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x245ccad5, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x56947347, __VMLINUX_SYMBOL_STR(dmi_walk) },
	{ 0xe13cd8a7, __VMLINUX_SYMBOL_STR(dmi_name_in_vendors) },
	{ 0xb9f9ae95, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x5c912edc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x270e8dd, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0x39c6ca22, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0xaea976a8, __VMLINUX_SYMBOL_STR(acpi_check_resource_conflict) },
	{ 0x2869b285, __VMLINUX_SYMBOL_STR(pcim_pin_device) },
	{ 0x597e7731, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x79e7ed18, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x3cbedc87, __VMLINUX_SYMBOL_STR(set_primary_fwnode) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8074028d, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xedaa19a7, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0xcd265af1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x14a4e0b4, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x2e6e5c27, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x2d09eb2b, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0xe8109543, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0xf9a516bb, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x49581969, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xf6a9feb8, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00008086d00002413sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002423sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002443sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002483sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024D3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000266Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027DAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000269Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000283Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002930sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D70sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D71sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D72sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002330sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F3Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D22sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D7Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D7Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D7Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000023B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008CA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CA2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F12sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002292sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A123sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D23sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000019DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005AD4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A1A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A223sv*sd*bc*sc*i*");
