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
	{ 0x2408463b, __VMLINUX_SYMBOL_STR(team_mode_unregister) },
	{ 0x881cdb45, __VMLINUX_SYMBOL_STR(team_mode_register) },
	{ 0x64ac55b7, __VMLINUX_SYMBOL_STR(team_option_inst_set_change) },
	{ 0xe5e48493, __VMLINUX_SYMBOL_STR(team_options_register) },
	{ 0x86af7615, __VMLINUX_SYMBOL_STR(team_options_unregister) },
	{ 0x84ea58ec, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0xd8b2955b, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x68064f38, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=team";

