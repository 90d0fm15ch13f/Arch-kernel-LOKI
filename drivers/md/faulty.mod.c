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
	{ 0xc315924e, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0xff4d9dc3, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0x68b9eb9f, __VMLINUX_SYMBOL_STR(bio_clone_mddev) },
	{ 0x325d80af, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x7c7ad83c, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x71b221d5, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xe84e01cc, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0xe7046fb8, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x35df808f, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";

