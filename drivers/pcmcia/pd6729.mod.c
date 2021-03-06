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
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x70d5af07, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xa755261f, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xefd58fac, __VMLINUX_SYMBOL_STR(pcmcia_register_socket) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x556aff3, __VMLINUX_SYMBOL_STR(pccard_nonstatic_ops) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x1729abed, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xe8109543, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x5c912edc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x318863ba, __VMLINUX_SYMBOL_STR(pcmcia_parse_events) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xcf97f3bd, __VMLINUX_SYMBOL_STR(dead_socket) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x9cfae1a5, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x4540735f, __VMLINUX_SYMBOL_STR(pcmcia_unregister_socket) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pcmcia_core,pcmcia_rsrc";

MODULE_ALIAS("pci:v00001013d00001100sv*sd*bc*sc*i*");
