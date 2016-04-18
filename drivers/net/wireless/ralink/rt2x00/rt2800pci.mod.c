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
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x41136b6e, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0x697a47c2, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0x29e23ad, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0x761fddcb, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0x13af8a89, __VMLINUX_SYMBOL_STR(rt2800_get_survey) },
	{ 0x476b05c7, __VMLINUX_SYMBOL_STR(rt2800_ampdu_action) },
	{ 0x667574ec, __VMLINUX_SYMBOL_STR(rt2800_get_tsf) },
	{ 0x3853fb9, __VMLINUX_SYMBOL_STR(rt2800_conf_tx) },
	{ 0x7a6ede34, __VMLINUX_SYMBOL_STR(rt2x00mac_sta_remove) },
	{ 0xbb643651, __VMLINUX_SYMBOL_STR(rt2x00mac_sta_add) },
	{ 0xe408d68d, __VMLINUX_SYMBOL_STR(rt2800_set_rts_threshold) },
	{ 0xf757279d, __VMLINUX_SYMBOL_STR(rt2800_get_key_seq) },
	{ 0x9a525d40, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0xd70f0d6f, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0x8e995bc8, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0x6446f4cf, __VMLINUX_SYMBOL_STR(rt2x00mac_set_key) },
	{ 0x5c85cc58, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0xa3cfddae, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0xa9bc1b81, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0x7d4786db, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0xced9b0a6, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x20f7465b, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0x4c7948d1, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0x67c1b3a, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0x6d3802f9, __VMLINUX_SYMBOL_STR(rt2800mmio_get_txwi) },
	{ 0xa88a2299, __VMLINUX_SYMBOL_STR(rt2800mmio_init_registers) },
	{ 0xe747dbe0, __VMLINUX_SYMBOL_STR(rt2x00mmio_regbusy_read) },
	{ 0x91a680b9, __VMLINUX_SYMBOL_STR(rt2800_sta_remove) },
	{ 0x8ea6698, __VMLINUX_SYMBOL_STR(rt2800_sta_add) },
	{ 0x52ce5541, __VMLINUX_SYMBOL_STR(rt2800_config) },
	{ 0x6f48cb3a, __VMLINUX_SYMBOL_STR(rt2800_config_ant) },
	{ 0x85442493, __VMLINUX_SYMBOL_STR(rt2800_config_erp) },
	{ 0x62669c93, __VMLINUX_SYMBOL_STR(rt2800_config_intf) },
	{ 0xad72f9a6, __VMLINUX_SYMBOL_STR(rt2800_config_filter) },
	{ 0x71b52258, __VMLINUX_SYMBOL_STR(rt2800_config_pairwise_key) },
	{ 0x8001b166, __VMLINUX_SYMBOL_STR(rt2800_config_shared_key) },
	{ 0xe6e4531, __VMLINUX_SYMBOL_STR(rt2800mmio_fill_rxdone) },
	{ 0xe9fa7e82, __VMLINUX_SYMBOL_STR(rt2800_clear_beacon) },
	{ 0xdb0f1b7e, __VMLINUX_SYMBOL_STR(rt2800_write_beacon) },
	{ 0x595c12f9, __VMLINUX_SYMBOL_STR(rt2800_write_tx_data) },
	{ 0xd69f94e7, __VMLINUX_SYMBOL_STR(rt2800mmio_write_tx_desc) },
	{ 0x2a140118, __VMLINUX_SYMBOL_STR(rt2x00mmio_flush_queue) },
	{ 0xce96df81, __VMLINUX_SYMBOL_STR(rt2800mmio_stop_queue) },
	{ 0x7557ef8d, __VMLINUX_SYMBOL_STR(rt2800mmio_kick_queue) },
	{ 0xc613eec6, __VMLINUX_SYMBOL_STR(rt2800mmio_start_queue) },
	{ 0x89c19011, __VMLINUX_SYMBOL_STR(rt2800_vco_calibration) },
	{ 0xbe975b90, __VMLINUX_SYMBOL_STR(rt2800_gain_calibration) },
	{ 0x9b608d4a, __VMLINUX_SYMBOL_STR(rt2800_link_tuner) },
	{ 0xcb1703f8, __VMLINUX_SYMBOL_STR(rt2800_reset_tuner) },
	{ 0x18c681d8, __VMLINUX_SYMBOL_STR(rt2800_link_stats) },
	{ 0x71a592e3, __VMLINUX_SYMBOL_STR(rt2800_rfkill_poll) },
	{ 0x7ea1d448, __VMLINUX_SYMBOL_STR(rt2800mmio_clear_entry) },
	{ 0x19da3fa6, __VMLINUX_SYMBOL_STR(rt2800mmio_get_entry_state) },
	{ 0xea33f952, __VMLINUX_SYMBOL_STR(rt2x00mmio_uninitialize) },
	{ 0xe4659abf, __VMLINUX_SYMBOL_STR(rt2x00mmio_initialize) },
	{ 0x81dd09ad, __VMLINUX_SYMBOL_STR(rt2800_load_firmware) },
	{ 0x5c5310f8, __VMLINUX_SYMBOL_STR(rt2800_check_firmware) },
	{ 0x8398f4c4, __VMLINUX_SYMBOL_STR(rt2800_probe_hw) },
	{ 0xc6a1455e, __VMLINUX_SYMBOL_STR(rt2800mmio_autowake_tasklet) },
	{ 0x92c0bcd1, __VMLINUX_SYMBOL_STR(rt2800mmio_rxdone_tasklet) },
	{ 0x2505789d, __VMLINUX_SYMBOL_STR(rt2800mmio_tbtt_tasklet) },
	{ 0xfad1430, __VMLINUX_SYMBOL_STR(rt2800mmio_pretbtt_tasklet) },
	{ 0xe28f94c7, __VMLINUX_SYMBOL_STR(rt2800mmio_txstatus_tasklet) },
	{ 0x5fa4db64, __VMLINUX_SYMBOL_STR(rt2800mmio_interrupt) },
	{ 0xcaa8f926, __VMLINUX_SYMBOL_STR(rt2800mmio_queue_init) },
	{ 0x553259d6, __VMLINUX_SYMBOL_STR(rt2x00pci_resume) },
	{ 0xfeab285, __VMLINUX_SYMBOL_STR(rt2x00pci_suspend) },
	{ 0xc27e1775, __VMLINUX_SYMBOL_STR(rt2x00pci_remove) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x1ae057f6, __VMLINUX_SYMBOL_STR(rt2800mmio_toggle_irq) },
	{ 0x1e887f44, __VMLINUX_SYMBOL_STR(rt2800mmio_enable_radio) },
	{ 0xf363b2f7, __VMLINUX_SYMBOL_STR(rt2800_mcu_request) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc5394b14, __VMLINUX_SYMBOL_STR(rt2800_read_eeprom_efuse) },
	{ 0x27cb133b, __VMLINUX_SYMBOL_STR(eeprom_93cx6_multiread) },
	{ 0xa7a4d941, __VMLINUX_SYMBOL_STR(rt2800_efuse_detect) },
	{ 0x6eb1065a, __VMLINUX_SYMBOL_STR(rt2x00pci_probe) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xb5848bae, __VMLINUX_SYMBOL_STR(__iowrite32_copy) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,rt2800lib,rt2800mmio,rt2x00mmio,rt2x00pci,eeprom_93cx6";

MODULE_ALIAS("pci:v00001814d00000601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000701sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000781sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003092sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007708sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007728sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007738sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007748sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007758sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007768sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001462d0000891Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001A3Bd00001059sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003290sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007711sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007722sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003562sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003592sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003593sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000359Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005362sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005392sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F67D5A99B75482AD6FE4E7F");
