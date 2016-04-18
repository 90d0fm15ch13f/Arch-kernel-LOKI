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
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6031ebce, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0xf2b0a830, __VMLINUX_SYMBOL_STR(snd_dma_alloc_pages) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x1c55f211, __VMLINUX_SYMBOL_STR(snd_hdac_device_exit) },
	{ 0x67772523, __VMLINUX_SYMBOL_STR(snd_hda_bus_type) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xa59e8efc, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7571e404, __VMLINUX_SYMBOL_STR(snd_hdac_stream_assign) },
	{ 0x7792cd69, __VMLINUX_SYMBOL_STR(snd_hdac_device_init) },
	{ 0xec9031c8, __VMLINUX_SYMBOL_STR(snd_hdac_device_unregister) },
	{ 0x88b9b7e5, __VMLINUX_SYMBOL_STR(snd_hdac_stream_init) },
	{ 0xf59d77e1, __VMLINUX_SYMBOL_STR(snd_hdac_bus_init) },
	{ 0x5ee95b30, __VMLINUX_SYMBOL_STR(snd_hdac_stream_stop) },
	{ 0x616a1e39, __VMLINUX_SYMBOL_STR(snd_hdac_device_register) },
	{ 0x4fb9f94, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xbc18927, __VMLINUX_SYMBOL_STR(snd_hdac_bus_exit) },
	{ 0x610e9c8c, __VMLINUX_SYMBOL_STR(snd_dma_free_pages) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa52f4064, __VMLINUX_SYMBOL_STR(snd_hdac_bus_stop_chip) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x7d8bcda5, __VMLINUX_SYMBOL_STR(snd_hdac_stream_release) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-hda-core";

