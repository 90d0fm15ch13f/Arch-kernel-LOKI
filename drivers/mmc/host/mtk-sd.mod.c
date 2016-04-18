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
	{ 0x47f2ad88, __VMLINUX_SYMBOL_STR(pm_runtime_force_resume) },
	{ 0x765d3e0, __VMLINUX_SYMBOL_STR(pm_runtime_force_suspend) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x9b78c120, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0x79fc2151, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x6859bd4e, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0xafa0835e, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0xd5957482, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x8733aade, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xe6a9fa13, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0xf5bca747, __VMLINUX_SYMBOL_STR(pinctrl_lookup_state) },
	{ 0xdc3d0d6b, __VMLINUX_SYMBOL_STR(devm_pinctrl_get) },
	{ 0x1df660c1, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x6190fcd, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x33d3f417, __VMLINUX_SYMBOL_STR(mmc_regulator_get_supply) },
	{ 0x9d4a0a9f, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x7267942f, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x58765308, __VMLINUX_SYMBOL_STR(mmc_of_parse) },
	{ 0x29051794, __VMLINUX_SYMBOL_STR(mmc_alloc_host) },
	{ 0x247c5871, __VMLINUX_SYMBOL_STR(pinctrl_select_state) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xcfc1f74, __VMLINUX_SYMBOL_STR(mmc_send_tuning) },
	{ 0xa805454d, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5f226035, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x8574cdc6, __VMLINUX_SYMBOL_STR(mmc_request_done) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xdb3bcca6, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xc48a3366, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb76f19b2, __VMLINUX_SYMBOL_STR(mmc_free_host) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xbdf58c59, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x45af8d, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0xd679af25, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x9948d78b, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core";

