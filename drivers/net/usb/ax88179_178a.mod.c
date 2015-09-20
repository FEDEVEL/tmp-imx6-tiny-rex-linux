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
	{ 0x5ce31ce0, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xa5694689, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x78bde296, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xbd1349c8, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x881dbe4, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0xf7d00a7b, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x4e9a4d45, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0xc4a295b8, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x26904a0b, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0xba209a99, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x3e3aa0ea, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0xb3a38fb1, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x4fdcbd6a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xfaf98462, __VMLINUX_SYMBOL_STR(bitrev32) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x8596f259, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x36094566, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xe8996e87, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xb06934bf, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xaaf1a70a, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xde454355, __VMLINUX_SYMBOL_STR(usbnet_update_max_qlen) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xeeee0a70, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xbd6ef78a, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x429687b0, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6a0c39f4, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x63abb961, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_nopm) },
	{ 0x6bbf8aec, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xde65a25e, __VMLINUX_SYMBOL_STR(usbnet_read_cmd_nopm) },
	{ 0x702e4992, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x38f45a82, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xe50829af, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x64a34b18, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0xfcc9c0ec, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x5c88b9ff, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xcab01627, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0xa514fbfd, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0xd2bf1c79, __VMLINUX_SYMBOL_STR(mii_ethtool_sset) },
	{ 0x33c4149c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1d0c0010, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x8fd49e95, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "76A3B8EBD187A8970B310F9");
