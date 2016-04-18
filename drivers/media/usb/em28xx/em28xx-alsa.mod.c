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
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xcd75ef7f, __VMLINUX_SYMBOL_STR(em28xx_free_device) },
	{ 0x62d0edee, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x6a3f5477, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xaac87098, __VMLINUX_SYMBOL_STR(em28xx_register_extension) },
	{ 0x804982a3, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x76286c7a, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0xd05b9e13, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_integer) },
	{ 0x2e928466, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0x3dc7fac0, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x5e6d1eba, __VMLINUX_SYMBOL_STR(em28xx_read_ac97) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe384a102, __VMLINUX_SYMBOL_STR(usb_speed_string) },
	{ 0x714449f7, __VMLINUX_SYMBOL_STR(em28xx_write_ac97) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe9c96410, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x193ddacd, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x147289eb, __VMLINUX_SYMBOL_STR(em28xx_unregister_extension) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x69d7dd8a, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x519b3309, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x4078d4c0, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x17dabc79, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x84e80a1e, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2e40284f, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock) },
	{ 0xc4e9245d, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x360e82d7, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0xbef58428, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x558a08, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xdd59af8a, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xecaa8e77, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0xac9828d3, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0xc3f61831, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x83180130, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x9556e0f3, __VMLINUX_SYMBOL_STR(em28xx_audio_analog_set) },
	{ 0xd70a2bf5, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x25a4dd41, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=em28xx,snd-pcm,usbcore,snd,usb-common";


MODULE_INFO(srcversion, "9E28371062E13B8E8A7AD7A");
