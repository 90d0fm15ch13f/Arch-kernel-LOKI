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
	{ 0x8b8a081e, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x4e411790, __VMLINUX_SYMBOL_STR(kvm_apic_write_nodecode) },
	{ 0xd0b2727a, __VMLINUX_SYMBOL_STR(kvm_mmu_set_mask_ptes) },
	{ 0x3356b90b, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa7ca98c1, __VMLINUX_SYMBOL_STR(kvm_complete_insn_gp) },
	{ 0xd7b9b59f, __VMLINUX_SYMBOL_STR(kvm_vcpu_write_guest) },
	{ 0x7991fd8d, __VMLINUX_SYMBOL_STR(crash_vmclear_loaded_vmcss) },
	{ 0xb220bb06, __VMLINUX_SYMBOL_STR(kvm_cpu_get_interrupt) },
	{ 0xc3d0bcda, __VMLINUX_SYMBOL_STR(kvm_mmu_sync_roots) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x78abcf44, __VMLINUX_SYMBOL_STR(kvm_release_page_dirty) },
	{ 0x4ab61750, __VMLINUX_SYMBOL_STR(kvm_inject_page_fault) },
	{ 0xb5b3d126, __VMLINUX_SYMBOL_STR(kvm_require_dr) },
	{ 0x64020e10, __VMLINUX_SYMBOL_STR(kvm_set_shared_msr) },
	{ 0x44046cb1, __VMLINUX_SYMBOL_STR(__tracepoint_kvm_nested_vmexit_inject) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xf296d6aa, __VMLINUX_SYMBOL_STR(perf_event_release_kernel) },
	{ 0xb85d25c2, __VMLINUX_SYMBOL_STR(kvm_intr_is_single_vcpu) },
	{ 0x93d53ab0, __VMLINUX_SYMBOL_STR(kvm_set_msr_common) },
	{ 0x77444060, __VMLINUX_SYMBOL_STR(kvm_mmu_invlpg) },
	{ 0x4c6e606d, __VMLINUX_SYMBOL_STR(kvm_inject_realmode_interrupt) },
	{ 0xfa7f4d6d, __VMLINUX_SYMBOL_STR(kvm_vcpu_kick) },
	{ 0xf6fd8f5c, __VMLINUX_SYMBOL_STR(kvm_vcpu_init) },
	{ 0xd1f0e208, __VMLINUX_SYMBOL_STR(node_data) },
	{ 0x21ce9a17, __VMLINUX_SYMBOL_STR(kvm_apic_set_eoi_accelerated) },
	{ 0x6b9bda7f, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x6b93d705, __VMLINUX_SYMBOL_STR(kvm_emulate_cpuid) },
	{ 0xa4d57013, __VMLINUX_SYMBOL_STR(__tracepoint_kvm_exit) },
	{ 0xe418fde4, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x804e9076, __VMLINUX_SYMBOL_STR(kvm_queue_exception_e) },
	{ 0x485cd7f6, __VMLINUX_SYMBOL_STR(kvm_rebooting) },
	{ 0xbf70c548, __VMLINUX_SYMBOL_STR(__srcu_read_unlock) },
	{ 0x7d9c2402, __VMLINUX_SYMBOL_STR(__hrtimer_get_remaining) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xa320b11c, __VMLINUX_SYMBOL_STR(kvm_vcpu_on_spin) },
	{ 0x819d1f3b, __VMLINUX_SYMBOL_STR(kvm_mmu_unload) },
	{ 0xd4617810, __VMLINUX_SYMBOL_STR(kvm_vcpu_read_guest) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x44b1d426, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x603ff9a, __VMLINUX_SYMBOL_STR(kvm_mmu_reset_context) },
	{ 0x1e1f0f71, __VMLINUX_SYMBOL_STR(kvm_mtrr_get_guest_memory_type) },
	{ 0x5fd79807, __VMLINUX_SYMBOL_STR(kvm_vcpu_reload_apic_access_page) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3f7692b9, __VMLINUX_SYMBOL_STR(kvm_mmu_page_fault) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0xd351dd79, __VMLINUX_SYMBOL_STR(kvm_get_dr) },
	{ 0x6ecf5ebd, __VMLINUX_SYMBOL_STR(kvm_set_cr8) },
	{ 0x5a2d104c, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xf7a777ea, __VMLINUX_SYMBOL_STR(kvm_set_cr0) },
	{ 0x5f6a027f, __VMLINUX_SYMBOL_STR(__x86_set_memory_region) },
	{ 0xd54f5c0e, __VMLINUX_SYMBOL_STR(kvm_release_page_clean) },
	{ 0x56abe061, __VMLINUX_SYMBOL_STR(kvm_set_cr4) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xc599bc18, __VMLINUX_SYMBOL_STR(kvm_max_tsc_scaling_ratio) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0xd45ea32f, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0xebb466fb, __VMLINUX_SYMBOL_STR(x86_set_memory_region) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x751af884, __VMLINUX_SYMBOL_STR(kvm_mmu_unprotect_page_virt) },
	{ 0x5c7efb59, __VMLINUX_SYMBOL_STR(handle_mmio_page_fault) },
	{ 0x59c1d110, __VMLINUX_SYMBOL_STR(__cpu_possible_mask) },
	{ 0x9cd494ff, __VMLINUX_SYMBOL_STR(kvm_get_msr) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9c91b47e, __VMLINUX_SYMBOL_STR(kvm_write_tsc) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x75bc549a, __VMLINUX_SYMBOL_STR(x86_cpu_to_apicid) },
	{ 0xadb41c36, __VMLINUX_SYMBOL_STR(kvm_get_linear_rip) },
	{ 0xd0459e67, __VMLINUX_SYMBOL_STR(kvm_has_tsc_control) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x709cd8cb, __VMLINUX_SYMBOL_STR(kvm_spurious_fault) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x70f9719, __VMLINUX_SYMBOL_STR(__tracepoint_kvm_msr) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xbf6a78b1, __VMLINUX_SYMBOL_STR(kvm_emulate_hypercall) },
	{ 0xc337a989, __VMLINUX_SYMBOL_STR(kvm_set_msi_irq) },
	{ 0xf3f948ef, __VMLINUX_SYMBOL_STR(kvm_set_dr) },
	{ 0x3e1f72e0, __VMLINUX_SYMBOL_STR(kvm_vcpu_cache) },
	{ 0x28722978, __VMLINUX_SYMBOL_STR(kvm_x86_ops) },
	{ 0x6636c3c9, __VMLINUX_SYMBOL_STR(irq_set_vcpu_affinity) },
	{ 0x1014708f, __VMLINUX_SYMBOL_STR(kvm_get_cr8) },
	{ 0xe17f8bc8, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf9be585d, __VMLINUX_SYMBOL_STR(kvm_set_cr3) },
	{ 0x8f734ce7, __VMLINUX_SYMBOL_STR(kvm_emulate_wbinvd) },
	{ 0x3f54ca5, __VMLINUX_SYMBOL_STR(kvm_apic_update_irr) },
	{ 0x17eb45ce, __VMLINUX_SYMBOL_STR(__srcu_read_lock) },
	{ 0xb6a68816, __VMLINUX_SYMBOL_STR(find_last_bit) },
	{ 0x792f694e, __VMLINUX_SYMBOL_STR(kvm_before_handle_nmi) },
	{ 0xa0527cf3, __VMLINUX_SYMBOL_STR(kvm_scale_tsc) },
	{ 0xe7216340, __VMLINUX_SYMBOL_STR(cpu_bit_bitmap) },
	{ 0x6091797f, __VMLINUX_SYMBOL_STR(synchronize_rcu) },
	{ 0xc56d75ce, __VMLINUX_SYMBOL_STR(__kvm_apic_update_irr) },
	{ 0x2525388e, __VMLINUX_SYMBOL_STR(kvm_cpu_has_interrupt) },
	{ 0xb1cc6be5, __VMLINUX_SYMBOL_STR(__tracepoint_kvm_inj_virq) },
	{ 0x9e3349fb, __VMLINUX_SYMBOL_STR(kvm_mmu_slot_set_dirty) },
	{ 0x2e2df7f4, __VMLINUX_SYMBOL_STR(irq_remapping_cap) },
	{ 0x73ae496a, __VMLINUX_SYMBOL_STR(__tracepoint_kvm_page_fault) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0x7260e249, __VMLINUX_SYMBOL_STR(___preempt_schedule_notrace) },
	{ 0xf2f286c4, __VMLINUX_SYMBOL_STR(kvm_tsc_scaling_ratio_frac_bits) },
	{ 0x4e527b5, __VMLINUX_SYMBOL_STR(kvm_mmu_slot_leaf_clear_dirty) },
	{ 0x108616a4, __VMLINUX_SYMBOL_STR(kvm_valid_efer) },
	{ 0xd189bba9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x79df5377, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xc287d96a, __VMLINUX_SYMBOL_STR(kvm_set_posted_intr_wakeup_handler) },
	{ 0xa7edd517, __VMLINUX_SYMBOL_STR(kvm_write_guest_page) },
	{ 0x618911fc, __VMLINUX_SYMBOL_STR(numa_node) },
	{ 0xf41e94f5, __VMLINUX_SYMBOL_STR(__tracepoint_kvm_pi_irte_update) },
	{ 0x87e3ad23, __VMLINUX_SYMBOL_STR(kvm_vcpu_is_reset_bsp) },
	{ 0x6f75e3ea, __VMLINUX_SYMBOL_STR(__tracepoint_kvm_write_tsc_offset) },
	{ 0x80892351, __VMLINUX_SYMBOL_STR(cpu_tlbstate) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x5b3d30e0, __VMLINUX_SYMBOL_STR(kvm_after_handle_nmi) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5a237eec, __VMLINUX_SYMBOL_STR(kvm_queue_exception) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xc0cd3b13, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xd0e242be, __VMLINUX_SYMBOL_STR(kvm_lapic_set_eoi) },
	{ 0x52d58fcc, __VMLINUX_SYMBOL_STR(kvm_lmsw) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x9ed60dc5, __VMLINUX_SYMBOL_STR(kvm_requeue_exception_e) },
	{ 0xcf0b30d5, __VMLINUX_SYMBOL_STR(__tracepoint_kvm_pml_full) },
	{ 0xe8f848d8, __VMLINUX_SYMBOL_STR(kvm_init_shadow_ept_mmu) },
	{ 0x245ccad5, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0xb15e0a74, __VMLINUX_SYMBOL_STR(kvm_require_cpl) },
	{ 0xaaf935, __VMLINUX_SYMBOL_STR(kvm_disable_tdp) },
	{ 0x3e15d04e, __VMLINUX_SYMBOL_STR(kvm_mmu_clear_dirty_pt_masked) },
	{ 0xba9ed435, __VMLINUX_SYMBOL_STR(kvm_mmu_set_mmio_spte_mask) },
	{ 0xf2784f72, __VMLINUX_SYMBOL_STR(kvm_io_bus_write) },
	{ 0xfbd95c91, __VMLINUX_SYMBOL_STR(__tracepoint_kvm_cr) },
	{ 0xf2312a76, __VMLINUX_SYMBOL_STR(__tracepoint_kvm_ple_window) },
	{ 0xf5d64d7c, __VMLINUX_SYMBOL_STR(x86_emulate_instruction) },
	{ 0x102833a6, __VMLINUX_SYMBOL_STR(kvm_vcpu_gfn_to_page) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x76649161, __VMLINUX_SYMBOL_STR(kvm_read_guest_virt) },
	{ 0x8ce4f3ab, __VMLINUX_SYMBOL_STR(kvm_enable_tdp) },
	{ 0x589efc84, __VMLINUX_SYMBOL_STR(kvm_task_switch) },
	{ 0x3dc165ee, __VMLINUX_SYMBOL_STR(kvm_find_cpuid_entry) },
	{ 0xa18bb283, __VMLINUX_SYMBOL_STR(kvm_write_guest_virt_system) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2846dd8a, __VMLINUX_SYMBOL_STR(perf_event_read_value) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xed433664, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7614865a, __VMLINUX_SYMBOL_STR(kvm_mtrr_valid) },
	{ 0x49c8d275, __VMLINUX_SYMBOL_STR(reprogram_gp_counter) },
	{ 0x8b2ffff3, __VMLINUX_SYMBOL_STR(kvm_set_xcr) },
	{ 0x9a216313, __VMLINUX_SYMBOL_STR(kvm_define_shared_msr) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xf8d07327, __VMLINUX_SYMBOL_STR(kvm_set_apic_base) },
	{ 0x4df4a20d, __VMLINUX_SYMBOL_STR(kvm_emulate_halt) },
	{ 0x452301e9, __VMLINUX_SYMBOL_STR(kvm_arch_has_noncoherent_dma) },
	{ 0xe118a92e, __VMLINUX_SYMBOL_STR(kvm_vcpu_uninit) },
	{ 0x1ccd216, __VMLINUX_SYMBOL_STR(__tracepoint_kvm_fast_mmio) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfe8534d4, __VMLINUX_SYMBOL_STR(kvm_mmu_slot_largepage_remove_write_access) },
	{ 0xfa01ee8a, __VMLINUX_SYMBOL_STR(kvm_get_msr_common) },
	{ 0x8b97de6d, __VMLINUX_SYMBOL_STR(pv_mmu_ops) },
	{ 0x80813712, __VMLINUX_SYMBOL_STR(reprogram_fixed_counter) },
	{ 0x83ba5fbb, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0xecad3b34, __VMLINUX_SYMBOL_STR(do_machine_check) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x7362a2c7, __VMLINUX_SYMBOL_STR(gfn_to_page) },
	{ 0x23d99842, __VMLINUX_SYMBOL_STR(kvm_fast_pio_out) },
	{ 0x317f9e6b, __VMLINUX_SYMBOL_STR(kvm_enable_efer_bits) },
	{ 0xe6395a1f, __VMLINUX_SYMBOL_STR(apic) },
	{ 0xf8f4642c, __VMLINUX_SYMBOL_STR(__tracepoint_kvm_nested_vmexit) },
	{ 0xe129f9fb, __VMLINUX_SYMBOL_STR(kvm_set_msr) },
	{ 0x3ba7b6c6, __VMLINUX_SYMBOL_STR(kvm_init) },
	{ 0x27046576, __VMLINUX_SYMBOL_STR(kvm_exit) },
	{ 0x3f444683, __VMLINUX_SYMBOL_STR(reprogram_counter) },
	{ 0x48682db9, __VMLINUX_SYMBOL_STR(perf_guest_get_msrs) },
	{ 0x20de5193, __VMLINUX_SYMBOL_STR(kvm_disable_largepages) },
	{ 0x2d5eb7ce, __VMLINUX_SYMBOL_STR(kvm_requeue_exception) },
	{ 0x8a7f0d88, __VMLINUX_SYMBOL_STR(kvm_clear_guest_page) },
	{ 0xacf11a91, __VMLINUX_SYMBOL_STR(kvm_vcpu_halt) },
	{ 0x6228c21f, __VMLINUX_SYMBOL_STR(smp_call_function_single) },
	{ 0x748f1df7, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0xbe271ef1, __VMLINUX_SYMBOL_STR(kvm_vcpu_mark_page_dirty) },
	{ 0x827d55ef, __VMLINUX_SYMBOL_STR(kvm_rdpmc) },
	{ 0x639dd41f, __VMLINUX_SYMBOL_STR(kvm_arch_has_assigned_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kvm";

MODULE_ALIAS("cpu:type:x86,ven*fam*mod*:feature:*0085*");
