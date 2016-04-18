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
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf3f0324e, __VMLINUX_SYMBOL_STR(snd_midi_event_reset_decode) },
	{ 0x991c0f60, __VMLINUX_SYMBOL_STR(snd_midi_event_reset_encode) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x1a724fcc, __VMLINUX_SYMBOL_STR(snd_seq_kernel_client_ctl) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd3f6c751, __VMLINUX_SYMBOL_STR(snd_rawmidi_kernel_release) },
	{ 0xf881f6a7, __VMLINUX_SYMBOL_STR(snd_seq_create_kernel_client) },
	{ 0x3a1adea7, __VMLINUX_SYMBOL_STR(snd_rawmidi_kernel_open) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7746bb9b, __VMLINUX_SYMBOL_STR(snd_midi_event_decode) },
	{ 0xbbab528, __VMLINUX_SYMBOL_STR(snd_rawmidi_input_params) },
	{ 0x32fba0c7, __VMLINUX_SYMBOL_STR(__snd_seq_driver_register) },
	{ 0x79794472, __VMLINUX_SYMBOL_STR(snd_midi_event_new) },
	{ 0x7b8699eb, __VMLINUX_SYMBOL_STR(snd_seq_event_port_detach) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfbd52f82, __VMLINUX_SYMBOL_STR(snd_rawmidi_drain_output) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xef8fa3d2, __VMLINUX_SYMBOL_STR(snd_midi_event_free) },
	{ 0x8c8175fa, __VMLINUX_SYMBOL_STR(snd_rawmidi_kernel_write) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x60aba457, __VMLINUX_SYMBOL_STR(snd_rawmidi_kernel_read) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe934da1d, __VMLINUX_SYMBOL_STR(snd_seq_dump_var_event) },
	{ 0x24ddc376, __VMLINUX_SYMBOL_STR(snd_rawmidi_output_params) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf6fdda44, __VMLINUX_SYMBOL_STR(snd_midi_event_encode) },
	{ 0x3fb4d161, __VMLINUX_SYMBOL_STR(snd_seq_kernel_client_dispatch) },
	{ 0x6128b5fc, __VMLINUX_SYMBOL_STR(__printk_ratelimit) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6bb71038, __VMLINUX_SYMBOL_STR(snd_seq_delete_kernel_client) },
	{ 0x101f5c36, __VMLINUX_SYMBOL_STR(snd_seq_driver_unregister) },
	{ 0x3309413e, __VMLINUX_SYMBOL_STR(snd_rawmidi_info_select) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-seq-midi-event,snd-seq,snd-rawmidi,snd-seq-device";

