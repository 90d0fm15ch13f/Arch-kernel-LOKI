#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5e862211, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf7aecc81, __VMLINUX_SYMBOL_STR(dib3000mc_pid_parse) },
	{ 0xe05fd379, __VMLINUX_SYMBOL_STR(dvb_usb_generic_write) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x4600479b, __VMLINUX_SYMBOL_STR(dib3000mc_pid_control) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8ddfb1b, __VMLINUX_SYMBOL_STR(dib3000mc_get_tuner_i2c_master) },
	{ 0xf1fa7158, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc7c5ee4a, __VMLINUX_SYMBOL_STR(dib3000mc_set_config) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x5ee622d, __VMLINUX_SYMBOL_STR(dvb_usb_generic_rw) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6c9c21e2, __VMLINUX_SYMBOL_STR(dvb_usb_nec_rc_key_to_event) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dib3000mc,dvb-usb";

