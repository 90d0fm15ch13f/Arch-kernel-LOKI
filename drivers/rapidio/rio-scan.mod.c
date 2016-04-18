#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5e862211, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xe1bd6c99, __VMLINUX_SYMBOL_STR(rio_init_mports) },
	{ 0xeaa4f010, __VMLINUX_SYMBOL_STR(rio_register_scan) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc269f33f, __VMLINUX_SYMBOL_STR(rio_set_port_lockout) },
	{ 0x5ee23d37, __VMLINUX_SYMBOL_STR(rio_get_comptag) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xecdf0096, __VMLINUX_SYMBOL_STR(rio_route_add_entry) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x373c683e, __VMLINUX_SYMBOL_STR(rio_mport_chk_dev_access) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xb378c5fd, __VMLINUX_SYMBOL_STR(__rio_local_write_config_32) },
	{ 0x6337b6b3, __VMLINUX_SYMBOL_STR(rio_unlock_device) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xa08783f0, __VMLINUX_SYMBOL_STR(rio_route_get_entry) },
	{ 0xd9d3ea29, __VMLINUX_SYMBOL_STR(rio_lock_device) },
	{ 0x9fd710eb, __VMLINUX_SYMBOL_STR(rio_mport_get_efb) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf3c687e5, __VMLINUX_SYMBOL_STR(rio_route_clr_table) },
	{ 0x979a007b, __VMLINUX_SYMBOL_STR(rio_enable_rx_tx_port) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xbfb4532a, __VMLINUX_SYMBOL_STR(rio_mport_get_physefb) },
	{ 0xf60cfd19, __VMLINUX_SYMBOL_STR(rio_add_device) },
	{ 0x15f42f8, __VMLINUX_SYMBOL_STR(rio_dev_get) },
	{ 0xd40413b5, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x8cb22087, __VMLINUX_SYMBOL_STR(rio_attach_device) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x6aca8238, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x7c6afdb8, __VMLINUX_SYMBOL_STR(rio_mport_write_config_32) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfc7bef77, __VMLINUX_SYMBOL_STR(rio_mport_read_config_32) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4ad19d38, __VMLINUX_SYMBOL_STR(__rio_local_read_config_32) },
	{ 0x873a9012, __VMLINUX_SYMBOL_STR(rio_mport_get_feature) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rapidio";

