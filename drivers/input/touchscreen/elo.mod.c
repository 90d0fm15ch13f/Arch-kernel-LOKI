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
	{ 0x5fa7c44d, __VMLINUX_SYMBOL_STR(serio_unregister_driver) },
	{ 0x5a2d3aa0, __VMLINUX_SYMBOL_STR(__serio_register_driver) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2a565a25, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x57251682, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xb3ed5ffb, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x85881d8f, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xddc26053, __VMLINUX_SYMBOL_STR(serio_open) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x4fd35f87, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x42c00678, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4fb9f94, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xaef7d030, __VMLINUX_SYMBOL_STR(serio_close) },
	{ 0x883866e0, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x8dfc89f0, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=serio";

MODULE_ALIAS("serio:ty02pr29id*ex*");