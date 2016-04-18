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
	{ 0xfe71698b, __VMLINUX_SYMBOL_STR(rtsx_pci_write_ppbuf) },
	{ 0x7fe38f48, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0x7c354a64, __VMLINUX_SYMBOL_STR(rtsx_pci_dma_transfer) },
	{ 0xffd3f10e, __VMLINUX_SYMBOL_STR(rtsx_pci_send_cmd_no_wait) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd08f6239, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xcd169d03, __VMLINUX_SYMBOL_STR(rtsx_pci_read_ppbuf) },
	{ 0xa2f18417, __VMLINUX_SYMBOL_STR(rtsx_pci_card_pull_ctl_disable) },
	{ 0xc5ab3556, __VMLINUX_SYMBOL_STR(rtsx_pci_card_power_off) },
	{ 0xfbee6e10, __VMLINUX_SYMBOL_STR(rtsx_pci_switch_clock) },
	{ 0xcb4360f4, __VMLINUX_SYMBOL_STR(rtsx_pci_card_power_on) },
	{ 0x642244a3, __VMLINUX_SYMBOL_STR(rtsx_pci_card_pull_ctl_enable) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb51c92a2, __VMLINUX_SYMBOL_STR(rtsx_pci_switch_output_voltage) },
	{ 0x78ce2ffe, __VMLINUX_SYMBOL_STR(rtsx_pci_write_register) },
	{ 0x9951f541, __VMLINUX_SYMBOL_STR(rtsx_pci_read_register) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x4c48fcac, __VMLINUX_SYMBOL_STR(rtsx_pci_card_exclusive_check) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd761932a, __VMLINUX_SYMBOL_STR(rtsx_pci_dma_map_sg) },
	{ 0xb75f7c12, __VMLINUX_SYMBOL_STR(rtsx_pci_card_exist) },
	{ 0xb2d3d11, __VMLINUX_SYMBOL_STR(rtsx_pci_send_cmd) },
	{ 0xc35a5ca8, __VMLINUX_SYMBOL_STR(rtsx_pci_dma_unmap_sg) },
	{ 0x4f58991c, __VMLINUX_SYMBOL_STR(rtsx_pci_add_cmd) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x88393f8c, __VMLINUX_SYMBOL_STR(rtsx_pci_start_run) },
	{ 0x55339187, __VMLINUX_SYMBOL_STR(mmc_detect_change) },
	{ 0x9b78c120, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x29051794, __VMLINUX_SYMBOL_STR(mmc_alloc_host) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xb76f19b2, __VMLINUX_SYMBOL_STR(mmc_free_host) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x45af8d, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8574cdc6, __VMLINUX_SYMBOL_STR(mmc_request_done) },
	{ 0xb59ae401, __VMLINUX_SYMBOL_STR(rtsx_pci_complete_unfinished_transfer) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtsx_pci,mmc_core";

MODULE_ALIAS("platform:rtsx_pci_sdmmc");
