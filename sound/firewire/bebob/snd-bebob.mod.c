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
	{ 0x93bc7951, __VMLINUX_SYMBOL_STR(amdtp_stream_pcm_pointer) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x6031ebce, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xf7d6af8, __VMLINUX_SYMBOL_STR(fw_csr_string) },
	{ 0x4bc8ad08, __VMLINUX_SYMBOL_STR(avc_general_set_sig_fmt) },
	{ 0x914ffd01, __VMLINUX_SYMBOL_STR(snd_info_create_card_entry) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xb624905b, __VMLINUX_SYMBOL_STR(fw_bus_type) },
	{ 0xcd26af6e, __VMLINUX_SYMBOL_STR(amdtp_am824_set_midi_position) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xbce75833, __VMLINUX_SYMBOL_STR(amdtp_am824_set_pcm_position) },
	{ 0x99905fff, __VMLINUX_SYMBOL_STR(fw_schedule_bus_reset) },
	{ 0x72dfcfe1, __VMLINUX_SYMBOL_STR(snd_rawmidi_set_ops) },
	{ 0xf47d1aec, __VMLINUX_SYMBOL_STR(snd_rawmidi_new) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x8a0b12c6, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xbb1e4046, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x380d6c97, __VMLINUX_SYMBOL_STR(cmp_connection_destroy) },
	{ 0x1fdb3326, __VMLINUX_SYMBOL_STR(fcp_avc_transaction) },
	{ 0xb9638db4, __VMLINUX_SYMBOL_STR(snd_pcm_rate_to_rate_bit) },
	{ 0x71b7d635, __VMLINUX_SYMBOL_STR(avc_general_get_plug_info) },
	{ 0xf1f6e3a7, __VMLINUX_SYMBOL_STR(amdtp_stream_get_max_payload) },
	{ 0x5a46e44c, __VMLINUX_SYMBOL_STR(amdtp_stream_update) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x86c58805, __VMLINUX_SYMBOL_STR(cmp_connection_establish) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xae58f93b, __VMLINUX_SYMBOL_STR(avc_general_get_sig_fmt) },
	{ 0xe9c96410, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0xa59e8efc, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xcca5e171, __VMLINUX_SYMBOL_STR(snd_ctl_notify) },
	{ 0x73cfebbe, __VMLINUX_SYMBOL_STR(snd_card_free_when_closed) },
	{ 0xe4e7e7ab, __VMLINUX_SYMBOL_STR(snd_pcm_lib_get_vmalloc_page) },
	{ 0xf580609e, __VMLINUX_SYMBOL_STR(amdtp_stream_destroy) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x87f4971, __VMLINUX_SYMBOL_STR(snd_hwdep_new) },
	{ 0xc7731848, __VMLINUX_SYMBOL_STR(amdtp_stream_start) },
	{ 0x4b111e66, __VMLINUX_SYMBOL_STR(amdtp_am824_set_pcm_format) },
	{ 0x69d7dd8a, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x17dabc79, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x81b69e41, __VMLINUX_SYMBOL_STR(snd_ctl_enum_info) },
	{ 0x4d6851dd, __VMLINUX_SYMBOL_STR(cmp_connection_update) },
	{ 0xee4cbc2e, __VMLINUX_SYMBOL_STR(snd_pcm_hw_rule_add) },
	{ 0x4fb9f94, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x52f78ee9, __VMLINUX_SYMBOL_STR(_snd_pcm_lib_alloc_vmalloc_buffer) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xc4e9245d, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x878cd015, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0xd08e41d0, __VMLINUX_SYMBOL_STR(amdtp_stream_pcm_prepare) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xd3fbfdba, __VMLINUX_SYMBOL_STR(snd_pcm_set_sync) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8dfc89f0, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xc3040f26, __VMLINUX_SYMBOL_STR(amdtp_stream_stop) },
	{ 0x4cda566, __VMLINUX_SYMBOL_STR(snd_interval_refine) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb83d4ad7, __VMLINUX_SYMBOL_STR(snd_info_free_entry) },
	{ 0x3bb5114a, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x90201ee1, __VMLINUX_SYMBOL_STR(amdtp_stream_pcm_abort) },
	{ 0xbc901b70, __VMLINUX_SYMBOL_STR(fcp_bus_reset) },
	{ 0x57578d3e, __VMLINUX_SYMBOL_STR(cmp_connection_break) },
	{ 0x3435c9d0, __VMLINUX_SYMBOL_STR(cmp_connection_init) },
	{ 0xeea3bdb7, __VMLINUX_SYMBOL_STR(amdtp_am824_add_pcm_hw_constraints) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xbef58428, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x558a08, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x6bd46164, __VMLINUX_SYMBOL_STR(amdtp_am824_init) },
	{ 0xebb40d09, __VMLINUX_SYMBOL_STR(amdtp_am824_midi_trigger) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xecaa8e77, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x6239f083, __VMLINUX_SYMBOL_STR(cmp_connection_check_used) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x9e67d286, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_vmalloc_buffer) },
	{ 0x83180130, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x3cb4baa4, __VMLINUX_SYMBOL_STR(snd_fw_transaction) },
	{ 0xbf57c018, __VMLINUX_SYMBOL_STR(amdtp_am824_set_parameters) },
	{ 0xfa788e6e, __VMLINUX_SYMBOL_STR(snd_info_register) },
	{ 0x5d8475e0, __VMLINUX_SYMBOL_STR(completion_done) },
	{ 0xb412800a, __VMLINUX_SYMBOL_STR(fw_run_transaction) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-firewire-lib,firewire-core,snd,snd-rawmidi,snd-pcm,snd-hwdep";

MODULE_ALIAS("ieee1394:ven000040ABmo00010049sp*ver*");
MODULE_ALIAS("ieee1394:ven000040ABmo00010048sp*ver*");
MODULE_ALIAS("ieee1394:ven00000A92mo00010000sp*ver*");
MODULE_ALIAS("ieee1394:ven00000A92mo00010066sp*ver*");
MODULE_ALIAS("ieee1394:ven00000A92mo00010001sp*ver*");
MODULE_ALIAS("ieee1394:ven000007F5mo00010048sp*ver*");
MODULE_ALIAS("ieee1394:ven000007F5mo00010049sp*ver*");
MODULE_ALIAS("ieee1394:ven00000FF2mo00010065sp*ver*");
MODULE_ALIAS("ieee1394:ven0000000Fmo00010067sp*ver*");
MODULE_ALIAS("ieee1394:ven00001260mo00000001sp*ver*");
MODULE_ALIAS("ieee1394:ven0000022Emo00010067sp*ver*");
MODULE_ALIAS("ieee1394:ven00001564mo00001204sp*ver*");
MODULE_ALIAS("ieee1394:ven00001564mo00001604sp*ver*");
MODULE_ALIAS("ieee1394:ven00001564mo00000006sp*ver*");
MODULE_ALIAS("ieee1394:ven00001564mo00001616sp*ver*");
MODULE_ALIAS("ieee1394:ven00001564mo00000610sp*ver*");
MODULE_ALIAS("ieee1394:ven000003DBmo00010048sp*ver*");
MODULE_ALIAS("ieee1394:ven000003DBmo00001EEEsp*ver*");
MODULE_ALIAS("ieee1394:ven00000F1Bmo00010064sp*ver*");
MODULE_ALIAS("ieee1394:ven00000002mo00000002sp*ver*");
MODULE_ALIAS("ieee1394:ven0000000Amo00030000sp*ver*");
MODULE_ALIAS("ieee1394:ven00001496mo00050000sp*ver*");
MODULE_ALIAS("ieee1394:ven00001496mo00060000sp*ver*");
MODULE_ALIAS("ieee1394:ven00001496mo00070000sp*ver*");
MODULE_ALIAS("ieee1394:ven00001496mo00000000sp*ver*");
MODULE_ALIAS("ieee1394:ven000019E5mo00000001sp*ver*");
MODULE_ALIAS("ieee1394:ven00001A9Emo00000001sp*ver*");
MODULE_ALIAS("ieee1394:ven00001198mo00010048sp*ver*");
MODULE_ALIAS("ieee1394:ven00001198mo0000ADA8sp*ver*");
MODULE_ALIAS("ieee1394:ven00000AACmo00000003sp*ver*");
MODULE_ALIAS("ieee1394:ven00000AACmo00000004sp*ver*");
MODULE_ALIAS("ieee1394:ven00000AACmo00000007sp*ver*");
MODULE_ALIAS("ieee1394:ven00000AACmo00000005sp*ver*");
MODULE_ALIAS("ieee1394:ven00000AACmo00000002sp*ver*");
MODULE_ALIAS("ieee1394:ven0000A0DEmo0010000Bsp*ver*");
MODULE_ALIAS("ieee1394:ven0000A0DEmo0010000Csp*ver*");
MODULE_ALIAS("ieee1394:ven0000130Emo00000003sp*ver*");
MODULE_ALIAS("ieee1394:ven0000130Emo00000006sp*ver*");
MODULE_ALIAS("ieee1394:ven0000130Emo00000000sp*ver*");
MODULE_ALIAS("ieee1394:ven000007F5mo00010058sp*ver*");
MODULE_ALIAS("ieee1394:ven000007F5mo00010046sp*ver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo00010060sp*ver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo00010062sp*ver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo0000000Asp*ver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo00010081sp*ver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo000100A1sp*ver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo00010070sp*ver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo00010071sp*ver*");
MODULE_ALIAS("ieee1394:ven00000D6Cmo00010091sp*ver*");
MODULE_ALIAS("ieee1394:ven0000A07Emo000000A9sp*ver*");
