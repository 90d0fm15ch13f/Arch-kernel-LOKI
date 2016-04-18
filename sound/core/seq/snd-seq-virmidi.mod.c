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
	{ 0x991c0f60, __VMLINUX_SYMBOL_STR(snd_midi_event_reset_encode) },
	{ 0xea3f725d, __VMLINUX_SYMBOL_STR(_raw_write_lock_irqsave) },
	{ 0x1a724fcc, __VMLINUX_SYMBOL_STR(snd_seq_kernel_client_ctl) },
	{ 0x781d6c90, __VMLINUX_SYMBOL_STR(snd_device_free) },
	{ 0x179651ac, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xf881f6a7, __VMLINUX_SYMBOL_STR(snd_seq_create_kernel_client) },
	{ 0x72dfcfe1, __VMLINUX_SYMBOL_STR(snd_rawmidi_set_ops) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7746bb9b, __VMLINUX_SYMBOL_STR(snd_midi_event_decode) },
	{ 0xf47d1aec, __VMLINUX_SYMBOL_STR(snd_rawmidi_new) },
	{ 0xd20f3020, __VMLINUX_SYMBOL_STR(_raw_write_unlock_irqrestore) },
	{ 0x79794472, __VMLINUX_SYMBOL_STR(snd_midi_event_new) },
	{ 0xc9102ea6, __VMLINUX_SYMBOL_STR(__snd_rawmidi_transmit_peek) },
	{ 0x1ae09f75, __VMLINUX_SYMBOL_STR(_raw_write_unlock_irq) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb10820e4, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0x2983f201, __VMLINUX_SYMBOL_STR(__snd_rawmidi_transmit_ack) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xef8fa3d2, __VMLINUX_SYMBOL_STR(snd_midi_event_free) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc69c353, __VMLINUX_SYMBOL_STR(_raw_write_lock_irq) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xe934da1d, __VMLINUX_SYMBOL_STR(snd_seq_dump_var_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf6fdda44, __VMLINUX_SYMBOL_STR(snd_midi_event_encode) },
	{ 0x3fb4d161, __VMLINUX_SYMBOL_STR(snd_seq_kernel_client_dispatch) },
	{ 0x6bb71038, __VMLINUX_SYMBOL_STR(snd_seq_delete_kernel_client) },
	{ 0x66b09d6e, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit) },
	{ 0x104211b4, __VMLINUX_SYMBOL_STR(snd_rawmidi_receive) },
	{ 0x419d3f61, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-seq-midi-event,snd-seq,snd,snd-rawmidi";

