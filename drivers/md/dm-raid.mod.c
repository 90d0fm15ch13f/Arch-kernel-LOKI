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
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xf86e270f, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0xdfca6e09, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0x748f1df7, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x552ab31d, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb1425b32, __VMLINUX_SYMBOL_STR(dm_table_add_target_callbacks) },
	{ 0x1cd87565, __VMLINUX_SYMBOL_STR(mddev_unlock) },
	{ 0x52b35c83, __VMLINUX_SYMBOL_STR(md_run) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x33d112ff, __VMLINUX_SYMBOL_STR(raid5_set_cache_size) },
	{ 0x8b8a081e, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x7eb99bb3, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0x7bb21632, __VMLINUX_SYMBOL_STR(dm_set_target_max_io_len) },
	{ 0xc2a7fe6c, __VMLINUX_SYMBOL_STR(md_rdev_init) },
	{ 0x86b1c364, __VMLINUX_SYMBOL_STR(mddev_init) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xad84bef8, __VMLINUX_SYMBOL_STR(dm_table_event) },
	{ 0x211ff2c1, __VMLINUX_SYMBOL_STR(mddev_congested) },
	{ 0x5f300905, __VMLINUX_SYMBOL_STR(md_stop) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7dc6a0b7, __VMLINUX_SYMBOL_STR(md_rdev_clear) },
	{ 0xfd8ceeac, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0xd0a923a3, __VMLINUX_SYMBOL_STR(md_stop_writes) },
	{ 0x20195857, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0xab11b2a6, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0x9ccaf21d, __VMLINUX_SYMBOL_STR(bitmap_load) },
	{ 0x6a29f88e, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbd5b1509, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0xce79a07f, __VMLINUX_SYMBOL_STR(md_reap_sync_thread) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x8e74e192, __VMLINUX_SYMBOL_STR(blk_limits_io_opt) },
	{ 0xe3baeb78, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod,md-mod,raid456";

