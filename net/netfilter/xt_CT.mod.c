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
	{ 0x56860d4, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0x18d236e6, __VMLINUX_SYMBOL_STR(xt_unregister_target) },
	{ 0xd4d4fe5e, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x287b2051, __VMLINUX_SYMBOL_STR(xt_register_target) },
	{ 0xcdd7df22, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
	{ 0x7bebddcc, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0xe5ac32d7, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_try_module_get) },
	{ 0xcf80c305, __VMLINUX_SYMBOL_STR(nf_ct_timeout_find_get_hook) },
	{ 0xd52fcc8c, __VMLINUX_SYMBOL_STR(nf_ct_tmpl_free) },
	{ 0xad2c1c53, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0x34337cfe, __VMLINUX_SYMBOL_STR(nf_ct_tmpl_alloc) },
	{ 0x78f9b710, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_try_module_get) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xbe5193fd, __VMLINUX_SYMBOL_STR(nf_ct_timeout_put_hook) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0xb602c57e, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_module_put) },
	{ 0x13be5989, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x4eb97a9f, __VMLINUX_SYMBOL_STR(nf_conntrack_untracked) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_conntrack";

