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
	{ 0x5015d409, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x7b122b0d, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0x106d2a09, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0xfdffe514, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xcf510afd, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0xa75c632b, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc068440e, __VMLINUX_SYMBOL_STR(__kfifo_alloc) },
	{ 0x7647726c, __VMLINUX_SYMBOL_STR(handle_sysrq) },
	{ 0x8f98abaf, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xe798a258, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x9f523f3c, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x9b7bbc09, __VMLINUX_SYMBOL_STR(tty_port_open) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x9c956a0f, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xdb331114, __VMLINUX_SYMBOL_STR(tty_port_hangup) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xbe3aa182, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x57b38361, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0xd69e83c0, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0xa0b061f1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x33a8528a, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x1e22faa4, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe977966, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa6369c3, __VMLINUX_SYMBOL_STR(tty_port_close) },
	{ 0x70cf1189, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0x4df9f923, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xb3a38fb1, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x10b45503, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfc5217b8, __VMLINUX_SYMBOL_STR(tty_ldisc_deref) },
	{ 0x79672bdf, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xba883bc8, __VMLINUX_SYMBOL_STR(usb_unpoison_urb) },
	{ 0xd16521af, __VMLINUX_SYMBOL_STR(usb_poison_urb) },
	{ 0x50e07ded, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x1a1431fd, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irq) },
	{ 0x35460831, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0xa670eb32, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4be19377, __VMLINUX_SYMBOL_STR(tty_port_destroy) },
	{ 0xf6c545b5, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x388b2a92, __VMLINUX_SYMBOL_STR(tty_vhangup) },
	{ 0xd8580838, __VMLINUX_SYMBOL_STR(tty_ldisc_ref) },
	{ 0xf74dae0f, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0xdf74a8c8, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x7ba559be, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0x24ff0349, __VMLINUX_SYMBOL_STR(usb_store_new_id) },
	{ 0xe68fc8d6, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_flags) },
	{ 0x635ec2dc, __VMLINUX_SYMBOL_STR(usb_match_id) },
	{ 0x39a9102f, __VMLINUX_SYMBOL_STR(tty_register_device) },
	{ 0xdf401846, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xb019282b, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xa827e7fe, __VMLINUX_SYMBOL_STR(tty_port_tty_wakeup) },
	{ 0xdca0cd75, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xb9a0eeb9, __VMLINUX_SYMBOL_STR(tty_unregister_device) },
	{ 0x9cde8e68, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd48e2aaa, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xfe4e8bab, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0xf1806da9, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x7cb8ab99, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x20fe8a19, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x41f684d4, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x4d6f98f2, __VMLINUX_SYMBOL_STR(tty_port_install) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x68e669e1, __VMLINUX_SYMBOL_STR(usb_get_intf) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x30e74134, __VMLINUX_SYMBOL_STR(tty_termios_copy_hw) },
	{ 0xdb760f52, __VMLINUX_SYMBOL_STR(__kfifo_free) },
	{ 0xde5ce69, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0x1c7971f2, __VMLINUX_SYMBOL_STR(tty_hangup) },
	{ 0x694be42a, __VMLINUX_SYMBOL_STR(usb_show_dynids) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x4ece4e78, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0x19a304ba, __VMLINUX_SYMBOL_STR(usb_disabled) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0x63d62ea9, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd9a7ce24, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x5bfbcf69, __VMLINUX_SYMBOL_STR(usb_match_one_id) },
	{ 0x4fdcbd6a, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xc4b11c9b, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xc48aa353, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x38b7707, __VMLINUX_SYMBOL_STR(driver_attach) },
	{ 0xd451addd, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0xafad493b, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x7554e7a8, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xaaf1a70a, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x9919fd52, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1769dfe5, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xb01ca0da, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x2e9b3091, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x7d4f9cb9, __VMLINUX_SYMBOL_STR(usb_put_intf) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "EE2A84E0ACD22A13A4F5859");