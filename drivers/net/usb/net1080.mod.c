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
	{ 0xb06934bf, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xe8996e87, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x5ce31ce0, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0xa5694689, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xb3a38fb1, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x4fdcbd6a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x36094566, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x6bbf8aec, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x702e4992, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5c88b9ff, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe50829af, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x8596f259, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0xeeee0a70, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x27b28719, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x1d0c0010, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x33c4149c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xe0c28304, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v0525p1080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D0p0622d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EFF27B20292EA2953ACFB09");
