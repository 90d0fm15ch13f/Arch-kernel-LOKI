#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5e862211, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x4017f014, __VMLINUX_SYMBOL_STR(iio_kfifo_allocate) },
	{ 0x1a2936a4, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_postenable) },
	{ 0x392fb9b7, __VMLINUX_SYMBOL_STR(iio_buffer_get) },
	{ 0x45a7a3d1, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_predisable) },
	{ 0xe65fdd3c, __VMLINUX_SYMBOL_STR(iio_kfifo_free) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6b20c803, __VMLINUX_SYMBOL_STR(iio_alloc_pollfunc) },
	{ 0x8744f54, __VMLINUX_SYMBOL_STR(iio_dealloc_pollfunc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kfifo_buf,industrialio";

