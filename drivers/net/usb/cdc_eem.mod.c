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
	{ 0x46d88176, __VMLINUX_SYMBOL_STR(usb_driver_release_interface) },
	{ 0x8f98abaf, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xeeee0a70, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xe69ec463, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x9919fd52, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xd48e2aaa, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x2e9b3091, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x38f45a82, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x6ef34c7, __VMLINUX_SYMBOL_STR(usbnet_device_suggests_idle) },
	{ 0xfcc9c0ec, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xe50829af, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x64a34b18, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x5c88b9ff, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x1d0c0010, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x27b28719, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x33c4149c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xe0c28304, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Cip07in*");

MODULE_INFO(srcversion, "07A97BE75F2F8E124A49096");
