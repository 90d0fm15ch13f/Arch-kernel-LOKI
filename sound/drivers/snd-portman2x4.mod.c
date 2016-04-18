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
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x72dfcfe1, __VMLINUX_SYMBOL_STR(snd_rawmidi_set_ops) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xf47d1aec, __VMLINUX_SYMBOL_STR(snd_rawmidi_new) },
	{ 0x86a2caf0, __VMLINUX_SYMBOL_STR(parport_unregister_driver) },
	{ 0xbb1e4046, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x21428eb8, __VMLINUX_SYMBOL_STR(parport_unregister_device) },
	{ 0x2232533c, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0xe260d833, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x14a4e0b4, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x8e1226e2, __VMLINUX_SYMBOL_STR(parport_claim) },
	{ 0xb3e1bb0f, __VMLINUX_SYMBOL_STR(parport_release) },
	{ 0x17dabc79, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x85d9d392, __VMLINUX_SYMBOL_STR(parport_register_device) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xbef58428, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x558a08, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xc3ac7e7a, __VMLINUX_SYMBOL_STR(__parport_register_driver) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x66b09d6e, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit) },
	{ 0x104211b4, __VMLINUX_SYMBOL_STR(snd_rawmidi_receive) },
	{ 0x879dcb22, __VMLINUX_SYMBOL_STR(platform_device_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-rawmidi,parport,snd";

