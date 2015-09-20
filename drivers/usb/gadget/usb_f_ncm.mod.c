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
	{ 0xe8148714, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0x6919eec5, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb0c3c0d1, __VMLINUX_SYMBOL_STR(gether_get_qmult) },
	{ 0xea3b7bd1, __VMLINUX_SYMBOL_STR(gether_setup_name_default) },
	{ 0x7eb79d7b, __VMLINUX_SYMBOL_STR(gether_get_host_addr_cdc) },
	{ 0xfcc9c0ec, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x33c4149c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xa0b061f1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa6ff6157, __VMLINUX_SYMBOL_STR(gether_get_ifname) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x8878cfa6, __VMLINUX_SYMBOL_STR(gether_cleanup) },
	{ 0x49488805, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0x5c88b9ff, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x201e4730, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0x14974fee, __VMLINUX_SYMBOL_STR(gether_get_dev_addr) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x30d5523f, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xd57f64f, __VMLINUX_SYMBOL_STR(gether_connect) },
	{ 0xb1a6450c, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0x4df9f923, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x10b45503, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x54d923f1, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0xdcc165c0, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xca5948e5, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0x1d0c0010, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xf6c545b5, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa34f1ef5, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x10352683, __VMLINUX_SYMBOL_STR(gether_get_host_addr) },
	{ 0xadc592d4, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x95c3b165, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0xe50829af, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xf8ecf8b6, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xfaeeae22, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xe0c28304, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x9cde8e68, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x92e4ac96, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0xfe4e8bab, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xb3d3d4c2, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0x249f668a, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x3a43bd91, __VMLINUX_SYMBOL_STR(gether_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9e15ac11, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0xc378f28b, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x27b28719, __VMLINUX_SYMBOL_STR(skb_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_ether,configfs";


MODULE_INFO(srcversion, "3DC57A818BECAF0DFDD91B9");
