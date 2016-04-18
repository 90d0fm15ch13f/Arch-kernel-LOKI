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
	{ 0x2124d861, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0xb2653640, __VMLINUX_SYMBOL_STR(kset_unregister) },
	{ 0x8880032a, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x6fa00678, __VMLINUX_SYMBOL_STR(padata_start) },
	{ 0x45be7858, __VMLINUX_SYMBOL_STR(kset_create_and_add) },
	{ 0x82294f15, __VMLINUX_SYMBOL_STR(kernel_kobj) },
	{ 0xcfc68341, __VMLINUX_SYMBOL_STR(synchronize_rcu_bh) },
	{ 0x200e426d, __VMLINUX_SYMBOL_STR(aead_register_instance) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x6d36d9ce, __VMLINUX_SYMBOL_STR(crypto_grab_aead) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0xe6841c68, __VMLINUX_SYMBOL_STR(padata_stop) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x72b6502b, __VMLINUX_SYMBOL_STR(padata_free) },
	{ 0x6a2e05c0, __VMLINUX_SYMBOL_STR(padata_unregister_cpumask_notifier) },
	{ 0xd7d79132, __VMLINUX_SYMBOL_STR(put_online_cpus) },
	{ 0x8c886110, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x8bfcb28e, __VMLINUX_SYMBOL_STR(kobject_add) },
	{ 0x8acc42d8, __VMLINUX_SYMBOL_STR(padata_register_cpumask_notifier) },
	{ 0x39b52d19, __VMLINUX_SYMBOL_STR(__bitmap_and) },
	{ 0x59c1d110, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xe3bbe390, __VMLINUX_SYMBOL_STR(padata_alloc_possible) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x3efb35c9, __VMLINUX_SYMBOL_STR(get_online_cpus) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x16d44a63, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0x72665ac2, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x7cf4b098, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x27769b37, __VMLINUX_SYMBOL_STR(crypto_aead_setkey) },
	{ 0xd7482804, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0xc012795c, __VMLINUX_SYMBOL_STR(padata_do_parallel) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x520a2e6f, __VMLINUX_SYMBOL_STR(padata_do_serial) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

