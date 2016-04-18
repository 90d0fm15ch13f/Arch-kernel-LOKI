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
	{ 0x16e91e21, __VMLINUX_SYMBOL_STR(fw_csr_iterator_next) },
	{ 0xa34252b3, __VMLINUX_SYMBOL_STR(fw_iso_resources_update) },
	{ 0x6031ebce, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x14dc6719, __VMLINUX_SYMBOL_STR(iso_packets_buffer_init) },
	{ 0x62d0edee, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x1496bc26, __VMLINUX_SYMBOL_STR(fw_iso_resources_init) },
	{ 0xfc48e242, __VMLINUX_SYMBOL_STR(snd_pcm_stop_xrun) },
	{ 0xb624905b, __VMLINUX_SYMBOL_STR(fw_bus_type) },
	{ 0x65c9438b, __VMLINUX_SYMBOL_STR(fw_csr_iterator_init) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2e928466, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0x450c1fe2, __VMLINUX_SYMBOL_STR(fw_iso_context_start) },
	{ 0xceec7c97, __VMLINUX_SYMBOL_STR(fw_iso_context_queue_flush) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xa59e8efc, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x73cfebbe, __VMLINUX_SYMBOL_STR(snd_card_free_when_closed) },
	{ 0xe4e7e7ab, __VMLINUX_SYMBOL_STR(snd_pcm_lib_get_vmalloc_page) },
	{ 0x526910db, __VMLINUX_SYMBOL_STR(iso_packets_buffer_destroy) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x69d7dd8a, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x4078d4c0, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x17dabc79, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x6b802d44, __VMLINUX_SYMBOL_STR(fw_iso_resources_destroy) },
	{ 0x6f9fc060, __VMLINUX_SYMBOL_STR(fw_iso_context_queue) },
	{ 0x4fb9f94, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x52f78ee9, __VMLINUX_SYMBOL_STR(_snd_pcm_lib_alloc_vmalloc_buffer) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc4e9245d, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x96a32543, __VMLINUX_SYMBOL_STR(fw_iso_resources_allocate) },
	{ 0x8dfc89f0, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x2063303c, __VMLINUX_SYMBOL_STR(fw_iso_context_stop) },
	{ 0x2057358, __VMLINUX_SYMBOL_STR(fw_iso_context_create) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbef58428, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x558a08, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xecaa8e77, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x9e67d286, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_vmalloc_buffer) },
	{ 0x83180130, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x3cb4baa4, __VMLINUX_SYMBOL_STR(snd_fw_transaction) },
	{ 0x3af7ff41, __VMLINUX_SYMBOL_STR(fw_iso_resources_free) },
	{ 0xeb786792, __VMLINUX_SYMBOL_STR(fw_iso_context_destroy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=firewire-core,snd-firewire-lib,snd-pcm,snd";

MODULE_ALIAS("ieee1394:ven*mo*sp00000A27ver00000010*");
