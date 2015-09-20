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
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe292fb9f, __VMLINUX_SYMBOL_STR(gen_pool_virt_to_phys) },
	{ 0xf4f71fc3, __VMLINUX_SYMBOL_STR(gen_pool_alloc) },
	{ 0x3330a47d, __VMLINUX_SYMBOL_STR(gen_pool_free) },
	{ 0x4df9f923, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f98abaf, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x31be35d5, __VMLINUX_SYMBOL_STR(of_get_named_gen_pool) },
	{ 0x985146c1, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x14ad1a4e, __VMLINUX_SYMBOL_STR(devm_request_and_ioremap) },
	{ 0xf5ee3c1a, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xe14a2c18, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x7322d8bf, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x9ec8f16e, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x4ba037c0, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xbf390e66, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0xf08b36f4, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x9bf01a20, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0xbaa21e14, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xdfd61436, __VMLINUX_SYMBOL_STR(_raw_write_unlock) },
	{ 0xd100acbd, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x4bc9fa80, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xceed7f85, __VMLINUX_SYMBOL_STR(_raw_write_unlock_irqrestore) },
	{ 0x97ec1ff, __VMLINUX_SYMBOL_STR(_raw_write_lock_irqsave) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x9cba3c37, __VMLINUX_SYMBOL_STR(_raw_read_unlock_irqrestore) },
	{ 0xe1f0ab3a, __VMLINUX_SYMBOL_STR(_raw_read_lock_irqsave) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x16e19558, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xe3b8b474, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0xf15693fd, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0xdeadadf4, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xa3ad19b7, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xe76320b4, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x1f202476, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xaaf1a70a, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("platform:imx6q-mlb150");
MODULE_ALIAS("platform:imx6sx-mlb50");
MODULE_ALIAS("of:N*T*Cfsl,imx6q-mlb150*");
MODULE_ALIAS("of:N*T*Cfsl,imx6sx-mlb50*");

MODULE_INFO(srcversion, "E58669B1D2A2CA7E81A3416");
