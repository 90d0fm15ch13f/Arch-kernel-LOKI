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
	{ 0x6c09c2a4, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x62d0edee, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x5765a6d4, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_msbits) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0x914ffd01, __VMLINUX_SYMBOL_STR(snd_info_create_card_entry) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x39bf9301, __VMLINUX_SYMBOL_STR(_snd_pcm_hw_param_setempty) },
	{ 0x9cfae1a5, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x72dfcfe1, __VMLINUX_SYMBOL_STR(snd_rawmidi_set_ops) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf47d1aec, __VMLINUX_SYMBOL_STR(snd_rawmidi_new) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xbb1e4046, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xd288d901, __VMLINUX_SYMBOL_STR(snd_pcm_sgbuf_ops_page) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x1288c37d, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0xe9c96410, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0xcca5e171, __VMLINUX_SYMBOL_STR(snd_ctl_notify) },
	{ 0x140a1e9f, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_pow2) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x87f4971, __VMLINUX_SYMBOL_STR(snd_hwdep_new) },
	{ 0xc9629d0d, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x69d7dd8a, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x94098ff8, __VMLINUX_SYMBOL_STR(snd_interval_list) },
	{ 0xae7a39ef, __VMLINUX_SYMBOL_STR(snd_card_set_id) },
	{ 0x4078d4c0, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x609c4bcd, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0x17dabc79, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x81b69e41, __VMLINUX_SYMBOL_STR(snd_ctl_enum_info) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xee4cbc2e, __VMLINUX_SYMBOL_STR(snd_pcm_hw_rule_add) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x2b227e8a, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xc4e9245d, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xd3fbfdba, __VMLINUX_SYMBOL_STR(snd_pcm_set_sync) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x4cda566, __VMLINUX_SYMBOL_STR(snd_interval_refine) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1729abed, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x360e82d7, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x7e77e84d, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages_for_all) },
	{ 0xbef58428, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x558a08, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xecaa8e77, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x83180130, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x66b09d6e, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x4dda1920, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit_empty) },
	{ 0x104211b4, __VMLINUX_SYMBOL_STR(snd_rawmidi_receive) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd,snd-rawmidi,snd-hwdep";

MODULE_ALIAS("pci:v000010EEd00003FC6sv*sd*bc*sc*i*");
