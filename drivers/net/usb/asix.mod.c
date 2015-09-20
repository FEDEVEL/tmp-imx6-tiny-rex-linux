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
	{ 0x36094566, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xfdffe514, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa514fbfd, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x5515d724, __VMLINUX_SYMBOL_STR(phy_disconnect) },
	{ 0xb06934bf, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xdddbad23, __VMLINUX_SYMBOL_STR(phy_stop) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa5694689, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x18046141, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xbd6ef78a, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x5ce31ce0, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xcab01627, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0xa33a9aec, __VMLINUX_SYMBOL_STR(phy_ethtool_gset) },
	{ 0x33c4149c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xba209a99, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0xde454355, __VMLINUX_SYMBOL_STR(usbnet_update_max_qlen) },
	{ 0xa0b061f1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd59ebf2b, __VMLINUX_SYMBOL_STR(mdiobus_unregister) },
	{ 0xc9a8ca70, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xb0a915b1, __VMLINUX_SYMBOL_STR(phy_start_aneg) },
	{ 0x230ff9f5, __VMLINUX_SYMBOL_STR(phy_print_status) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xbd1349c8, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x774d485a, __VMLINUX_SYMBOL_STR(phy_start) },
	{ 0x429687b0, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xb3a38fb1, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xe80b5b62, __VMLINUX_SYMBOL_STR(mdiobus_free) },
	{ 0xeeee0a70, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x169bf55d, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x1d0c0010, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xf6c545b5, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x26904a0b, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0xe8996e87, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xeee0e7dd, __VMLINUX_SYMBOL_STR(usbnet_get_link) },
	{ 0x39871659, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0xe0c28304, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x702e4992, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xfe4e8bab, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xe9724c1f, __VMLINUX_SYMBOL_STR(mdiobus_register) },
	{ 0x4e9a4d45, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x1778ed5b, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3517232c, __VMLINUX_SYMBOL_STR(genphy_resume) },
	{ 0x64a34b18, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x3e3aa0ea, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x498fefbb, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0xf7d00a7b, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x4a8c110d, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xfaf98462, __VMLINUX_SYMBOL_STR(bitrev32) },
	{ 0x37bc9253, __VMLINUX_SYMBOL_STR(usbnet_unlink_rx_urbs) },
	{ 0xc4a295b8, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8596f259, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0xf59d2e34, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0x2323725c, __VMLINUX_SYMBOL_STR(phy_connect) },
	{ 0x4fdcbd6a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x5d379c87, __VMLINUX_SYMBOL_STR(phy_mii_ioctl) },
	{ 0x814d93ea, __VMLINUX_SYMBOL_STR(phy_ethtool_sset) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5823ada0, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x27b28719, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6062f387, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x6bbf8aec, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x881dbe4, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x2e8d98a, __VMLINUX_SYMBOL_STR(mdiobus_alloc_size) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v077Bp2226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p420Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp90FFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p003Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v6189p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0056d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1189p0893d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1631p6200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp7203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p1780d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0789p0160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1557p7720d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C05d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p1A02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1737p0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0930d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp5055d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05ACp1402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p772Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14EApAB11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0pA877d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p7E2Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p172Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp20F9d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8F87AA2A263EBAE820B3CA7");
