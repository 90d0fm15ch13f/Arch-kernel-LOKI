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
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x4403fcf, __VMLINUX_SYMBOL_STR(unregister_capi_driver) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9f823278, __VMLINUX_SYMBOL_STR(register_capi_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xcb601ff8, __VMLINUX_SYMBOL_STR(b1ctl_proc_fops) },
	{ 0x83149a0a, __VMLINUX_SYMBOL_STR(b1_reset_ctr) },
	{ 0x26e8c352, __VMLINUX_SYMBOL_STR(b1_load_firmware) },
	{ 0x5bbe9e19, __VMLINUX_SYMBOL_STR(b1_send_message) },
	{ 0xeff14d79, __VMLINUX_SYMBOL_STR(b1_release_appl) },
	{ 0xf0905a04, __VMLINUX_SYMBOL_STR(b1_register_appl) },
	{ 0xfa10fee4, __VMLINUX_SYMBOL_STR(b1_interrupt) },
	{ 0xdfd28376, __VMLINUX_SYMBOL_STR(b1_detect) },
	{ 0x512171f2, __VMLINUX_SYMBOL_STR(attach_capi_ctr) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x3eafcb16, __VMLINUX_SYMBOL_STR(b1dmactl_proc_fops) },
	{ 0x75f79a83, __VMLINUX_SYMBOL_STR(b1dma_reset_ctr) },
	{ 0xc1b41505, __VMLINUX_SYMBOL_STR(b1dma_load_firmware) },
	{ 0x60dbc72f, __VMLINUX_SYMBOL_STR(b1dma_send_message) },
	{ 0xd484bde3, __VMLINUX_SYMBOL_STR(b1dma_release_appl) },
	{ 0x8cd31c15, __VMLINUX_SYMBOL_STR(b1dma_register_appl) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xd6f9f1ea, __VMLINUX_SYMBOL_STR(b1dma_interrupt) },
	{ 0x36cc2df7, __VMLINUX_SYMBOL_STR(b1_getrevision) },
	{ 0x7698541e, __VMLINUX_SYMBOL_STR(b1pciv4_detect) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x3b4f2fae, __VMLINUX_SYMBOL_STR(avmcard_dma_alloc) },
	{ 0x14a872fd, __VMLINUX_SYMBOL_STR(b1_alloc_card) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x79d32648, __VMLINUX_SYMBOL_STR(b1_free_card) },
	{ 0x96f2db0b, __VMLINUX_SYMBOL_STR(avmcard_dma_free) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xff7559e4, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x6047585b, __VMLINUX_SYMBOL_STR(detach_capi_ctr) },
	{ 0x5073dbca, __VMLINUX_SYMBOL_STR(b1dma_reset) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kernelcapi,b1,b1dma";

MODULE_ALIAS("pci:v00001244d00000700sv*sd*bc*sc*i*");
