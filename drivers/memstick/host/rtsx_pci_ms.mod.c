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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xcb4360f4, __VMLINUX_SYMBOL_STR(rtsx_pci_card_power_on) },
	{ 0x642244a3, __VMLINUX_SYMBOL_STR(rtsx_pci_card_pull_ctl_enable) },
	{ 0xa2f18417, __VMLINUX_SYMBOL_STR(rtsx_pci_card_pull_ctl_disable) },
	{ 0xc5ab3556, __VMLINUX_SYMBOL_STR(rtsx_pci_card_power_off) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x4c48fcac, __VMLINUX_SYMBOL_STR(rtsx_pci_card_exclusive_check) },
	{ 0xd9d2308f, __VMLINUX_SYMBOL_STR(memstick_detect_change) },
	{ 0x2b17725, __VMLINUX_SYMBOL_STR(rtsx_pci_transfer_data) },
	{ 0xffd3f10e, __VMLINUX_SYMBOL_STR(rtsx_pci_send_cmd_no_wait) },
	{ 0xfbee6e10, __VMLINUX_SYMBOL_STR(rtsx_pci_switch_clock) },
	{ 0x88393f8c, __VMLINUX_SYMBOL_STR(rtsx_pci_start_run) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x78ce2ffe, __VMLINUX_SYMBOL_STR(rtsx_pci_write_register) },
	{ 0x9951f541, __VMLINUX_SYMBOL_STR(rtsx_pci_read_register) },
	{ 0xb2d3d11, __VMLINUX_SYMBOL_STR(rtsx_pci_send_cmd) },
	{ 0x4f58991c, __VMLINUX_SYMBOL_STR(rtsx_pci_add_cmd) },
	{ 0x9790baa9, __VMLINUX_SYMBOL_STR(memstick_add_host) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xf9d15615, __VMLINUX_SYMBOL_STR(memstick_alloc_host) },
	{ 0xf3eb24a7, __VMLINUX_SYMBOL_STR(memstick_free_host) },
	{ 0xb7080de, __VMLINUX_SYMBOL_STR(memstick_remove_host) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfe58f08, __VMLINUX_SYMBOL_STR(memstick_next_req) },
	{ 0xb59ae401, __VMLINUX_SYMBOL_STR(rtsx_pci_complete_unfinished_transfer) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xfa3fa9b7, __VMLINUX_SYMBOL_STR(memstick_suspend_host) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xbda7fb54, __VMLINUX_SYMBOL_STR(memstick_resume_host) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtsx_pci,memstick";

MODULE_ALIAS("platform:rtsx_pci_ms");
