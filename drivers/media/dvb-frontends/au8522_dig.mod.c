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
	{ 0x7d9e8712, __VMLINUX_SYMBOL_STR(au8522_release_state) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x65dc1aa6, __VMLINUX_SYMBOL_STR(au8522_led_ctrl) },
	{ 0x78a550df, __VMLINUX_SYMBOL_STR(au8522_writereg) },
	{ 0x11ddaccd, __VMLINUX_SYMBOL_STR(au8522_readreg) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x706b3cfd, __VMLINUX_SYMBOL_STR(au8522_i2c_gate_ctrl) },
	{ 0xcd7252eb, __VMLINUX_SYMBOL_STR(au8522_sleep) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xdb8016f8, __VMLINUX_SYMBOL_STR(au8522_analog_i2c_gate_ctrl) },
	{ 0xf07addd9, __VMLINUX_SYMBOL_STR(au8522_get_state) },
	{ 0xa84ebe85, __VMLINUX_SYMBOL_STR(au8522_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=au8522_common";

