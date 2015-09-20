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
	{ 0xb3a38fb1, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x4fdcbd6a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xfdffe514, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfe4e8bab, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xcc427745, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x4df9f923, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1A0Ap0101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A0Ap0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A0Ap0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A0Ap0104d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A0Ap0106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A0Ap0107d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A0Ap0108d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "445CA2769BC45032423C435");
