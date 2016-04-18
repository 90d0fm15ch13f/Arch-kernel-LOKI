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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5c912edc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x80f9913a, __VMLINUX_SYMBOL_STR(perf_tp_event) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x38ce402b, __VMLINUX_SYMBOL_STR(azx_interrupt) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x89b5432b, __VMLINUX_SYMBOL_STR(param_get_int) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xbb9c4e1f, __VMLINUX_SYMBOL_STR(snd_hda_lock_devices) },
	{ 0x767ddb02, __VMLINUX_SYMBOL_STR(set_memory_wc) },
	{ 0x6d8efbba, __VMLINUX_SYMBOL_STR(snd_hdac_i915_exit) },
	{ 0xb94b6efd, __VMLINUX_SYMBOL_STR(snd_hdac_bus_alloc_stream_pages) },
	{ 0xc48a3366, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x62d0edee, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x944481aa, __VMLINUX_SYMBOL_STR(snd_hdac_set_codec_wakeup) },
	{ 0xf2b0a830, __VMLINUX_SYMBOL_STR(snd_dma_alloc_pages) },
	{ 0x494716c4, __VMLINUX_SYMBOL_STR(azx_codec_configure) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x38a5e384, __VMLINUX_SYMBOL_STR(snd_pci_quirk_lookup) },
	{ 0x9cfae1a5, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8bec995b, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0x339b4475, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x1c2344f7, __VMLINUX_SYMBOL_STR(set_pages_array_wc) },
	{ 0xdbc732bd, __VMLINUX_SYMBOL_STR(param_set_int) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x59c19cd8, __VMLINUX_SYMBOL_STR(azx_stop_chip) },
	{ 0x7df71c93, __VMLINUX_SYMBOL_STR(snd_hda_set_power_save) },
	{ 0x2e928466, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0xe5102959, __VMLINUX_SYMBOL_STR(vga_switcheroo_register_audio_client) },
	{ 0x8a0b12c6, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xf7e0348e, __VMLINUX_SYMBOL_STR(vga_switcheroo_unregister_client) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xbb1e4046, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x50d1f870, __VMLINUX_SYMBOL_STR(pgprot_writecombine) },
	{ 0x45bd495e, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0xc413ade2, __VMLINUX_SYMBOL_STR(snd_hdac_display_power) },
	{ 0xed22e9c3, __VMLINUX_SYMBOL_STR(vga_switcheroo_init_domain_pm_optimus_hdmi_audio) },
	{ 0x8043b4c6, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0xb0733161, __VMLINUX_SYMBOL_STR(azx_init_chip) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2a5219d9, __VMLINUX_SYMBOL_STR(snd_hda_load_patch) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x98aad7ac, __VMLINUX_SYMBOL_STR(snd_hdac_get_display_clk) },
	{ 0x840f971c, __VMLINUX_SYMBOL_STR(azx_free_streams) },
	{ 0xd7ee3a56, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0xaf999e80, __VMLINUX_SYMBOL_STR(azx_bus_init) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xedaa19a7, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9589b005, __VMLINUX_SYMBOL_STR(pci_get_domain_bus_and_slot) },
	{ 0xd977b256, __VMLINUX_SYMBOL_STR(azx_get_pos_posbuf) },
	{ 0xc9629d0d, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x56ecc71e, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0xd2970da6, __VMLINUX_SYMBOL_STR(snd_hda_unlock_devices) },
	{ 0x609c4bcd, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xa9dcca29, __VMLINUX_SYMBOL_STR(param_ops_bint) },
	{ 0x17dabc79, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x7260e249, __VMLINUX_SYMBOL_STR(___preempt_schedule_notrace) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xc076a8cd, __VMLINUX_SYMBOL_STR(snd_hdac_i915_init) },
	{ 0x538029d8, __VMLINUX_SYMBOL_STR(set_pages_array_wb) },
	{ 0x2b227e8a, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xcd265af1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xe5df83fe, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5f864e0, __VMLINUX_SYMBOL_STR(pci_intx) },
	{ 0x98024ed7, __VMLINUX_SYMBOL_STR(azx_get_pos_lpib) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xbc18927, __VMLINUX_SYMBOL_STR(snd_hdac_bus_exit) },
	{ 0xd85cf120, __VMLINUX_SYMBOL_STR(snd_hdac_bus_free_stream_pages) },
	{ 0x610e9c8c, __VMLINUX_SYMBOL_STR(snd_dma_free_pages) },
	{ 0x860012ca, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0x16c2eb16, __VMLINUX_SYMBOL_STR(azx_stop_all_streams) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x5d870e54, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x65bd2eb5, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xe388ece7, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf6a9feb8, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xe8109543, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe1096f6a, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x1729abed, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x1dea959e, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x42bb8d80, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0xa19b5331, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0x91607d95, __VMLINUX_SYMBOL_STR(set_memory_wb) },
	{ 0x694c9b5, __VMLINUX_SYMBOL_STR(azx_init_streams) },
	{ 0xbef58428, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x558a08, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xcdd142a3, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xaa973d1a, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x84d8876f, __VMLINUX_SYMBOL_STR(azx_probe_codecs) },
	{ 0x11caddc7, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x3874d1d6, __VMLINUX_SYMBOL_STR(snd_hdac_bus_enter_link_reset) },
	{ 0xf752a233, __VMLINUX_SYMBOL_STR(vga_switcheroo_get_client_state) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x173ad2ac, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec,snd-hda-core,snd-pcm,snd";

MODULE_ALIAS("pci:v00008086d00001C20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008CA0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A1F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A270sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CA0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A170sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D70sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A98sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000C0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000D0Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B56sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000811Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000080Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F04sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002284sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002668sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000269Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000284Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000293Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000293Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A3Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A6Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d*sv*sd*bc04sc03i00*");
MODULE_ALIAS("pci:v00001002d0000437Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00004383sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000780Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00001308sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000157Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000793Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00007919sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000960Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000970Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009840sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA10sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA18sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA28sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA38sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA48sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA50sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA58sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA68sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA80sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA88sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA90sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AA98sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d00009902sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAA0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAA8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAB0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAC0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAC8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAD8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d0000AAE8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00003288sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00009170sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001106d00009140sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001039d00007502sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B9d00005461sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd*sv*sd*bc04sc03i00*");
MODULE_ALIAS("pci:v00006549d00001200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00006549d00002200sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001102d00000009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00005011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017F3d00003010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015ADd00001977sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001002d*sv*sd*bc04sc03i00*");
MODULE_ALIAS("pci:v00001022d*sv*sd*bc04sc03i00*");
