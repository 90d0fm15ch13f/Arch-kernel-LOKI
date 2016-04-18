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
	{ 0xd679af25, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x6c64388d, __VMLINUX_SYMBOL_STR(rtsx_usb_switch_clock) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x3ecf2902, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x9790baa9, __VMLINUX_SYMBOL_STR(memstick_add_host) },
	{ 0x79fc2151, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x9bcf62c3, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xf9d15615, __VMLINUX_SYMBOL_STR(memstick_alloc_host) },
	{ 0x1b915f88, __VMLINUX_SYMBOL_STR(rtsx_usb_transfer_data) },
	{ 0x1a2c61ce, __VMLINUX_SYMBOL_STR(rtsx_usb_card_exclusive_check) },
	{ 0xd95657d3, __VMLINUX_SYMBOL_STR(rtsx_usb_ep0_write_register) },
	{ 0x4bf4922f, __VMLINUX_SYMBOL_STR(rtsx_usb_ep0_read_register) },
	{ 0xd16ffdbb, __VMLINUX_SYMBOL_STR(rtsx_usb_get_rsp) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xd9d2308f, __VMLINUX_SYMBOL_STR(memstick_detect_change) },
	{ 0xf1fb0a45, __VMLINUX_SYMBOL_STR(rtsx_usb_write_register) },
	{ 0x23ae6315, __VMLINUX_SYMBOL_STR(rtsx_usb_read_register) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xbcd0a42e, __VMLINUX_SYMBOL_STR(rtsx_usb_send_cmd) },
	{ 0xfb22731c, __VMLINUX_SYMBOL_STR(rtsx_usb_add_cmd) },
	{ 0x4f6f6ff2, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xbdf58c59, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0xf3eb24a7, __VMLINUX_SYMBOL_STR(memstick_free_host) },
	{ 0xb7080de, __VMLINUX_SYMBOL_STR(memstick_remove_host) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfe58f08, __VMLINUX_SYMBOL_STR(memstick_next_req) },
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
"depends=rtsx_usb,memstick";

MODULE_ALIAS("platform:rtsx_usb_ms");
