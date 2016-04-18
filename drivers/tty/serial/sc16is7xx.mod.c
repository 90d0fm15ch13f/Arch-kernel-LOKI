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
	{ 0xb6f8f809, __VMLINUX_SYMBOL_STR(uart_unregister_driver) },
	{ 0xb1181af, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x8b705af2, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc693619d, __VMLINUX_SYMBOL_STR(uart_register_driver) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xe8358f9a, __VMLINUX_SYMBOL_STR(gpiochip_add_data) },
	{ 0x8733aade, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x9fbd5820, __VMLINUX_SYMBOL_STR(uart_add_one_port) },
	{ 0x19d58568, __VMLINUX_SYMBOL_STR(sched_setscheduler) },
	{ 0x3ecf2902, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x9bcf62c3, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x955b0e2e, __VMLINUX_SYMBOL_STR(kthread_worker_fn) },
	{ 0xa258169b, __VMLINUX_SYMBOL_STR(__init_kthread_worker) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x6190fcd, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x633dfbd4, __VMLINUX_SYMBOL_STR(__devm_regmap_init_i2c) },
	{ 0xf10fc3ca, __VMLINUX_SYMBOL_STR(gpiochip_remove) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x79a88b5a, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x1a035509, __VMLINUX_SYMBOL_STR(uart_remove_one_port) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x775c10bd, __VMLINUX_SYMBOL_STR(flush_kthread_worker) },
	{ 0x3df9d02e, __VMLINUX_SYMBOL_STR(uart_update_timeout) },
	{ 0xc338593a, __VMLINUX_SYMBOL_STR(uart_get_baud_rate) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x49692dc2, __VMLINUX_SYMBOL_STR(do_SAK) },
	{ 0x2198f29f, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xb7b112bf, __VMLINUX_SYMBOL_STR(uart_handle_cts_change) },
	{ 0x9fb739f5, __VMLINUX_SYMBOL_STR(uart_insert_char) },
	{ 0xe4027f60, __VMLINUX_SYMBOL_STR(regmap_raw_read) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xfe6478aa, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xc0cd3b13, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xc7079a65, __VMLINUX_SYMBOL_STR(uart_write_wakeup) },
	{ 0xb364340b, __VMLINUX_SYMBOL_STR(regmap_raw_write) },
	{ 0xbd99f163, __VMLINUX_SYMBOL_STR(regcache_cache_bypass) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe3ec4df, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x483fe73d, __VMLINUX_SYMBOL_STR(queue_kthread_work) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x4b3a5c42, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:sc16is74x");
MODULE_ALIAS("i2c:sc16is740");
MODULE_ALIAS("i2c:sc16is741");
MODULE_ALIAS("i2c:sc16is750");
MODULE_ALIAS("i2c:sc16is752");
MODULE_ALIAS("i2c:sc16is760");
MODULE_ALIAS("i2c:sc16is762");
MODULE_ALIAS("of:N*T*Cnxp,sc16is740");
MODULE_ALIAS("of:N*T*Cnxp,sc16is741");
MODULE_ALIAS("of:N*T*Cnxp,sc16is750");
MODULE_ALIAS("of:N*T*Cnxp,sc16is752");
MODULE_ALIAS("of:N*T*Cnxp,sc16is760");
MODULE_ALIAS("of:N*T*Cnxp,sc16is762");
