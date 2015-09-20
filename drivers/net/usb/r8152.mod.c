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
	{ 0x78bde296, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x902033da, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0xc4a295b8, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xb3a38fb1, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x4fdcbd6a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xe69ec463, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x6a0c39f4, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xfaf98462, __VMLINUX_SYMBOL_STR(bitrev32) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x6ea1ce80, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xc917e655, __VMLINUX_SYMBOL_STR(debug_smp_processor_id) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x59671a9d, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0xcf031ff4, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x33c4149c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xc9a8ca70, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x99b40e37, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xbffb0b40, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x27b28719, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xfdffe514, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x4df9f923, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x323c525f, __VMLINUX_SYMBOL_STR(usb_driver_set_configuration) },
	{ 0xd4f811be, __VMLINUX_SYMBOL_STR(netdev_notice) },
	{ 0x552a2bde, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xfe4e8bab, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x2e9b3091, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x7355ac63, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x4ead3aa0, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xecb1c1df, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x388aead7, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xcc427745, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x1ff33732, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xfaeeae22, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x36094566, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x9963a089, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x4a8c110d, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xd48e2aaa, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x38f45a82, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x723ec049, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0xa514fbfd, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xdcc165c0, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x2b937686, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x8f98abaf, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9919fd52, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x4a8907de, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xbe3aa182, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x6ca468dd, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xaaf1a70a, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0BDAp8152d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp8153d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA101d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "02799CD4F2B7619C14E3F84");
