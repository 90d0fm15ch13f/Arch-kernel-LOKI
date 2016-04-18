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
	{ 0x9669032a, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xdf0f75c6, __VMLINUX_SYMBOL_STR(eventfd_signal) },
	{ 0xfa085598, __VMLINUX_SYMBOL_STR(vhost_dev_check_owner) },
	{ 0x2e828588, __VMLINUX_SYMBOL_STR(vhost_init_used) },
	{ 0xf7a10e3, __VMLINUX_SYMBOL_STR(vhost_poll_start) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb5f0263a, __VMLINUX_SYMBOL_STR(vhost_dev_cleanup) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x92768fc4, __VMLINUX_SYMBOL_STR(vhost_log_access_ok) },
	{ 0xb47a48c4, __VMLINUX_SYMBOL_STR(vhost_enable_notify) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfbdd593f, __VMLINUX_SYMBOL_STR(vhost_dev_has_owner) },
	{ 0x5c20d811, __VMLINUX_SYMBOL_STR(vhost_poll_flush) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x16371054, __VMLINUX_SYMBOL_STR(vhost_disable_notify) },
	{ 0xf4e76787, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x49058084, __VMLINUX_SYMBOL_STR(vhost_dev_ioctl) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x1ffab745, __VMLINUX_SYMBOL_STR(vhost_log_write) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8b81a368, __VMLINUX_SYMBOL_STR(vhost_get_vq_desc) },
	{ 0x95ba9e29, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xce7675ad, __VMLINUX_SYMBOL_STR(vhost_dev_set_owner) },
	{ 0x369c974b, __VMLINUX_SYMBOL_STR(vhost_add_used_and_signal_n) },
	{ 0x269f7a09, __VMLINUX_SYMBOL_STR(vhost_dev_reset_owner_prepare) },
	{ 0xf5a3c7ce, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xcfc68341, __VMLINUX_SYMBOL_STR(synchronize_rcu_bh) },
	{ 0x57af33ce, __VMLINUX_SYMBOL_STR(vhost_add_used_and_signal) },
	{ 0x2f912cea, __VMLINUX_SYMBOL_STR(vhost_discard_vq_desc) },
	{ 0xd8ac4b06, __VMLINUX_SYMBOL_STR(tun_get_socket) },
	{ 0x9f6aefce, __VMLINUX_SYMBOL_STR(vhost_poll_queue) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x92bf9eba, __VMLINUX_SYMBOL_STR(vhost_poll_stop) },
	{ 0x23b40bbf, __VMLINUX_SYMBOL_STR(vhost_poll_init) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xbb52596a, __VMLINUX_SYMBOL_STR(iov_iter_init) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x33bf19e6, __VMLINUX_SYMBOL_STR(vhost_dev_reset_owner) },
	{ 0x77696903, __VMLINUX_SYMBOL_STR(vhost_dev_init) },
	{ 0x97a1f2d2, __VMLINUX_SYMBOL_STR(fget) },
	{ 0x478eaea3, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x7e8e732e, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0x81e465df, __VMLINUX_SYMBOL_STR(vhost_dev_stop) },
	{ 0xc9871ac7, __VMLINUX_SYMBOL_STR(vhost_vq_access_ok) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x667e0c08, __VMLINUX_SYMBOL_STR(vhost_vring_ioctl) },
	{ 0x3bcbc272, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x26a48d23, __VMLINUX_SYMBOL_STR(macvtap_get_socket) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vhost,tun,macvtap";


MODULE_INFO(srcversion, "989F33C755FC300B0FE6EED");
