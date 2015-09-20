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
	{ 0xe4d1591e, __VMLINUX_SYMBOL_STR(fsg_config_from_params) },
	{ 0x1ccb58f7, __VMLINUX_SYMBOL_STR(fsg_common_set_num_buffers) },
	{ 0x6acb4179, __VMLINUX_SYMBOL_STR(fsg_common_set_inquiry_string) },
	{ 0x13b777c9, __VMLINUX_SYMBOL_STR(usb_add_config) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x141fce2a, __VMLINUX_SYMBOL_STR(fsg_common_remove_luns) },
	{ 0xa5230df, __VMLINUX_SYMBOL_STR(fsg_common_set_nluns) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x9a0221c7, __VMLINUX_SYMBOL_STR(fsg_common_free_buffers) },
	{ 0x5d41c87c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xa4c4cdee, __VMLINUX_SYMBOL_STR(fsg_common_set_cdev) },
	{ 0xb1a6450c, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x855e8cfb, __VMLINUX_SYMBOL_STR(usb_composite_overwrite_options) },
	{ 0x9cde8e68, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xfd97c6ee, __VMLINUX_SYMBOL_STR(usb_composite_probe) },
	{ 0x1eebe045, __VMLINUX_SYMBOL_STR(usb_add_function) },
	{ 0xd3ae3b65, __VMLINUX_SYMBOL_STR(fsg_common_create_luns) },
	{ 0x361ae8e, __VMLINUX_SYMBOL_STR(usb_put_function) },
	{ 0x858149c6, __VMLINUX_SYMBOL_STR(usb_composite_unregister) },
	{ 0xc2ab9c61, __VMLINUX_SYMBOL_STR(usb_get_function) },
	{ 0x9dc025a5, __VMLINUX_SYMBOL_STR(fsg_common_free_luns) },
	{ 0x8f313065, __VMLINUX_SYMBOL_STR(usb_string_ids_tab) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x51707c29, __VMLINUX_SYMBOL_STR(fsg_common_run_thread) },
	{ 0xe469129a, __VMLINUX_SYMBOL_STR(usb_get_function_instance) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x7e26d4a5, __VMLINUX_SYMBOL_STR(fsg_common_set_sysfs) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xafad493b, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x47c8baf4, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xd468f882, __VMLINUX_SYMBOL_STR(fsg_common_set_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb_f_mass_storage,libcomposite";


MODULE_INFO(srcversion, "71AFC20B58E78B9D541CCF3");
