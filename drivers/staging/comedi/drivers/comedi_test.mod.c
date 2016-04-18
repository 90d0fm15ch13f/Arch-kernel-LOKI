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
	{ 0xcb70da6e, __VMLINUX_SYMBOL_STR(comedi_driver_unregister) },
	{ 0x949c1ffa, __VMLINUX_SYMBOL_STR(comedi_driver_register) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1bb31047, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb369765e, __VMLINUX_SYMBOL_STR(comedi_buf_write_samples) },
	{ 0xe79c8714, __VMLINUX_SYMBOL_STR(comedi_nsamples_left) },
	{ 0xa7c107da, __VMLINUX_SYMBOL_STR(comedi_buf_read_samples) },
	{ 0x6ee7937d, __VMLINUX_SYMBOL_STR(comedi_inc_scan_progress) },
	{ 0xf8ce1926, __VMLINUX_SYMBOL_STR(comedi_buf_read_free) },
	{ 0xe5b1b252, __VMLINUX_SYMBOL_STR(comedi_buf_read_alloc) },
	{ 0x231d0aa3, __VMLINUX_SYMBOL_STR(comedi_nscans_left) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf1969a8e, __VMLINUX_SYMBOL_STR(__usecs_to_jiffies) },
	{ 0xdb49d660, __VMLINUX_SYMBOL_STR(comedi_handle_events) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x6566f328, __VMLINUX_SYMBOL_STR(comedi_alloc_subdevices) },
	{ 0xcbbeac12, __VMLINUX_SYMBOL_STR(comedi_alloc_devpriv) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=comedi";

