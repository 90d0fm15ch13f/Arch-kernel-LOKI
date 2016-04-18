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
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x4a045773, __VMLINUX_SYMBOL_STR(sst_shim32_write) },
	{ 0xa0c6960, __VMLINUX_SYMBOL_STR(sst_dsp_shim_write) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x4d90281d, __VMLINUX_SYMBOL_STR(sst_memcpy_toio_32) },
	{ 0xee032ea3, __VMLINUX_SYMBOL_STR(sst_dsp_inbox_read) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x24f92812, __VMLINUX_SYMBOL_STR(sst_dsp_outbox_write) },
	{ 0x22ba2c0d, __VMLINUX_SYMBOL_STR(sst_dsp_shim_update_bits) },
	{ 0xc21fdcca, __VMLINUX_SYMBOL_STR(sst_ipc_tx_msg_reply_complete) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x8ddaab0d, __VMLINUX_SYMBOL_STR(sst_dsp_mailbox_init) },
	{ 0x1b5e8b82, __VMLINUX_SYMBOL_STR(sst_shim32_read) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x9d16e829, __VMLINUX_SYMBOL_STR(sst_dsp_shim_read) },
	{ 0xc0a667f4, __VMLINUX_SYMBOL_STR(sst_ipc_init) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x534314f2, __VMLINUX_SYMBOL_STR(sst_dsp_shim_update_bits_forced) },
	{ 0xea15597e, __VMLINUX_SYMBOL_STR(sst_dsp_shim_update_bits_unlocked) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x72839fea, __VMLINUX_SYMBOL_STR(sst_ipc_fini) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x277aecfc, __VMLINUX_SYMBOL_STR(sst_dsp_shim_read_unlocked) },
	{ 0x483fe73d, __VMLINUX_SYMBOL_STR(queue_kthread_work) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1757e9d4, __VMLINUX_SYMBOL_STR(sst_memcpy_fromio_32) },
	{ 0xcf14c2f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2e53d9ea, __VMLINUX_SYMBOL_STR(sst_dsp_shim_write_unlocked) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1c5796ff, __VMLINUX_SYMBOL_STR(sst_ipc_tx_message_wait) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x282b80f5, __VMLINUX_SYMBOL_STR(sst_dsp_register_poll) },
	{ 0x173ad2ac, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-sst-dsp,snd-soc-sst-ipc";

