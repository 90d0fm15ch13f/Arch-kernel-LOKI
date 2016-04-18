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
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x914ffd01, __VMLINUX_SYMBOL_STR(snd_info_create_card_entry) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xb624905b, __VMLINUX_SYMBOL_STR(fw_bus_type) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x72dfcfe1, __VMLINUX_SYMBOL_STR(snd_rawmidi_set_ops) },
	{ 0xf47d1aec, __VMLINUX_SYMBOL_STR(snd_rawmidi_new) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xbb1e4046, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x380d6c97, __VMLINUX_SYMBOL_STR(cmp_connection_destroy) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf1f6e3a7, __VMLINUX_SYMBOL_STR(amdtp_stream_get_max_payload) },
	{ 0x5a46e44c, __VMLINUX_SYMBOL_STR(amdtp_stream_update) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x86c58805, __VMLINUX_SYMBOL_STR(cmp_connection_establish) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xe9c96410, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0xa59e8efc, __VMLINUX_SYMBOL_STR(driver_unregister) },
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
	{ 0x4d6851dd, __VMLINUX_SYMBOL_STR(cmp_connection_update) },
	{ 0xee4cbc2e, __VMLINUX_SYMBOL_STR(snd_pcm_hw_rule_add) },
	{ 0x4fb9f94, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x52f78ee9, __VMLINUX_SYMBOL_STR(_snd_pcm_lib_alloc_vmalloc_buffer) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xd08e41d0, __VMLINUX_SYMBOL_STR(amdtp_stream_pcm_prepare) },
	{ 0xa35e5e1, __VMLINUX_SYMBOL_STR(fw_core_add_address_handler) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xd3fbfdba, __VMLINUX_SYMBOL_STR(snd_pcm_set_sync) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8dfc89f0, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xb6531491, __VMLINUX_SYMBOL_STR(fw_core_remove_address_handler) },
	{ 0xc3040f26, __VMLINUX_SYMBOL_STR(amdtp_stream_stop) },
	{ 0x4cda566, __VMLINUX_SYMBOL_STR(snd_interval_refine) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb83d4ad7, __VMLINUX_SYMBOL_STR(snd_info_free_entry) },
	{ 0x3bb5114a, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x90201ee1, __VMLINUX_SYMBOL_STR(amdtp_stream_pcm_abort) },
	{ 0x57578d3e, __VMLINUX_SYMBOL_STR(cmp_connection_break) },
	{ 0x3435c9d0, __VMLINUX_SYMBOL_STR(cmp_connection_init) },
	{ 0xeea3bdb7, __VMLINUX_SYMBOL_STR(amdtp_am824_add_pcm_hw_constraints) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xbef58428, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x558a08, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x6bd46164, __VMLINUX_SYMBOL_STR(amdtp_am824_init) },
	{ 0x33f4e6a7, __VMLINUX_SYMBOL_STR(snd_pcm_limit_hw_rates) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0xebb40d09, __VMLINUX_SYMBOL_STR(amdtp_am824_midi_trigger) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xecaa8e77, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x6239f083, __VMLINUX_SYMBOL_STR(cmp_connection_check_used) },
	{ 0x9e67d286, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_vmalloc_buffer) },
	{ 0x3cb4baa4, __VMLINUX_SYMBOL_STR(snd_fw_transaction) },
	{ 0xbf57c018, __VMLINUX_SYMBOL_STR(amdtp_am824_set_parameters) },
	{ 0x7b1c81bb, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xfa788e6e, __VMLINUX_SYMBOL_STR(snd_info_register) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xd8875a7b, __VMLINUX_SYMBOL_STR(fw_send_response) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-firewire-lib,snd,firewire-core,snd-rawmidi,snd-pcm,snd-hwdep";

MODULE_ALIAS("ieee1394:ven00000FF2mo0000400Fsp*ver*");
MODULE_ALIAS("ieee1394:ven00000FF2mo0001200Fsp*ver*");
MODULE_ALIAS("ieee1394:ven00001486mo00000AF8sp*ver*");
MODULE_ALIAS("ieee1394:ven00001486mo0000AF12sp*ver*");
MODULE_ALIAS("ieee1394:ven00001486mo000AF12Dsp*ver*");
MODULE_ALIAS("ieee1394:ven00001486mo000AF12Asp*ver*");
MODULE_ALIAS("ieee1394:ven00001486mo00000AF2sp*ver*");
MODULE_ALIAS("ieee1394:ven00001486mo00000AF4sp*ver*");
MODULE_ALIAS("ieee1394:ven00001486mo00000AF9sp*ver*");
MODULE_ALIAS("ieee1394:ven00001486mo000000F8sp*ver*");
MODULE_ALIAS("ieee1394:ven00001486mo0000AFD1sp*ver*");
MODULE_ALIAS("ieee1394:ven0000075Bmo0000AFB2sp*ver*");
MODULE_ALIAS("ieee1394:ven0000075Bmo0000AFB9sp*ver*");
