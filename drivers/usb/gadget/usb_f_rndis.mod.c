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
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe8148714, __VMLINUX_SYMBOL_STR(usb_gstrings_attach) },
	{ 0x6919eec5, __VMLINUX_SYMBOL_STR(usb_free_all_descriptors) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb0c3c0d1, __VMLINUX_SYMBOL_STR(gether_get_qmult) },
	{ 0xea3b7bd1, __VMLINUX_SYMBOL_STR(gether_setup_name_default) },
	{ 0x6a0c39f4, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xecb1c1df, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x33c4149c, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xa0b061f1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa6ff6157, __VMLINUX_SYMBOL_STR(gether_get_ifname) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2e512566, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x8878cfa6, __VMLINUX_SYMBOL_STR(gether_cleanup) },
	{ 0x49488805, __VMLINUX_SYMBOL_STR(usb_function_unregister) },
	{ 0x5c88b9ff, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x201e4730, __VMLINUX_SYMBOL_STR(gether_set_host_addr) },
	{ 0x14974fee, __VMLINUX_SYMBOL_STR(gether_get_dev_addr) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd57f64f, __VMLINUX_SYMBOL_STR(gether_connect) },
	{ 0xb1a6450c, __VMLINUX_SYMBOL_STR(usb_put_function_instance) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0x4df9f923, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0x10b45503, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x54d923f1, __VMLINUX_SYMBOL_STR(usb_ep_autoconfig) },
	{ 0xdcc165c0, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xca5948e5, __VMLINUX_SYMBOL_STR(gether_set_gadget) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1d0c0010, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xf6c545b5, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x10352683, __VMLINUX_SYMBOL_STR(gether_get_host_addr) },
	{ 0xadc592d4, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x95c3b165, __VMLINUX_SYMBOL_STR(gether_set_qmult) },
	{ 0x2da54590, __VMLINUX_SYMBOL_STR(gether_get_host_addr_u8) },
	{ 0xe50829af, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xf8ecf8b6, __VMLINUX_SYMBOL_STR(usb_function_register) },
	{ 0xfaeeae22, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x92e4ac96, __VMLINUX_SYMBOL_STR(gether_register_netdev) },
	{ 0xfe4e8bab, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xb3d3d4c2, __VMLINUX_SYMBOL_STR(gether_set_dev_addr) },
	{ 0x249f668a, __VMLINUX_SYMBOL_STR(config_ep_by_speed) },
	{ 0x3a43bd91, __VMLINUX_SYMBOL_STR(gether_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9e15ac11, __VMLINUX_SYMBOL_STR(usb_assign_descriptors) },
	{ 0xc378f28b, __VMLINUX_SYMBOL_STR(usb_interface_id) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x6ea1ce80, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x2e39973c, __VMLINUX_SYMBOL_STR(dev_get_stats) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcomposite,u_ether,configfs";


MODULE_INFO(srcversion, "E8397E2F4BDA4DE28D2F1D2");
