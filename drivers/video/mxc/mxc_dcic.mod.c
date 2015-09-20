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
	{ 0x44d9b45b, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x11d0f47c, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6c6cdd4d, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4df9f923, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe14a2c18, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x7322d8bf, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x9ec8f16e, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0xbf390e66, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xf08b36f4, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x4ba037c0, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x475df42f, __VMLINUX_SYMBOL_STR(__register_chrdev) },
	{ 0x75a30903, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xdac11bae, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x71930ed3, __VMLINUX_SYMBOL_STR(of_property_read_string) },
	{ 0x10b45503, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x985146c1, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x2b7a6de8, __VMLINUX_SYMBOL_STR(syscon_regmap_lookup_by_phandle) },
	{ 0x43e78c59, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0xf5ee3c1a, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x8f98abaf, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xbaa21e14, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x9bf01a20, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0xe76320b4, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x1f202476, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xac8f37b2, __VMLINUX_SYMBOL_STR(outer_cache) },
	{ 0xa0b061f1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa3ad19b7, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xdeadadf4, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xf6c545b5, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x6bc3fbc0, __VMLINUX_SYMBOL_STR(__unregister_chrdev) },
	{ 0xe3b8b474, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x16e19558, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xf15693fd, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xaaf1a70a, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Cfsl,imx6q-dcic*");
MODULE_ALIAS("of:N*T*Cfsl,imx6sx-dcic*");

MODULE_INFO(srcversion, "A1652BA98651818366A42B3");
