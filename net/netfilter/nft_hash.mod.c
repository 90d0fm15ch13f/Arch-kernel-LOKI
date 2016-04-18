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
	{ 0xab53350a, __VMLINUX_SYMBOL_STR(nft_unregister_set) },
	{ 0x81d07a34, __VMLINUX_SYMBOL_STR(nft_register_set) },
	{ 0xf98c2c9, __VMLINUX_SYMBOL_STR(nft_set_gc_batch_alloc) },
	{ 0x28aa6a67, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0xbf63bb61, __VMLINUX_SYMBOL_STR(nft_set_gc_batch_release) },
	{ 0x79987d48, __VMLINUX_SYMBOL_STR(rhashtable_insert_slow) },
	{ 0xe301f8de, __VMLINUX_SYMBOL_STR(rhashtable_insert_rehash) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0xbba70a2d, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd9d3bcd3, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x1d84b357, __VMLINUX_SYMBOL_STR(rhashtable_init) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x47884890, __VMLINUX_SYMBOL_STR(system_power_efficient_wq) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x95144395, __VMLINUX_SYMBOL_STR(rhashtable_walk_next) },
	{ 0x41b43946, __VMLINUX_SYMBOL_STR(rhashtable_walk_exit) },
	{ 0x1b11e68c, __VMLINUX_SYMBOL_STR(rhashtable_walk_stop) },
	{ 0x79c36008, __VMLINUX_SYMBOL_STR(rhashtable_walk_start) },
	{ 0x8875e47, __VMLINUX_SYMBOL_STR(rhashtable_walk_init) },
	{ 0x5482d3a, __VMLINUX_SYMBOL_STR(nft_set_elem_destroy) },
	{ 0x4fdd2200, __VMLINUX_SYMBOL_STR(rhashtable_free_and_destroy) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables";

