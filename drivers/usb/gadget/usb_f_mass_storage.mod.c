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
	{ 0x741e44c1, __VMLINUX_SYMBOL_STR(d_path) },
	{ 0xa8232c78, __VMLINUX_SYMBOL_STR(strtobool) },
	{ 0x106d2a09, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xfdffe514, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe8148714, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0x7e9efe8e, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0x22e1ae6f, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x6919eec5, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xa0eba47f, __VMLINUX_SYMBOL_STR(dequeue_signal) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x8f98abaf, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x76cf47f6, __VMLINUX_SYMBOL_STR(__aeabi_llsl) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x534b92a3, __VMLINUX_SYMBOL_STR(config_item_put) },
	{ 0xa0b061f1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2bc836a4, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x49488805, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0xf890557, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x455293f6, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xa825278b, __VMLINUX_SYMBOL_STR(vfs_read) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xcd63c845, __VMLINUX_SYMBOL_STR(__aeabi_lasr) },
	{ 0xc0326e6a, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0xb1a6450c, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0x4df9f923, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x65550fb, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x10b45503, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xd40407fc, __VMLINUX_SYMBOL_STR(unregister_gadget_item) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x54d923f1, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf6c545b5, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xadc592d4, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x83211609, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xa958ed4, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x383075cd, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xf8ecf8b6, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x32af35e6, __VMLINUX_SYMBOL_STR(usb_composite_setup_continue) },
	{ 0xd79b5a02, __VMLINUX_SYMBOL_STR(allow_signal) },
	{ 0xb019282b, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xfe4e8bab, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x20fe8a19, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0x249f668a, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0x64872514, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x757a383e, __VMLINUX_SYMBOL_STR(send_sig_info) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0xe4cad071, __VMLINUX_SYMBOL_STR(invalidate_mapping_pages) },
	{ 0x9e15ac11, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xc378f28b, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0xc48aa353, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x892cf184, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x7554e7a8, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xaaf1a70a, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x7d4e2276, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x632a5dcb, __VMLINUX_SYMBOL_STR(vfs_write) },
	{ 0x28447305, __VMLINUX_SYMBOL_STR(filp_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,configfs";


MODULE_INFO(srcversion, "4720FD23E45982024AA436B");
