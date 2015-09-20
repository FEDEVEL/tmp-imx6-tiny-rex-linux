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
	{ 0xe8e9fb26, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x36094566, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xfdffe514, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa514fbfd, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd23692bb, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xee7bcf69, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8f98abaf, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x6a0c39f4, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x471012be, __VMLINUX_SYMBOL_STR(usb_get_from_anchor) },
	{ 0x11f7ed4c, __VMLINUX_SYMBOL_STR(hex_to_bin) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xecb1c1df, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xbe3aa182, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x5200c3b4, __VMLINUX_SYMBOL_STR(usb_scuttle_anchored_urbs) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x33c4149c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa0b061f1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd69e83c0, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0xbff00a1, __VMLINUX_SYMBOL_STR(usb_get_urb) },
	{ 0x723ec049, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9a8ca70, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x99b40e37, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6f0036d9, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x30d5523f, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xf17cf7ef, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0x429687b0, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x10b45503, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x78bde296, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x10d15267, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xdcc165c0, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xe44a8587, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface_async) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x552a2bde, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xcc427745, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf6c545b5, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc8fd727e, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xfaeeae22, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x388aead7, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xd48e2aaa, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xfe4e8bab, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x6ca468dd, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xcb6c388c, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface_async) },
	{ 0x6199c0d4, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x5ea3db56, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xbffb0b40, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x4a8c110d, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x9cbfc3da, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface_no_resume) },
	{ 0xc4a295b8, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xcf031ff4, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x2b937686, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5823ada0, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0x6ea1ce80, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xe69ec463, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x1ff33732, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x27b28719, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6062f387, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xaaf1a70a, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x9919fd52, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xd2bf1c79, __VMLINUX_SYMBOL_STR(mii_ethtool_sset) },
	{ 0xb01ca0da, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0xfa265485, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x2e9b3091, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x7355ac63, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8FF37FE11584888FBED2E07");
