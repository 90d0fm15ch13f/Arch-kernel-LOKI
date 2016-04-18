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
	{ 0xcfc8af13, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0xdba36ed7, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
	{ 0xe31d9f2b, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0x16edd637, __VMLINUX_SYMBOL_STR(virtqueue_add_inbuf) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0xdfd3a075, __VMLINUX_SYMBOL_STR(wait_for_completion_killable) },
	{ 0x5fe907b7, __VMLINUX_SYMBOL_STR(hwrng_register) },
	{ 0x207f2ede, __VMLINUX_SYMBOL_STR(hwrng_unregister) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x27882b9b, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x21e992a5, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x64ab0e98, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xb2d5a552, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x75b156c, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=virtio,virtio_ring,rng-core";

MODULE_ALIAS("virtio:d00000004v*");
