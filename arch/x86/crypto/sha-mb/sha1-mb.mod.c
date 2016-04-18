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
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x6b9bda7f, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x29c7aaa6, __VMLINUX_SYMBOL_STR(crypto_ahash_walk_first) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xe58f1146, __VMLINUX_SYMBOL_STR(crypto_hash_walk_done) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x421066bc, __VMLINUX_SYMBOL_STR(mcryptd_free_ahash) },
	{ 0x93d0c2ea, __VMLINUX_SYMBOL_STR(crypto_ahash_final) },
	{ 0x3ac104dd, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x59c1d110, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x415ac40c, __VMLINUX_SYMBOL_STR(crypto_ahash_finup) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xd986dad1, __VMLINUX_SYMBOL_STR(kernel_fpu_begin) },
	{ 0x1f9e585d, __VMLINUX_SYMBOL_STR(crypto_register_ahash) },
	{ 0x23d4d6b9, __VMLINUX_SYMBOL_STR(crypto_unregister_shash) },
	{ 0x8347667c, __VMLINUX_SYMBOL_STR(mcryptd_flusher) },
	{ 0x73892a61, __VMLINUX_SYMBOL_STR(mcryptd_arm_flusher) },
	{ 0x618c2ad5, __VMLINUX_SYMBOL_STR(crypto_register_shash) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x38722f80, __VMLINUX_SYMBOL_STR(kernel_fpu_end) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x79c7731b, __VMLINUX_SYMBOL_STR(crypto_unregister_ahash) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xed433664, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x828f46c0, __VMLINUX_SYMBOL_STR(mcryptd_alloc_ahash) },
	{ 0xd62df6d6, __VMLINUX_SYMBOL_STR(crypto_ahash_type) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mcryptd";

