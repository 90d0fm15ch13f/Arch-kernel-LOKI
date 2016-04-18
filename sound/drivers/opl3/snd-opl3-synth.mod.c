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
	{ 0x6ea09972, __VMLINUX_SYMBOL_STR(snd_midi_channel_alloc_set) },
	{ 0x8782fcde, __VMLINUX_SYMBOL_STR(snd_device_register) },
	{ 0xcb51a7f3, __VMLINUX_SYMBOL_STR(snd_opl3_reset) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xb9948d2c, __VMLINUX_SYMBOL_STR(snd_midi_channel_free_set) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf881f6a7, __VMLINUX_SYMBOL_STR(snd_seq_create_kernel_client) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x32fba0c7, __VMLINUX_SYMBOL_STR(__snd_seq_driver_register) },
	{ 0x35fdad27, __VMLINUX_SYMBOL_STR(snd_opl3_find_patch) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf0a1fdb3, __VMLINUX_SYMBOL_STR(snd_midi_process_event) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x60f8603b, __VMLINUX_SYMBOL_STR(snd_opl3_load_patch) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5060a19, __VMLINUX_SYMBOL_STR(snd_opl3_regmap) },
	{ 0xff75a49e, __VMLINUX_SYMBOL_STR(snd_seq_device_new) },
	{ 0x6bb71038, __VMLINUX_SYMBOL_STR(snd_seq_delete_kernel_client) },
	{ 0xeaf469ff, __VMLINUX_SYMBOL_STR(snd_seq_event_port_attach) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x419d3f61, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x101f5c36, __VMLINUX_SYMBOL_STR(snd_seq_driver_unregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-seq-midi-emul,snd,snd-opl3-lib,snd-seq,snd-seq-device";

