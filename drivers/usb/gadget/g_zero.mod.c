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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xcca27eeb, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xfa2bcf10, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xafb0a6e5, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig_reset) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x6f0036d9, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xb1a6450c, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0xc8fd727e, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x855e8cfb, __VMLINUX_SYMBOL_STR(usb_composite_overwrite_options) },
	{ 0x9cde8e68, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xfd97c6ee, __VMLINUX_SYMBOL_STR(usb_composite_probe) },
	{ 0x1eebe045, __VMLINUX_SYMBOL_STR(usb_add_function) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x361ae8e, __VMLINUX_SYMBOL_STR(usb_put_function) },
	{ 0x858149c6, __VMLINUX_SYMBOL_STR(usb_composite_unregister) },
	{ 0xc2ab9c61, __VMLINUX_SYMBOL_STR(usb_get_function) },
	{ 0x8f313065, __VMLINUX_SYMBOL_STR(usb_string_ids_tab) },
	{ 0x772c74ae, __VMLINUX_SYMBOL_STR(usb_add_config_only) },
	{ 0xe469129a, __VMLINUX_SYMBOL_STR(usb_get_function_instance) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xafad493b, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite";


MODULE_INFO(srcversion, "F680EB496A8372182C40D98");
