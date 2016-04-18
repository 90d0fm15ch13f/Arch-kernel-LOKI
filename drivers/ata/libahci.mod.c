#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x5e862211, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x582b5a1, __VMLINUX_SYMBOL_STR(ata_dummy_port_ops) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x9bd26c22, __VMLINUX_SYMBOL_STR(ata_port_freeze) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf8f3a0fb, __VMLINUX_SYMBOL_STR(ata_ratelimit) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xcba6bd78, __VMLINUX_SYMBOL_STR(dev_attr_sw_activity) },
	{ 0x8cff4c8c, __VMLINUX_SYMBOL_STR(ata_port_printk) },
	{ 0xbe67e353, __VMLINUX_SYMBOL_STR(sata_pmp_error_handler) },
	{ 0xf5eecf25, __VMLINUX_SYMBOL_STR(sata_link_scr_lpm) },
	{ 0x9e7a1dc7, __VMLINUX_SYMBOL_STR(sata_pmp_qc_defer_cmd_switch) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x9597f28a, __VMLINUX_SYMBOL_STR(ata_port_desc) },
	{ 0x3bbf8c9d, __VMLINUX_SYMBOL_STR(dev_attr_em_message) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4fdc945d, __VMLINUX_SYMBOL_STR(sata_deb_timing_normal) },
	{ 0x48e9b550, __VMLINUX_SYMBOL_STR(sata_pmp_port_ops) },
	{ 0x6ed273fd, __VMLINUX_SYMBOL_STR(ata_ehi_push_desc) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x43bb8b3c, __VMLINUX_SYMBOL_STR(ata_dev_set_feature) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x858d015a, __VMLINUX_SYMBOL_STR(ata_dev_printk) },
	{ 0xe9c1f6e3, __VMLINUX_SYMBOL_STR(ata_wait_register) },
	{ 0xaac508f6, __VMLINUX_SYMBOL_STR(ata_std_qc_defer) },
	{ 0xb287d6c8, __VMLINUX_SYMBOL_STR(ata_host_start) },
	{ 0xb4f57e63, __VMLINUX_SYMBOL_STR(ata_link_abort) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xae111bde, __VMLINUX_SYMBOL_STR(dev_attr_unload_heads) },
	{ 0x6e6d1132, __VMLINUX_SYMBOL_STR(ata_msleep) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xcccfb2fa, __VMLINUX_SYMBOL_STR(sata_deb_timing_hotplug) },
	{ 0x18c9c0d6, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0x6d2a88ce, __VMLINUX_SYMBOL_STR(ata_ehi_clear_desc) },
	{ 0x75a20463, __VMLINUX_SYMBOL_STR(sata_link_hardreset) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x73c832f2, __VMLINUX_SYMBOL_STR(ata_dev_classify) },
	{ 0x6543f14, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6cd21997, __VMLINUX_SYMBOL_STR(ata_tf_to_fis) },
	{ 0xd776e03, __VMLINUX_SYMBOL_STR(ata_host_register) },
	{ 0x2d8f8a5d, __VMLINUX_SYMBOL_STR(dev_attr_em_message_type) },
	{ 0xd842c70d, __VMLINUX_SYMBOL_STR(sata_lpm_ignore_phy_events) },
	{ 0x39c6ca22, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xedb3fb65, __VMLINUX_SYMBOL_STR(ata_link_printk) },
	{ 0xa5cd9dfc, __VMLINUX_SYMBOL_STR(ata_wait_after_reset) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x757d04e9, __VMLINUX_SYMBOL_STR(ata_qc_complete_multiple) },
	{ 0x55ef3106, __VMLINUX_SYMBOL_STR(ata_link_next) },
	{ 0x69ad2f20, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9304b6, __VMLINUX_SYMBOL_STR(ata_tf_from_fis) },
	{ 0x6128b5fc, __VMLINUX_SYMBOL_STR(__printk_ratelimit) },
	{ 0x9b645614, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8d8e69b4, __VMLINUX_SYMBOL_STR(ata_std_postreset) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x7b6bc2f4, __VMLINUX_SYMBOL_STR(dev_attr_link_power_management_policy) },
	{ 0x9d4219ff, __VMLINUX_SYMBOL_STR(ata_port_abort) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8733aade, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xcb9c3b3b, __VMLINUX_SYMBOL_STR(sata_async_notification) },
	{ 0x19fa509d, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

