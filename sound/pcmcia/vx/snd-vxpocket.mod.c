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
	{ 0xb01f3753, __VMLINUX_SYMBOL_STR(pcmcia_dev_present) },
	{ 0x536d1d73, __VMLINUX_SYMBOL_STR(snd_vx_load_boot_image) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xe7578024, __VMLINUX_SYMBOL_STR(pcmcia_enable_device) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x94e180a2, __VMLINUX_SYMBOL_STR(pcmcia_register_driver) },
	{ 0x2cfaee7b, __VMLINUX_SYMBOL_STR(snd_vx_resume) },
	{ 0xffff2f3, __VMLINUX_SYMBOL_STR(snd_vx_free_firmware) },
	{ 0x73de4f93, __VMLINUX_SYMBOL_STR(snd_vx_dsp_boot) },
	{ 0xdf5acfff, __VMLINUX_SYMBOL_STR(snd_vx_dsp_load) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc2f5bfc, __VMLINUX_SYMBOL_STR(pcmcia_request_io) },
	{ 0x2e928466, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xbb1e4046, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x8043b4c6, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x73cfebbe, __VMLINUX_SYMBOL_STR(snd_card_free_when_closed) },
	{ 0xe4be1f11, __VMLINUX_SYMBOL_STR(snd_vx_suspend) },
	{ 0xc7572cac, __VMLINUX_SYMBOL_STR(snd_vx_check_reg_bit) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x4078d4c0, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x17dabc79, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0xe50b7777, __VMLINUX_SYMBOL_STR(snd_vx_create) },
	{ 0xf1f04d23, __VMLINUX_SYMBOL_STR(snd_vx_irq_handler) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc4e9245d, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x226138b0, __VMLINUX_SYMBOL_STR(snd_vx_threaded_irq_handler) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xec0a1d89, __VMLINUX_SYMBOL_STR(snd_vx_setup_firmware) },
	{ 0xca807607, __VMLINUX_SYMBOL_STR(pcmcia_unregister_driver) },
	{ 0xbef58428, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x83180130, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0xcb4626b0, __VMLINUX_SYMBOL_STR(pcmcia_disable_device) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pcmcia,snd-vx-lib,snd";

MODULE_ALIAS("pcmcia:m01F1c0100f*fn*pfn*pa*pb*pc*pd*");
