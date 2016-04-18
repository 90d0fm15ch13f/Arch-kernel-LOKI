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
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xa56e18e4, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x3386efc1, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x4ad3db9b, __VMLINUX_SYMBOL_STR(scif_close) },
	{ 0xa527ade6, __VMLINUX_SYMBOL_STR(send_sig) },
	{ 0xb97785f1, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x25fd7b95, __VMLINUX_SYMBOL_STR(cosm_unregister_driver) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xcaa6d0ed, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xeacb293e, __VMLINUX_SYMBOL_STR(seq_write) },
	{ 0xe8fc2ddd, __VMLINUX_SYMBOL_STR(kernfs_put) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa4f05861, __VMLINUX_SYMBOL_STR(scif_listen) },
	{ 0x626b7e13, __VMLINUX_SYMBOL_STR(scif_send) },
	{ 0x16c745d, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xa5b968a9, __VMLINUX_SYMBOL_STR(device_create_with_groups) },
	{ 0xce53df1d, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x72adad7, __VMLINUX_SYMBOL_STR(override_creds) },
	{ 0x8e9ddd80, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x9bcf62c3, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x3c80c06c, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x7088dbfe, __VMLINUX_SYMBOL_STR(scif_open) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x79a88b5a, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x415557b7, __VMLINUX_SYMBOL_STR(cosm_register_driver) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xabbf2fca, __VMLINUX_SYMBOL_STR(scif_recv) },
	{ 0x4a4fd348, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0xbb991b70, __VMLINUX_SYMBOL_STR(kernfs_find_and_get_ns) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2276db98, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x1b5a8a76, __VMLINUX_SYMBOL_STR(prepare_creds) },
	{ 0x9f1925cb, __VMLINUX_SYMBOL_STR(scif_accept) },
	{ 0x4fb9f94, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xbc03c677, __VMLINUX_SYMBOL_STR(scif_bind) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x211f68f1, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0x3ecf2902, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x1a72abf4, __VMLINUX_SYMBOL_STR(__put_cred) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xad5e1838, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x723b74aa, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2baddb2e, __VMLINUX_SYMBOL_STR(cosm_find_cdev_by_id) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xbd58457d, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xa41c9bd3, __VMLINUX_SYMBOL_STR(scif_poll) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x222e7ce2, __VMLINUX_SYMBOL_STR(sysfs_streq) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x30b04526, __VMLINUX_SYMBOL_STR(ida_init) },
	{ 0x231651bc, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xacb99769, __VMLINUX_SYMBOL_STR(ida_destroy) },
	{ 0xd25ad846, __VMLINUX_SYMBOL_STR(revert_creds) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scif,cosm_bus";

