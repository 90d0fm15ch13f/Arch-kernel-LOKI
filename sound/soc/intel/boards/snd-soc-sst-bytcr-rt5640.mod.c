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
	{ 0xe42d4ca0, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_card) },
	{ 0xb15c538d, __VMLINUX_SYMBOL_STR(snd_soc_add_card_controls) },
	{ 0xbd599090, __VMLINUX_SYMBOL_STR(snd_soc_pm_ops) },
	{ 0xb043ce26, __VMLINUX_SYMBOL_STR(snd_soc_dapm_info_pin_switch) },
	{ 0x49b3840c, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_pin_switch) },
	{ 0xf67df1a0, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_pll) },
	{ 0xbbb9dbe7, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x795ee0bf, __VMLINUX_SYMBOL_STR(snd_soc_dapm_add_routes) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x6e0a462e, __VMLINUX_SYMBOL_STR(snd_soc_dapm_ignore_suspend) },
	{ 0xcdbfacee, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_bclk_ratio) },
	{ 0xb171ba39, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_pin_switch) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x11894d1f, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0x4faf3b09, __VMLINUX_SYMBOL_STR(rt5640_sel_asrc_clk_src) },
	{ 0xb6d5b2cc, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_fmt) },
	{ 0x9ddb11d2, __VMLINUX_SYMBOL_STR(rt5640_dmic_enable) },
	{ 0x360e82d7, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0x3a00a0c0, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_tdm_slot) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1d681509, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-soc-rt5640,snd-pcm";

