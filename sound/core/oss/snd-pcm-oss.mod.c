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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x3356b90b, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x24a94b26, __VMLINUX_SYMBOL_STR(snd_info_get_line) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x5e7f4920, __VMLINUX_SYMBOL_STR(snd_pcm_format_set_silence) },
	{ 0xa2f682e0, __VMLINUX_SYMBOL_STR(snd_card_file_remove) },
	{ 0x83714c0e, __VMLINUX_SYMBOL_STR(snd_pcm_lib_write) },
	{ 0xd866bce7, __VMLINUX_SYMBOL_STR(snd_pcm_release_substream) },
	{ 0x5668c050, __VMLINUX_SYMBOL_STR(snd_pcm_notify) },
	{ 0x8526c35a, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x7cb1c2a3, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x4f816e9b, __VMLINUX_SYMBOL_STR(snd_pcm_format_big_endian) },
	{ 0x914ffd01, __VMLINUX_SYMBOL_STR(snd_info_create_card_entry) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x970326b2, __VMLINUX_SYMBOL_STR(snd_pcm_hw_refine) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x198788b4, __VMLINUX_SYMBOL_STR(snd_lookup_oss_minor_data) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x6fa9799d, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x3dc7fac0, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x1d027e4b, __VMLINUX_SYMBOL_STR(snd_pcm_format_signed) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x52e3e4a5, __VMLINUX_SYMBOL_STR(snd_pcm_hw_param_value) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xf1fa7158, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x93c2cf79, __VMLINUX_SYMBOL_STR(snd_pcm_hw_param_last) },
	{ 0x8df3789f, __VMLINUX_SYMBOL_STR(snd_oss_info_register) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xba0b61e, __VMLINUX_SYMBOL_STR(snd_pcm_mmap_data) },
	{ 0x6ef8fcd8, __VMLINUX_SYMBOL_STR(snd_pcm_format_linear) },
	{ 0xc9ab5ae, __VMLINUX_SYMBOL_STR(snd_mixer_oss_ioctl_card) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x277a6e27, __VMLINUX_SYMBOL_STR(snd_pcm_lib_writev) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xb67e7434, __VMLINUX_SYMBOL_STR(snd_card_file_add) },
	{ 0x4fb9f94, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x547c79c9, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock_irq) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xfc966a59, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock_irq) },
	{ 0xbdad0451, __VMLINUX_SYMBOL_STR(snd_pcm_lib_readv) },
	{ 0x420f607d, __VMLINUX_SYMBOL_STR(snd_register_oss_device) },
	{ 0x2c0f1ab, __VMLINUX_SYMBOL_STR(snd_pcm_open_substream) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x650f8603, __VMLINUX_SYMBOL_STR(snd_pcm_format_silence_64) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb16dd332, __VMLINUX_SYMBOL_STR(snd_unregister_oss_device) },
	{ 0x3796bdcc, __VMLINUX_SYMBOL_STR(snd_pcm_format_little_endian) },
	{ 0x68a24153, __VMLINUX_SYMBOL_STR(snd_pcm_format_physical_width) },
	{ 0xc9fef317, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x4cda566, __VMLINUX_SYMBOL_STR(snd_interval_refine) },
	{ 0x9e6d79f8, __VMLINUX_SYMBOL_STR(snd_info_get_str) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x283dfe3, __VMLINUX_SYMBOL_STR(_snd_pcm_hw_params_any) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa61aa028, __VMLINUX_SYMBOL_STR(snd_pcm_format_unsigned) },
	{ 0xb83d4ad7, __VMLINUX_SYMBOL_STR(snd_info_free_entry) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xb99e759d, __VMLINUX_SYMBOL_STR(snd_pcm_kernel_ioctl) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xfa788e6e, __VMLINUX_SYMBOL_STR(snd_info_register) },
	{ 0x18b3ea54, __VMLINUX_SYMBOL_STR(snd_pcm_hw_param_first) },
	{ 0x419d3f61, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xc8cc3b15, __VMLINUX_SYMBOL_STR(snd_pcm_lib_read) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd,snd-mixer-oss";

