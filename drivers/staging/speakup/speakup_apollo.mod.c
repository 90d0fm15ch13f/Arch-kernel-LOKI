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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5e862211, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x37cb31e8, __VMLINUX_SYMBOL_STR(spk_var_store) },
	{ 0x4be0dafa, __VMLINUX_SYMBOL_STR(spk_var_show) },
	{ 0x1cafe51, __VMLINUX_SYMBOL_STR(spk_synth_is_alive_restart) },
	{ 0x38f868e, __VMLINUX_SYMBOL_STR(spk_synth_flush) },
	{ 0x63a51fd0, __VMLINUX_SYMBOL_STR(spk_synth_immediate) },
	{ 0xe7cd4558, __VMLINUX_SYMBOL_STR(spk_serial_release) },
	{ 0xd8b3b7bc, __VMLINUX_SYMBOL_STR(spk_serial_synth_probe) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x3c7bf0ea, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x957252cc, __VMLINUX_SYMBOL_STR(synth_remove) },
	{ 0x6cdb45be, __VMLINUX_SYMBOL_STR(synth_add) },
	{ 0x9a888082, __VMLINUX_SYMBOL_STR(synth_buffer_getc) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xb48956f8, __VMLINUX_SYMBOL_STR(synth_buffer_peek) },
	{ 0x41a160e5, __VMLINUX_SYMBOL_STR(synth_buffer_empty) },
	{ 0xe81c76d, __VMLINUX_SYMBOL_STR(spk_serial_out) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2ab8daa7, __VMLINUX_SYMBOL_STR(speakup_info) },
	{ 0xd1b551a2, __VMLINUX_SYMBOL_STR(spk_get_var) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=speakup";


MODULE_INFO(srcversion, "06197019860262AB6D64BDC");
