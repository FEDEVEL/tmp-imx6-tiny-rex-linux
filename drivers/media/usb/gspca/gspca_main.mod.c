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
	{ 0xfdffe514, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x215c5214, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xcd4bab59, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8f98abaf, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xd2b0b6e5, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xc05eb747, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x3af47b18, __VMLINUX_SYMBOL_STR(v4l2_ctrl_g_ctrl) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xbe3aa182, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x8572221a, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xa0b061f1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x8591fb03, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8b4e4842, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x1923723a, __VMLINUX_SYMBOL_STR(v4l2_ctrl_s_ctrl) },
	{ 0x21665d12, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x10b45503, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4469677a, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x10d15267, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x106ee96b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xf6c545b5, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6b2dfca2, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0xbfe41261, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x80f8020e, __VMLINUX_SYMBOL_STR(vm_insert_page) },
	{ 0xdca0cd75, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xd48e2aaa, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xfe4e8bab, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xc3c287f8, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xa20680fb, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1b7a4cd5, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x5ea3db56, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0xb23645cc, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xa0b04675, __VMLINUX_SYMBOL_STR(vmalloc_32) },
	{ 0x19746c4b, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7233857, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x4e435683, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x2c6ee54d, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x71c5838b, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0xe6ff973d, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0xaaf1a70a, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x9919fd52, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x9ac389ba, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xf14dd1a4, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0x1769dfe5, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x2e9b3091, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
	{ 0x66ce1684, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "4E25DCB925481E83ADF34E7");
