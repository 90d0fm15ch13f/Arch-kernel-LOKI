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
	{ 0x6b71aeb1, __VMLINUX_SYMBOL_STR(param_ops_ulong) },
	{ 0xc6ed3317, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x5f50abad, __VMLINUX_SYMBOL_STR(tty_unregister_device) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x88a33d46, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0x9d7cd5ad, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xbc5426e8, __VMLINUX_SYMBOL_STR(pci_match_id) },
	{ 0xa19b5331, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xa82845bf, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0xe40527cb, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0xff7559e4, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0x4e17dc14, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0x677d22c1, __VMLINUX_SYMBOL_STR(tty_port_block_til_ready) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x7c5c200d, __VMLINUX_SYMBOL_STR(tty_port_hangup) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x8a0b12c6, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x1a1129b7, __VMLINUX_SYMBOL_STR(tty_port_tty_set) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xc3c4736e, __VMLINUX_SYMBOL_STR(tty_ldisc_flush) },
	{ 0x4ff8d979, __VMLINUX_SYMBOL_STR(tty_port_close_start) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd50e7646, __VMLINUX_SYMBOL_STR(tty_port_destroy) },
	{ 0x4c108669, __VMLINUX_SYMBOL_STR(tty_port_register_device) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x7a728571, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x90deb4b5, __VMLINUX_SYMBOL_STR(tty_prepare_flip_string) },
	{ 0x65a2d7d1, __VMLINUX_SYMBOL_STR(tty_port_tty_hangup) },
	{ 0x2198f29f, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x2c2d8bd6, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0x72100f33, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x95a572aa, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_flags) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x93f1d19a, __VMLINUX_SYMBOL_STR(tty_wakeup) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf1fa7158, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1eec8479, __VMLINUX_SYMBOL_STR(tty_encode_baud_rate) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x245ccad5, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v000011FEd00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000802sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000008sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000009sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000803sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000903sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd00000801sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000000Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000000Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000000Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000000Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000000Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000000Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000080Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011FEd0000080Dsv*sd*bc*sc*i*");
