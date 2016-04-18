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
	{ 0x42595e58, __VMLINUX_SYMBOL_STR(vgacon_text_force) },
	{ 0xf76857d6, __VMLINUX_SYMBOL_STR(drm_helper_move_panel_connectors_to_head) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x8b8a081e, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x931f05d3, __VMLINUX_SYMBOL_STR(ktime_get_raw) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xae405b5f, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x91040120, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0xdb5f6987, __VMLINUX_SYMBOL_STR(drm_prime_gem_destroy) },
	{ 0x68f3a30f, __VMLINUX_SYMBOL_STR(drm_atomic_get_connector_state) },
	{ 0xc6da18a8, __VMLINUX_SYMBOL_STR(drm_fb_helper_set_par) },
	{ 0x3356b90b, __VMLINUX_SYMBOL_STR(cpu_tss) },
	{ 0x20b8367d, __VMLINUX_SYMBOL_STR(device_remove_bin_file) },
	{ 0x262f20a8, __VMLINUX_SYMBOL_STR(local_clock) },
	{ 0x1f6ce67a, __VMLINUX_SYMBOL_STR(sg_pcopy_to_buffer) },
	{ 0x7e104a81, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5c912edc, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xb52ee8be, __VMLINUX_SYMBOL_STR(intel_gtt_clear_range) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x80f9913a, __VMLINUX_SYMBOL_STR(perf_tp_event) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x4f6f6ff2, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x1334c7cc, __VMLINUX_SYMBOL_STR(drm_dp_update_payload_part1) },
	{ 0x266b7638, __VMLINUX_SYMBOL_STR(interval_tree_remove) },
	{ 0x5d74dbcf, __VMLINUX_SYMBOL_STR(pnp_range_reserved) },
	{ 0xd4347fe0, __VMLINUX_SYMBOL_STR(put_pid) },
	{ 0x91c0e5ad, __VMLINUX_SYMBOL_STR(drm_compat_ioctl) },
	{ 0xfd60df2, __VMLINUX_SYMBOL_STR(drm_get_connector_status_name) },
	{ 0x138be331, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x333aecc9, __VMLINUX_SYMBOL_STR(drm_dp_dpcd_write) },
	{ 0xb98563c, __VMLINUX_SYMBOL_STR(drm_calc_timestamping_constants) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xde5d0cb5, __VMLINUX_SYMBOL_STR(drm_get_edid) },
	{ 0xe80c3a76, __VMLINUX_SYMBOL_STR(drm_atomic_helper_update_plane) },
	{ 0x9145fe5d, __VMLINUX_SYMBOL_STR(sysfs_remove_bin_file) },
	{ 0xdae80100, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xb38cc013, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x55709b41, __VMLINUX_SYMBOL_STR(drm_crtc_index) },
	{ 0x91fec1cc, __VMLINUX_SYMBOL_STR(drm_rect_calc_vscale) },
	{ 0xd3dca228, __VMLINUX_SYMBOL_STR(drm_fb_helper_cfb_fillrect) },
	{ 0x1e0c2be4, __VMLINUX_SYMBOL_STR(ioremap_wc) },
	{ 0xf584b67e, __VMLINUX_SYMBOL_STR(drm_calc_vbltimestamp_from_scanoutpos) },
	{ 0x2ca2a501, __VMLINUX_SYMBOL_STR(drm_framebuffer_reference) },
	{ 0x3386efc1, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x4f8a6161, __VMLINUX_SYMBOL_STR(drm_fb_helper_initial_config) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x616bf458, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xd2857eaa, __VMLINUX_SYMBOL_STR(drm_hdmi_vendor_infoframe_from_display_mode) },
	{ 0xc8f206f9, __VMLINUX_SYMBOL_STR(dummy_con) },
	{ 0xc78bba75, __VMLINUX_SYMBOL_STR(drm_edid_to_eld) },
	{ 0x69a358a6, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x6859bd4e, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x8bed8c1a, __VMLINUX_SYMBOL_STR(drm_wait_one_vblank) },
	{ 0x8e6ce53f, __VMLINUX_SYMBOL_STR(intel_gmch_probe) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0x691001b5, __VMLINUX_SYMBOL_STR(acpi_evaluate_integer) },
	{ 0x4acd93d3, __VMLINUX_SYMBOL_STR(release_resource) },
	{ 0x1c24591f, __VMLINUX_SYMBOL_STR(pci_unmap_rom) },
	{ 0x62b3b5ce, __VMLINUX_SYMBOL_STR(drm_gem_dmabuf_release) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x7e9e62cb, __VMLINUX_SYMBOL_STR(drm_mode_config_cleanup) },
	{ 0x51ffcfbf, __VMLINUX_SYMBOL_STR(reservation_object_wait_timeout_rcu) },
	{ 0x6a44369d, __VMLINUX_SYMBOL_STR(component_add) },
	{ 0x477c807c, __VMLINUX_SYMBOL_STR(drm_modeset_drop_locks) },
	{ 0x513212ad, __VMLINUX_SYMBOL_STR(vga_get) },
	{ 0xc48a3366, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0xdf12a927, __VMLINUX_SYMBOL_STR(acpi_check_dsm) },
	{ 0x43dd11c, __VMLINUX_SYMBOL_STR(drm_mode_config_reset) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x74c7662e, __VMLINUX_SYMBOL_STR(drm_pci_exit) },
	{ 0xd13aedd3, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_reset) },
	{ 0x1b1e1088, __VMLINUX_SYMBOL_STR(sg_nents) },
	{ 0x2f117c55, __VMLINUX_SYMBOL_STR(drm_atomic_state_clear) },
	{ 0x3a452182, __VMLINUX_SYMBOL_STR(cpufreq_cpu_get) },
	{ 0x1db7706b, __VMLINUX_SYMBOL_STR(__copy_user_nocache) },
	{ 0x319f21f7, __VMLINUX_SYMBOL_STR(do_unregister_con_driver) },
	{ 0xd08f6239, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0xa2bafa40, __VMLINUX_SYMBOL_STR(interval_tree_insert) },
	{ 0xb97785f1, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xa95d4dee, __VMLINUX_SYMBOL_STR(drm_mode_destroy) },
	{ 0x53b70a36, __VMLINUX_SYMBOL_STR(drm_match_cea_mode) },
	{ 0x57000eee, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x6b9bda7f, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x535d275b, __VMLINUX_SYMBOL_STR(mipi_dsi_dcs_write_buffer) },
	{ 0x15601f89, __VMLINUX_SYMBOL_STR(dma_buf_detach) },
	{ 0x2ec4577a, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xa9a8e17f, __VMLINUX_SYMBOL_STR(arch_phys_wc_add) },
	{ 0x4e1ae247, __VMLINUX_SYMBOL_STR(drm_property_create_range) },
	{ 0xc1a0b166, __VMLINUX_SYMBOL_STR(drm_atomic_helper_swap_state) },
	{ 0x1ef639b, __VMLINUX_SYMBOL_STR(drm_dp_mst_topology_mgr_resume) },
	{ 0x944907a1, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x24fe7e30, __VMLINUX_SYMBOL_STR(drm_atomic_get_plane_state) },
	{ 0x1f8d2ffb, __VMLINUX_SYMBOL_STR(drm_fb_helper_debug_leave) },
	{ 0x92408488, __VMLINUX_SYMBOL_STR(drm_mm_scan_add_block) },
	{ 0x780fdfd1, __VMLINUX_SYMBOL_STR(intel_enable_gtt) },
	{ 0x1a63af34, __VMLINUX_SYMBOL_STR(vga_switcheroo_process_delayed_switch) },
	{ 0x9972db48, __VMLINUX_SYMBOL_STR(drm_rect_calc_vscale_relaxed) },
	{ 0xea41f64, __VMLINUX_SYMBOL_STR(pm_qos_add_request) },
	{ 0x74265b1, __VMLINUX_SYMBOL_STR(backlight_device_register) },
	{ 0x526f6f71, __VMLINUX_SYMBOL_STR(drm_rect_calc_hscale_relaxed) },
	{ 0x7f13d491, __VMLINUX_SYMBOL_STR(pm_qos_remove_request) },
	{ 0x50e86dcd, __VMLINUX_SYMBOL_STR(drm_modeset_backoff) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x8f45676b, __VMLINUX_SYMBOL_STR(acpi_bus_get_device) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xdd695d96, __VMLINUX_SYMBOL_STR(drm_dp_mst_topology_mgr_set_mst) },
	{ 0xbf7fd2f5, __VMLINUX_SYMBOL_STR(schedule_timeout_killable) },
	{ 0xee0ad904, __VMLINUX_SYMBOL_STR(drm_helper_probe_single_connector_modes) },
	{ 0x802bde1c, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xa01ebb82, __VMLINUX_SYMBOL_STR(drm_crtc_vblank_off) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xe2f94bd2, __VMLINUX_SYMBOL_STR(sysfs_create_files) },
	{ 0x6849da56, __VMLINUX_SYMBOL_STR(__mmu_notifier_register) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x1603231d, __VMLINUX_SYMBOL_STR(pci_get_class) },
	{ 0xeacb293e, __VMLINUX_SYMBOL_STR(seq_write) },
	{ 0xf68687be, __VMLINUX_SYMBOL_STR(__sg_page_iter_start) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xa47826e4, __VMLINUX_SYMBOL_STR(drm_dp_calc_pbn_mode) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xf0ef15b4, __VMLINUX_SYMBOL_STR(list_sort) },
	{ 0x7645af6f, __VMLINUX_SYMBOL_STR(sg_pcopy_from_buffer) },
	{ 0x91cf5c2d, __VMLINUX_SYMBOL_STR(drm_gem_free_mmap_offset) },
	{ 0xc79c3bb1, __VMLINUX_SYMBOL_STR(__get_user_pages_fast) },
	{ 0xe3b436fd, __VMLINUX_SYMBOL_STR(drm_vblank_cleanup) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xcb936989, __VMLINUX_SYMBOL_STR(hdmi_infoframe_pack) },
	{ 0xf6e679b, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x9580deb, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4318d5b4, __VMLINUX_SYMBOL_STR(drm_kms_helper_hotplug_event) },
	{ 0x29a010e6, __VMLINUX_SYMBOL_STR(drm_mm_insert_node_in_range_generic) },
	{ 0xa57863e, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xb5f05fbc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x21df74d9, __VMLINUX_SYMBOL_STR(bitmap_set) },
	{ 0x21e992a5, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0xd679af25, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x3bdd1668, __VMLINUX_SYMBOL_STR(drm_panel_init) },
	{ 0x6c4616d3, __VMLINUX_SYMBOL_STR(drm_dp_mst_topology_mgr_destroy) },
	{ 0x8bec995b, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0x2300953f, __VMLINUX_SYMBOL_STR(drm_vblank_init) },
	{ 0x339b4475, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x6ba61e6a, __VMLINUX_SYMBOL_STR(drm_encoder_init) },
	{ 0xa0c598a4, __VMLINUX_SYMBOL_STR(drm_dp_mst_hpd_irq) },
	{ 0x75bb0ccb, __VMLINUX_SYMBOL_STR(drm_modeset_acquire_fini) },
	{ 0x6575af02, __VMLINUX_SYMBOL_STR(drm_pci_free) },
	{ 0xf66ecfa3, __VMLINUX_SYMBOL_STR(drm_object_property_set_value) },
	{ 0x16c745d, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x380244c0, __VMLINUX_SYMBOL_STR(pci_bus_alloc_resource) },
	{ 0x44aaf30f, __VMLINUX_SYMBOL_STR(tsc_khz) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0xcc0a6e45, __VMLINUX_SYMBOL_STR(shmem_truncate_range) },
	{ 0x426ba24, __VMLINUX_SYMBOL_STR(idr_for_each) },
	{ 0x57cab904, __VMLINUX_SYMBOL_STR(__drm_atomic_helper_crtc_destroy_state) },
	{ 0x26948d96, __VMLINUX_SYMBOL_STR(copy_user_enhanced_fast_string) },
	{ 0x8e9ddd80, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x1adaedba, __VMLINUX_SYMBOL_STR(drm_av_sync_delay) },
	{ 0xffc6c87a, __VMLINUX_SYMBOL_STR(drm_detect_monitor_audio) },
	{ 0x8826c13b, __VMLINUX_SYMBOL_STR(acpi_video_register) },
	{ 0x96d4af68, __VMLINUX_SYMBOL_STR(drm_universal_plane_init) },
	{ 0xdb60f0be, __VMLINUX_SYMBOL_STR(drm_dp_mst_allocate_vcpi) },
	{ 0xd52b1d11, __VMLINUX_SYMBOL_STR(drm_mm_init_scan) },
	{ 0x45d5cac4, __VMLINUX_SYMBOL_STR(set_page_dirty) },
	{ 0x79bb0f5a, __VMLINUX_SYMBOL_STR(drm_pci_set_busid) },
	{ 0xd6c5cf0, __VMLINUX_SYMBOL_STR(vga_put) },
	{ 0x34871adf, __VMLINUX_SYMBOL_STR(drm_dp_channel_eq_ok) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x702a6e64, __VMLINUX_SYMBOL_STR(drm_connector_cleanup) },
	{ 0xb9f9ae95, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x3dc7fac0, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x231c5430, __VMLINUX_SYMBOL_STR(__mmdrop) },
	{ 0x3da171f9, __VMLINUX_SYMBOL_STR(pci_mem_start) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x72e426bc, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x17c72110, __VMLINUX_SYMBOL_STR(__drm_atomic_helper_plane_duplicate_state) },
	{ 0x43b82b97, __VMLINUX_SYMBOL_STR(drm_vblank_count) },
	{ 0x10e5903f, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0xb1176e3b, __VMLINUX_SYMBOL_STR(drm_fb_helper_unregister_fbi) },
	{ 0xe5e6fb2a, __VMLINUX_SYMBOL_STR(drm_atomic_set_mode_for_crtc) },
	{ 0x2536bc5a, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_duplicate_state) },
	{ 0x54cdf4d4, __VMLINUX_SYMBOL_STR(__drm_atomic_helper_crtc_duplicate_state) },
	{ 0xc631580a, __VMLINUX_SYMBOL_STR(console_unlock) },
	{ 0x9e88526, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa22139c, __VMLINUX_SYMBOL_STR(drm_fb_helper_pan_display) },
	{ 0x15431a7e, __VMLINUX_SYMBOL_STR(drm_atomic_helper_update_legacy_modeset_state) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xcb2340b8, __VMLINUX_SYMBOL_STR(drm_rect_debug_print) },
	{ 0x90fbca94, __VMLINUX_SYMBOL_STR(drm_atomic_helper_set_config) },
	{ 0x7a509c12, __VMLINUX_SYMBOL_STR(drm_handle_vblank) },
	{ 0xf7e0348e, __VMLINUX_SYMBOL_STR(vga_switcheroo_unregister_client) },
	{ 0x26bdfd02, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xa084749a, __VMLINUX_SYMBOL_STR(__bitmap_or) },
	{ 0xc40c5e9b, __VMLINUX_SYMBOL_STR(drm_dp_mst_deallocate_vcpi) },
	{ 0x51b82b5f, __VMLINUX_SYMBOL_STR(drm_dp_check_act_status) },
	{ 0xef6c3f70, __VMLINUX_SYMBOL_STR(round_jiffies_up_relative) },
	{ 0x50d1f870, __VMLINUX_SYMBOL_STR(pgprot_writecombine) },
	{ 0x955a832f, __VMLINUX_SYMBOL_STR(___preempt_schedule) },
	{ 0x6671cba6, __VMLINUX_SYMBOL_STR(drm_fb_helper_set_suspend) },
	{ 0x706d051c, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x45bd495e, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0x1a546ddd, __VMLINUX_SYMBOL_STR(drm_mm_init) },
	{ 0x2f384db3, __VMLINUX_SYMBOL_STR(acpi_is_video_device) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x672f6cee, __VMLINUX_SYMBOL_STR(drm_mode_connector_attach_encoder) },
	{ 0xaea814bd, __VMLINUX_SYMBOL_STR(drm_irq_install) },
	{ 0xfb22186b, __VMLINUX_SYMBOL_STR(drm_atomic_state_alloc) },
	{ 0x29eba37f, __VMLINUX_SYMBOL_STR(current_is_async) },
	{ 0xfd674a10, __VMLINUX_SYMBOL_STR(drm_fb_helper_cfb_copyarea) },
	{ 0xe81ef1dd, __VMLINUX_SYMBOL_STR(remove_conflicting_framebuffers) },
	{ 0xdb3bcca6, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x3568d030, __VMLINUX_SYMBOL_STR(drm_mode_connector_set_path_property) },
	{ 0x711a004a, __VMLINUX_SYMBOL_STR(drm_dp_link_rate_to_bw_code) },
	{ 0xbb2fea9b, __VMLINUX_SYMBOL_STR(drm_mode_copy) },
	{ 0xd831a151, __VMLINUX_SYMBOL_STR(drm_noop) },
	{ 0x70c7b78e, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x99a1afa, __VMLINUX_SYMBOL_STR(drm_atomic_commit) },
	{ 0x809388ca, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x48193639, __VMLINUX_SYMBOL_STR(acpi_lid_open) },
	{ 0xb020c345, __VMLINUX_SYMBOL_STR(drm_plane_index) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x5dd64fbb, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x98782fd0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1916e38c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x629c05e1, __VMLINUX_SYMBOL_STR(drm_clflush_sg) },
	{ 0xbcf9c794, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x5df7068b, __VMLINUX_SYMBOL_STR(drm_mode_set_name) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xf1fa7158, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x86486639, __VMLINUX_SYMBOL_STR(drm_crtc_vblank_put) },
	{ 0x3d7149d9, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x4e0dca7a, __VMLINUX_SYMBOL_STR(drm_helper_mode_fill_fb_struct) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xae21cc14, __VMLINUX_SYMBOL_STR(drm_object_attach_property) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x83630cc0, __VMLINUX_SYMBOL_STR(drm_atomic_helper_prepare_planes) },
	{ 0x88084f49, __VMLINUX_SYMBOL_STR(drm_mode_duplicate) },
	{ 0x636f3c51, __VMLINUX_SYMBOL_STR(drm_mode_create_tv_properties) },
	{ 0x69ae3188, __VMLINUX_SYMBOL_STR(drm_has_preferred_mode) },
	{ 0x33b13caa, __VMLINUX_SYMBOL_STR(drm_crtc_init_with_planes) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xadf7e47c, __VMLINUX_SYMBOL_STR(__cpu_online_mask) },
	{ 0x3a5d0a75, __VMLINUX_SYMBOL_STR(drm_put_dev) },
	{ 0x6e30ba8e, __VMLINUX_SYMBOL_STR(drm_rect_rotate_inv) },
	{ 0x7023bea8, __VMLINUX_SYMBOL_STR(unregister_acpi_notifier) },
	{ 0xa5efbf4c, __VMLINUX_SYMBOL_STR(async_synchronize_full) },
	{ 0xafb8c6ff, __VMLINUX_SYMBOL_STR(copy_user_generic_string) },
	{ 0xe3337fe0, __VMLINUX_SYMBOL_STR(pm_runtime_get_if_in_use) },
	{ 0x467d05ca, __VMLINUX_SYMBOL_STR(mmu_notifier_unregister) },
	{ 0xe35e888e, __VMLINUX_SYMBOL_STR(drm_gem_handle_create) },
	{ 0x585c8aa2, __VMLINUX_SYMBOL_STR(drm_dp_mst_reset_vcpi_slots) },
	{ 0x490cfb78, __VMLINUX_SYMBOL_STR(drm_mm_reserve_node) },
	{ 0xf940ec6, __VMLINUX_SYMBOL_STR(drm_gem_dumb_destroy) },
	{ 0x9ea6c46c, __VMLINUX_SYMBOL_STR(vmap) },
	{ 0xcbae6c7a, __VMLINUX_SYMBOL_STR(acpi_lid_notifier_unregister) },
	{ 0x5f226035, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0x3a32839e, __VMLINUX_SYMBOL_STR(intel_gtt_chipset_flush) },
	{ 0xa22234ff, __VMLINUX_SYMBOL_STR(pci_map_rom) },
	{ 0x98e47d2, __VMLINUX_SYMBOL_STR(drm_dp_link_train_clock_recovery_delay) },
	{ 0x35ea7737, __VMLINUX_SYMBOL_STR(drm_mode_create_rotation_property) },
	{ 0x27882b9b, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0xa77858bb, __VMLINUX_SYMBOL_STR(drm_dp_get_adjust_request_voltage) },
	{ 0x479c3c86, __VMLINUX_SYMBOL_STR(find_next_zero_bit) },
	{ 0x1f9917c4, __VMLINUX_SYMBOL_STR(drm_crtc_vblank_on) },
	{ 0x9f547fae, __VMLINUX_SYMBOL_STR(drm_atomic_state_free) },
	{ 0x7d81d2de, __VMLINUX_SYMBOL_STR(dma_buf_put) },
	{ 0x880db811, __VMLINUX_SYMBOL_STR(drm_fb_helper_fill_var) },
	{ 0xeaea1241, __VMLINUX_SYMBOL_STR(shmem_read_mapping_page_gfp) },
	{ 0x5a5aae21, __VMLINUX_SYMBOL_STR(drm_plane_from_index) },
	{ 0xf8aa38c, __VMLINUX_SYMBOL_STR(drm_atomic_state_init) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xd7ee3a56, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0xb8bb9b8e, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0xbfe6f427, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x556b5b91, __VMLINUX_SYMBOL_STR(drm_panel_attach) },
	{ 0xfbaaf01e, __VMLINUX_SYMBOL_STR(console_lock) },
	{ 0x4a4fd348, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x79e69460, __VMLINUX_SYMBOL_STR(intel_iommu_gfx_mapped) },
	{ 0x9e9fdd9d, __VMLINUX_SYMBOL_STR(memunmap) },
	{ 0xe17f8bc8, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x5e51cd74, __VMLINUX_SYMBOL_STR(swiotlb_nr_tbl) },
	{ 0xf709512e, __VMLINUX_SYMBOL_STR(drm_send_vblank_event) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xedaa19a7, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x1081a331, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdd1827d3, __VMLINUX_SYMBOL_STR(drm_select_eld) },
	{ 0x6bc56e21, __VMLINUX_SYMBOL_STR(vga_client_register) },
	{ 0x9595a447, __VMLINUX_SYMBOL_STR(drm_probe_ddc) },
	{ 0x9589b005, __VMLINUX_SYMBOL_STR(pci_get_domain_bus_and_slot) },
	{ 0xfb6eedf9, __VMLINUX_SYMBOL_STR(power_group_name) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xe9627530, __VMLINUX_SYMBOL_STR(drm_dp_mst_topology_mgr_suspend) },
	{ 0xf0187927, __VMLINUX_SYMBOL_STR(__sg_page_iter_next) },
	{ 0x66b92003, __VMLINUX_SYMBOL_STR(drm_gem_object_release) },
	{ 0x677a971d, __VMLINUX_SYMBOL_STR(drm_framebuffer_unreference) },
	{ 0xcd08cc9a, __VMLINUX_SYMBOL_STR(drm_modeset_legacy_acquire_ctx) },
	{ 0x62bdaed9, __VMLINUX_SYMBOL_STR(sysfs_merge_group) },
	{ 0x9f8150cd, __VMLINUX_SYMBOL_STR(drm_read) },
	{ 0xd96babb4, __VMLINUX_SYMBOL_STR(interval_tree_iter_next) },
	{ 0x95ba9e29, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x16e5c2a, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x8aa778d0, __VMLINUX_SYMBOL_STR(drm_add_edid_modes) },
	{ 0xb9413f61, __VMLINUX_SYMBOL_STR(drm_property_add_enum) },
	{ 0x2469810f, __VMLINUX_SYMBOL_STR(__rcu_read_unlock) },
	{ 0x5bad1f35, __VMLINUX_SYMBOL_STR(pid_task) },
	{ 0x84e33f29, __VMLINUX_SYMBOL_STR(drm_dp_aux_unregister) },
	{ 0x899a0bf4, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0x2276db98, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0xa4fde00, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x1f1d9750, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x4ecb3123, __VMLINUX_SYMBOL_STR(drm_fb_helper_release_fbi) },
	{ 0x84a1beb0, __VMLINUX_SYMBOL_STR(dma_buf_unmap_attachment) },
	{ 0x58b8a2b9, __VMLINUX_SYMBOL_STR(drm_atomic_set_fb_for_plane) },
	{ 0x3ebcb9ba, __VMLINUX_SYMBOL_STR(mipi_dsi_generic_write) },
	{ 0x2cde5e39, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x9c79c14d, __VMLINUX_SYMBOL_STR(drm_fb_helper_add_one_connector) },
	{ 0xbfb6ce61, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xe93a5d75, __VMLINUX_SYMBOL_STR(sysfs_unmerge_group) },
	{ 0x87bdd3c, __VMLINUX_SYMBOL_STR(drm_debugfs_create_files) },
	{ 0x6e58ede1, __VMLINUX_SYMBOL_STR(release_pages) },
	{ 0xeb9c5778, __VMLINUX_SYMBOL_STR(con_is_bound) },
	{ 0x1616cb30, __VMLINUX_SYMBOL_STR(acpi_evaluate_dsm) },
	{ 0x1dd71f7a, __VMLINUX_SYMBOL_STR(drm_err) },
	{ 0x5c15bab1, __VMLINUX_SYMBOL_STR(drm_connector_init) },
	{ 0xb017683d, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_enable) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xc617f82c, __VMLINUX_SYMBOL_STR(unregister_oom_notifier) },
	{ 0xa4678045, __VMLINUX_SYMBOL_STR(vga_con) },
	{ 0xcc85fcb6, __VMLINUX_SYMBOL_STR(async_schedule) },
	{ 0x9014e689, __VMLINUX_SYMBOL_STR(drm_fb_helper_prepare) },
	{ 0xe35252f5, __VMLINUX_SYMBOL_STR(drm_gem_vm_open) },
	{ 0x47dc8aa8, __VMLINUX_SYMBOL_STR(drm_mode_connector_update_edid_property) },
	{ 0x6de7f7ff, __VMLINUX_SYMBOL_STR(acpi_video_get_backlight_type) },
	{ 0xfd1434d3, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x4dda6382, __VMLINUX_SYMBOL_STR(drm_modeset_unlock) },
	{ 0xdd40ae1f, __VMLINUX_SYMBOL_STR(drm_dp_mst_dump_topology) },
	{ 0x3ca0957, __VMLINUX_SYMBOL_STR(drm_gem_vm_close) },
	{ 0x5b88811, __VMLINUX_SYMBOL_STR(drm_modeset_lock) },
	{ 0xdb1e3e76, __VMLINUX_SYMBOL_STR(mark_page_accessed) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x7a45377b, __VMLINUX_SYMBOL_STR(acpi_video_unregister) },
	{ 0xdf1427e5, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x20645642, __VMLINUX_SYMBOL_STR(drm_debug) },
	{ 0xac1a55be, __VMLINUX_SYMBOL_STR(unregister_reboot_notifier) },
	{ 0x48f612e3, __VMLINUX_SYMBOL_STR(stop_machine) },
	{ 0xe5c08ddc, __VMLINUX_SYMBOL_STR(drm_crtc_get_hv_timing) },
	{ 0x7260e249, __VMLINUX_SYMBOL_STR(___preempt_schedule_notrace) },
	{ 0x4ea1f5a2, __VMLINUX_SYMBOL_STR(drm_gem_object_free) },
	{ 0x9c491f60, __VMLINUX_SYMBOL_STR(sg_alloc_table) },
	{ 0xb347bb2c, __VMLINUX_SYMBOL_STR(work_busy) },
	{ 0x72a98fdb, __VMLINUX_SYMBOL_STR(copy_user_generic_unrolled) },
	{ 0x4c78fdde, __VMLINUX_SYMBOL_STR(drm_atomic_get_crtc_state) },
	{ 0x93b3f2a6, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x61fc0ff1, __VMLINUX_SYMBOL_STR(drm_gem_prime_fd_to_handle) },
	{ 0xa7a6dbf5, __VMLINUX_SYMBOL_STR(find_vma) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xde232815, __VMLINUX_SYMBOL_STR(drm_atomic_helper_plane_set_property) },
	{ 0x2e6e5c27, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x1d23f6fe, __VMLINUX_SYMBOL_STR(drm_framebuffer_remove) },
	{ 0xa647bb87, __VMLINUX_SYMBOL_STR(drm_mode_set_crtcinfo) },
	{ 0x6a11da3a, __VMLINUX_SYMBOL_STR(drm_plane_cleanup) },
	{ 0x2f665a27, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0xdd2e21fb, __VMLINUX_SYMBOL_STR(drm_dp_find_vcpi_slots) },
	{ 0x7e282f30, __VMLINUX_SYMBOL_STR(drm_property_create_enum) },
	{ 0xd189bba9, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x61a7f497, __VMLINUX_SYMBOL_STR(drm_mode_create) },
	{ 0x5f561843, __VMLINUX_SYMBOL_STR(drm_gem_mmap) },
	{ 0x79df5377, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x81144f9d, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xa462eb5b, __VMLINUX_SYMBOL_STR(drm_mode_hsync) },
	{ 0xb5e3b98e, __VMLINUX_SYMBOL_STR(unregister_shrinker) },
	{ 0x2b05a21b, __VMLINUX_SYMBOL_STR(intel_gtt_get) },
	{ 0xf4dc79c4, __VMLINUX_SYMBOL_STR(drm_atomic_helper_wait_for_vblanks) },
	{ 0xb98f829, __VMLINUX_SYMBOL_STR(drm_atomic_set_crtc_for_plane) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x246b8af5, __VMLINUX_SYMBOL_STR(dma_buf_map_attachment) },
	{ 0xdeed8dc5, __VMLINUX_SYMBOL_STR(drm_clflush_pages) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x2b227e8a, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x6c3d728d, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_destroy_state) },
	{ 0x4f4372e2, __VMLINUX_SYMBOL_STR(drm_mode_create_scaling_mode_property) },
	{ 0x3517383e, __VMLINUX_SYMBOL_STR(register_reboot_notifier) },
	{ 0x7f5ed45f, __VMLINUX_SYMBOL_STR(dma_buf_export) },
	{ 0xcd265af1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x973fa82e, __VMLINUX_SYMBOL_STR(register_acpi_notifier) },
	{ 0xe5df83fe, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0xeb740b72, __VMLINUX_SYMBOL_STR(drm_framebuffer_unregister_private) },
	{ 0x40d04664, __VMLINUX_SYMBOL_STR(console_trylock) },
	{ 0x70cd1f, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xbcc67709, __VMLINUX_SYMBOL_STR(drm_crtc_vblank_reset) },
	{ 0xa723d7c9, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_enable_locked) },
	{ 0xeabe68ec, __VMLINUX_SYMBOL_STR(reservation_object_test_signaled_rcu) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xab884fa2, __VMLINUX_SYMBOL_STR(get_user_pages) },
	{ 0x9e728653, __VMLINUX_SYMBOL_STR(drm_fb_helper_check_var) },
	{ 0x66e215dc, __VMLINUX_SYMBOL_STR(drm_gem_private_object_init) },
	{ 0x49c6a23b, __VMLINUX_SYMBOL_STR(drm_mode_create_aspect_ratio_property) },
	{ 0x84e924ba, __VMLINUX_SYMBOL_STR(drm_dp_get_adjust_request_pre_emphasis) },
	{ 0xe50becaf, __VMLINUX_SYMBOL_STR(drm_fb_helper_blank) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xa72f765, __VMLINUX_SYMBOL_STR(drm_clflush_virt_range) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xe012d034, __VMLINUX_SYMBOL_STR(drm_dp_mst_get_edid) },
	{ 0xa17cd5d1, __VMLINUX_SYMBOL_STR(vga_switcheroo_client_fb_set) },
	{ 0xe5815f8a, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xc3971a29, __VMLINUX_SYMBOL_STR(drm_irq_uninstall) },
	{ 0x318e6ce8, __VMLINUX_SYMBOL_STR(drm_get_pci_dev) },
	{ 0xc21d019, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0x622c7922, __VMLINUX_SYMBOL_STR(register_oom_notifier) },
	{ 0x862e5745, __VMLINUX_SYMBOL_STR(__devm_request_region) },
	{ 0xb01b1db8, __VMLINUX_SYMBOL_STR(intel_gtt_insert_sg_entries) },
	{ 0xb053adda, __VMLINUX_SYMBOL_STR(drm_rect_rotate) },
	{ 0x715342e1, __VMLINUX_SYMBOL_STR(do_take_over_console) },
	{ 0x2ff063b5, __VMLINUX_SYMBOL_STR(acpi_get_name) },
	{ 0x544b0c11, __VMLINUX_SYMBOL_STR(acpi_lid_notifier_register) },
	{ 0x96e14d49, __VMLINUX_SYMBOL_STR(drm_mode_debug_printmodeline) },
	{ 0x9b720312, __VMLINUX_SYMBOL_STR(acpi_target_system_state) },
	{ 0xcf6c92de, __VMLINUX_SYMBOL_STR(drm_modeset_unlock_crtc) },
	{ 0xdc2cee13, __VMLINUX_SYMBOL_STR(set_pages_wb) },
	{ 0x245ccad5, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0x163251c8, __VMLINUX_SYMBOL_STR(drm_dp_link_train_channel_eq_delay) },
	{ 0xfe355749, __VMLINUX_SYMBOL_STR(drm_gem_object_lookup) },
	{ 0x30b64a74, __VMLINUX_SYMBOL_STR(drm_crtc_vblank_get) },
	{ 0x80572024, __VMLINUX_SYMBOL_STR(drm_pci_alloc) },
	{ 0xf69c75e0, __VMLINUX_SYMBOL_STR(drm_fb_helper_hotplug_event) },
	{ 0x860012ca, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0xa7817523, __VMLINUX_SYMBOL_STR(drm_dp_mst_topology_mgr_init) },
	{ 0x3ecf2902, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xca5c7790, __VMLINUX_SYMBOL_STR(drm_mm_init_scan_with_range) },
	{ 0x41a8bcb3, __VMLINUX_SYMBOL_STR(device_create_bin_file) },
	{ 0x3b9d009a, __VMLINUX_SYMBOL_STR(drm_format_plane_cpp) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xcbabfde2, __VMLINUX_SYMBOL_STR(drm_panel_remove) },
	{ 0x5d870e54, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0xd41fffab, __VMLINUX_SYMBOL_STR(interval_tree_iter_first) },
	{ 0xe69002d6, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7ba754c9, __VMLINUX_SYMBOL_STR(drm_fb_helper_alloc_fbi) },
	{ 0x1a770ac3, __VMLINUX_SYMBOL_STR(drm_detect_hdmi_monitor) },
	{ 0xe259ae9e, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xdd90cccb, __VMLINUX_SYMBOL_STR(cpufreq_cpu_put) },
	{ 0x680ec266, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x310f02ec, __VMLINUX_SYMBOL_STR(memremap) },
	{ 0x23b5a32f, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_dpms) },
	{ 0x4ef1f3e, __VMLINUX_SYMBOL_STR(dma_buf_attach) },
	{ 0xddd1185e, __VMLINUX_SYMBOL_STR(drm_gem_prime_handle_to_fd) },
	{ 0x92234a23, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x99195078, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0xf67b8d56, __VMLINUX_SYMBOL_STR(drm_modeset_acquire_init) },
	{ 0xa6bbd805, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xe388ece7, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0x970c4501, __VMLINUX_SYMBOL_STR(drm_connector_unregister) },
	{ 0x2dc82fdc, __VMLINUX_SYMBOL_STR(drm_gem_object_init) },
	{ 0x60cd4b4f, __VMLINUX_SYMBOL_STR(drm_encoder_cleanup) },
	{ 0xf6a9feb8, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x9b781f7, __VMLINUX_SYMBOL_STR(sysfs_remove_files) },
	{ 0x2207a57f, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xb2f74fb6, __VMLINUX_SYMBOL_STR(intel_gmch_remove) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0xe403b468, __VMLINUX_SYMBOL_STR(drm_gem_create_mmap_offset) },
	{ 0xe8109543, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x14a9a178, __VMLINUX_SYMBOL_STR(drm_get_format_name) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x778bfd81, __VMLINUX_SYMBOL_STR(mipi_dsi_attach) },
	{ 0xceba9f02, __VMLINUX_SYMBOL_STR(vm_mmap) },
	{ 0x80807b5a, __VMLINUX_SYMBOL_STR(drm_crtc_cleanup) },
	{ 0xa28078b2, __VMLINUX_SYMBOL_STR(drm_edid_duplicate) },
	{ 0x723b74aa, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x8e3f1109, __VMLINUX_SYMBOL_STR(drm_atomic_helper_commit_planes_on_crtc) },
	{ 0xa9bd2676, __VMLINUX_SYMBOL_STR(__vmalloc) },
	{ 0x97c6652, __VMLINUX_SYMBOL_STR(drm_atomic_helper_crtc_destroy_state) },
	{ 0xa08211b9, __VMLINUX_SYMBOL_STR(i2c_bit_algo) },
	{ 0x845288f0, __VMLINUX_SYMBOL_STR(drm_plane_helper_check_update) },
	{ 0xdf08bef9, __VMLINUX_SYMBOL_STR(drm_mode_config_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x94961283, __VMLINUX_SYMBOL_STR(vunmap) },
	{ 0xe6279dfd, __VMLINUX_SYMBOL_STR(drm_helper_hpd_irq_event) },
	{ 0x69ad2f20, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x4d96163f, __VMLINUX_SYMBOL_STR(drm_hdmi_avi_infoframe_from_display_mode) },
	{ 0xd6ec5b24, __VMLINUX_SYMBOL_STR(unmap_mapping_range) },
	{ 0xcafa7d5d, __VMLINUX_SYMBOL_STR(component_del) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe1096f6a, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x3bb5114a, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x1dea959e, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xd0a91bab, __VMLINUX_SYMBOL_STR(skip_spaces) },
	{ 0x18931546, __VMLINUX_SYMBOL_STR(register_shrinker) },
	{ 0xcc403ef2, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x7ee6d93a, __VMLINUX_SYMBOL_STR(nsecs_to_jiffies64) },
	{ 0x107742a9, __VMLINUX_SYMBOL_STR(drm_get_subpixel_order_name) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xc9dd14a5, __VMLINUX_SYMBOL_STR(sysfs_create_bin_file) },
	{ 0x42bb8d80, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0x1c151914, __VMLINUX_SYMBOL_STR(vga_switcheroo_register_client) },
	{ 0xbffde8ec, __VMLINUX_SYMBOL_STR(compat_alloc_user_space) },
	{ 0x6900d335, __VMLINUX_SYMBOL_STR(drm_rect_clip_scaled) },
	{ 0xed5b0e54, __VMLINUX_SYMBOL_STR(drm_panel_detach) },
	{ 0x4ec5ff45, __VMLINUX_SYMBOL_STR(invalidate_mapping_pages) },
	{ 0x9da05e10, __VMLINUX_SYMBOL_STR(mipi_dsi_create_packet) },
	{ 0x8f74891b, __VMLINUX_SYMBOL_STR(__put_task_struct) },
	{ 0x6079049c, __VMLINUX_SYMBOL_STR(drm_fb_helper_cfb_imageblit) },
	{ 0xacc2c90c, __VMLINUX_SYMBOL_STR(drm_atomic_helper_cleanup_planes) },
	{ 0xc357923c, __VMLINUX_SYMBOL_STR(pm_qos_update_request) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xd3afb949, __VMLINUX_SYMBOL_STR(drm_atomic_state_default_clear) },
	{ 0x6680019b, __VMLINUX_SYMBOL_STR(set_pages_uc) },
	{ 0xcf14c2f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x58780176, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0xf2e2d376, __VMLINUX_SYMBOL_STR(drm_fb_helper_remove_one_connector) },
	{ 0x2c13cd7c, __VMLINUX_SYMBOL_STR(sg_alloc_table_from_pages) },
	{ 0xc401283, __VMLINUX_SYMBOL_STR(drm_debugfs_remove_files) },
	{ 0x34cecded, __VMLINUX_SYMBOL_STR(drm_fb_helper_fini) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x873c28b1, __VMLINUX_SYMBOL_STR(drm_modeset_lock_all) },
	{ 0xdd150721, __VMLINUX_SYMBOL_STR(drm_mm_takedown) },
	{ 0xf08242c2, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x198b8021, __VMLINUX_SYMBOL_STR(get_pid_task) },
	{ 0x8a45bf8d, __VMLINUX_SYMBOL_STR(drm_dp_mst_port_has_audio) },
	{ 0xff79a1e, __VMLINUX_SYMBOL_STR(drm_crtc_vblank_count) },
	{ 0x63c4d61f, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0xafa0835e, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0x2d50570f, __VMLINUX_SYMBOL_STR(drm_rect_calc_hscale) },
	{ 0xb1645a2e, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0x7c327c39, __VMLINUX_SYMBOL_STR(drm_atomic_helper_disable_plane) },
	{ 0xcdd142a3, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x494e3393, __VMLINUX_SYMBOL_STR(vm_get_page_prot) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0xaa973d1a, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0x8633ef8, __VMLINUX_SYMBOL_STR(drm_atomic_add_affected_connectors) },
	{ 0xecc8780f, __VMLINUX_SYMBOL_STR(drm_fb_helper_restore_fbdev_mode_unlocked) },
	{ 0x3e2ffc78, __VMLINUX_SYMBOL_STR(drm_mode_probed_add) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x4d425718, __VMLINUX_SYMBOL_STR(drm_dp_update_payload_part2) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf147dcb2, __VMLINUX_SYMBOL_STR(hdmi_spd_infoframe_init) },
	{ 0xb97c60f9, __VMLINUX_SYMBOL_STR(drm_modeset_unlock_all) },
	{ 0x11caddc7, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x50d68377, __VMLINUX_SYMBOL_STR(arch_phys_wc_del) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x24b1af85, __VMLINUX_SYMBOL_STR(drm_atomic_add_affected_planes) },
	{ 0x97f3bb48, __VMLINUX_SYMBOL_STR(drm_fb_helper_setcmap) },
	{ 0xb16863fa, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0xa8ab39a3, __VMLINUX_SYMBOL_STR(drm_pci_init) },
	{ 0x7fb5e41b, __VMLINUX_SYMBOL_STR(trace_output_call) },
	{ 0x52550a9d, __VMLINUX_SYMBOL_STR(drm_property_create) },
	{ 0x745b2bdc, __VMLINUX_SYMBOL_STR(drm_framebuffer_init) },
	{ 0x7f02188f, __VMLINUX_SYMBOL_STR(__msecs_to_jiffies) },
	{ 0xc360e7e2, __VMLINUX_SYMBOL_STR(drm_ut_debug_printk) },
	{ 0xa4466414, __VMLINUX_SYMBOL_STR(drm_mm_remove_node) },
	{ 0x30b04526, __VMLINUX_SYMBOL_STR(ida_init) },
	{ 0x454eb7c7, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_init) },
	{ 0x3e882943, __VMLINUX_SYMBOL_STR(pcibios_align_resource) },
	{ 0x5fb2e8ef, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0xfbc4f89e, __VMLINUX_SYMBOL_STR(io_schedule_timeout) },
	{ 0x8d522714, __VMLINUX_SYMBOL_STR(__rcu_read_lock) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x36314080, __VMLINUX_SYMBOL_STR(drm_panel_add) },
	{ 0xc0b8f1ec, __VMLINUX_SYMBOL_STR(drm_dp_dpcd_read) },
	{ 0xb37e1ee6, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x2a86697b, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x465a0936, __VMLINUX_SYMBOL_STR(drm_dp_mst_detect_port) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xb33ea282, __VMLINUX_SYMBOL_STR(backlight_device_unregister) },
	{ 0xf247f9d4, __VMLINUX_SYMBOL_STR(drm_dp_aux_register) },
	{ 0x60f8d0bd, __VMLINUX_SYMBOL_STR(drm_fb_helper_fill_fix) },
	{ 0x2793e3d5, __VMLINUX_SYMBOL_STR(drm_pick_cmdline_mode) },
	{ 0x3e4a4621, __VMLINUX_SYMBOL_STR(drm_connector_register) },
	{ 0x11a044f6, __VMLINUX_SYMBOL_STR(mod_timer_pinned) },
	{ 0xacb99769, __VMLINUX_SYMBOL_STR(ida_destroy) },
	{ 0x3ac1fef9, __VMLINUX_SYMBOL_STR(drm_mode_legacy_fb_format) },
	{ 0x82df4c21, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0xb5e1a8c5, __VMLINUX_SYMBOL_STR(drm_mode_crtc_set_gamma_size) },
	{ 0xb099cf6c, __VMLINUX_SYMBOL_STR(gpiod_put) },
	{ 0xa109c5ff, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_disable) },
	{ 0x680fdd20, __VMLINUX_SYMBOL_STR(drm_mode_object_find) },
	{ 0x173ad2ac, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x49804bc4, __VMLINUX_SYMBOL_STR(drm_fb_helper_debug_enter) },
	{ 0x47c68e03, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0x2b04fec, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x748f1df7, __VMLINUX_SYMBOL_STR(__put_page) },
	{ 0x134a265d, __VMLINUX_SYMBOL_STR(drm_fb_helper_init) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xb01e5748, __VMLINUX_SYMBOL_STR(simple_attr_write) },
	{ 0x574907aa, __VMLINUX_SYMBOL_STR(drm_fb_helper_single_add_all_connectors) },
	{ 0x220d59b9, __VMLINUX_SYMBOL_STR(vm_insert_pfn) },
	{ 0x91ac822f, __VMLINUX_SYMBOL_STR(vscnprintf) },
	{ 0x452cf44e, __VMLINUX_SYMBOL_STR(drm_mode_vrefresh) },
	{ 0xfcf54a4f, __VMLINUX_SYMBOL_STR(drm_mm_scan_remove_block) },
	{ 0x2e7a4300, __VMLINUX_SYMBOL_STR(drm_rgb_quant_range_selectable) },
	{ 0x3174bd79, __VMLINUX_SYMBOL_STR(bitmap_clear) },
	{ 0x801fa0e0, __VMLINUX_SYMBOL_STR(drm_open) },
	{ 0x53372604, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_fini) },
	{ 0xf9a516bb, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x66ad7bba, __VMLINUX_SYMBOL_STR(drm_atomic_helper_check_planes) },
	{ 0xf96ec70, __VMLINUX_SYMBOL_STR(drm_dp_clock_recovery_ok) },
	{ 0x63a54775, __VMLINUX_SYMBOL_STR(gpiod_get) },
	{ 0x5af9fc70, __VMLINUX_SYMBOL_STR(drm_modeset_lock_crtc) },
	{ 0xffd313cf, __VMLINUX_SYMBOL_STR(drm_atomic_helper_check_modeset) },
	{ 0x70aa83b7, __VMLINUX_SYMBOL_STR(drm_atomic_helper_plane_destroy_state) },
	{ 0x7729dcad, __VMLINUX_SYMBOL_STR(drm_framebuffer_cleanup) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm_kms_helper,drm,intel-gtt,video,button,i2c-algo-bit";

MODULE_ALIAS("pci:v00008086d00003577sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002562sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003582sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000358Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002572sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002582sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000258Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002592sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002772sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000027A2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000027AEsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002972sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002982sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002992sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029A2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029B2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029C2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029D2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002A02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002A12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002A42sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E32sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E42sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E92sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A001sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A011sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000042sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000046sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000102sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000112sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000122sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000010Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000106sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000116sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000126sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000016Asv0000152Dsd00008990bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000156sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000166sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000152sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000162sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000015Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000016Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000402sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000412sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000422sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000040Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000041Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000042Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000040Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000041Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000042Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000040Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000041Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000042Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C0Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C1Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C2Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C0Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C1Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C2Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C0Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C1Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C2Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A0Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A1Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A2Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A0Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A1Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A2Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D0Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D1Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D2Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D0Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D1Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D2Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D0Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D1Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D2Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000406sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000416sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000426sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C06sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C16sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C26sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A06sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A16sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A26sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A0Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A1Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A2Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D06sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D16sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D26sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F30sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F31sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F32sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F33sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000157sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000155sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001602sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001606sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001612sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001616sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001622sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001626sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000022B0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000022B1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000022B2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000022B3sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001906sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000190Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001902sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000190Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000190Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001916sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001921sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000191Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001912sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000191Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000191Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000191Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001926sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000192Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000192Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001932sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000193Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000193Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000193Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A84sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001A84sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005A84sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005913sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005915sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005917sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005906sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000590Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005902sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000590Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000590Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005916sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005921sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000591Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005912sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000591Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000591Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000591Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005926sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000592Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000592Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005932sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000593Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000593Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000593Dsv*sd*bc03sc*i*");
