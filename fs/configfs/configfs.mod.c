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
	{ 0x61ed383c, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0xce8ddf91, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xbcad93b, __VMLINUX_SYMBOL_STR(simple_pin_fs) },
	{ 0xfdffe514, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x22e1ae6f, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x4c51cb3b, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x188a3dfb, __VMLINUX_SYMBOL_STR(timespec_trunc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb1eaed89, __VMLINUX_SYMBOL_STR(simple_write_end) },
	{ 0x15e1b95a, __VMLINUX_SYMBOL_STR(simple_release_fs) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0x7b49ee5b, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0xbdac1eb7, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xad3f08d6, __VMLINUX_SYMBOL_STR(dput) },
	{ 0xde87307c, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xa0b061f1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x6941e133, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0x355f2c86, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x455293f6, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x34f04bb6, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0x18ad731d, __VMLINUX_SYMBOL_STR(d_delete) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xee67a006, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0xee3233fc, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0xc7c9a338, __VMLINUX_SYMBOL_STR(simple_write_begin) },
	{ 0x10b45503, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe0b52cbd, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x675d13ea, __VMLINUX_SYMBOL_STR(bdi_init) },
	{ 0x1de930f2, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf6c545b5, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe203fa7a, __VMLINUX_SYMBOL_STR(simple_readpage) },
	{ 0xdca0cd75, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xfe4e8bab, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x95d6b71e, __VMLINUX_SYMBOL_STR(simple_unlink) },
	{ 0x9ef04c09, __VMLINUX_SYMBOL_STR(simple_setattr) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{        0, __VMLINUX_SYMBOL_STR(in_group_p) },
	{ 0x36845624, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0xa5061dfe, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xfc807937, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x82a51796, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x7afa89fc, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0xc01d3622, __VMLINUX_SYMBOL_STR(kernel_kobj) },
	{ 0x6f0d7ca7, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8c577421, __VMLINUX_SYMBOL_STR(iunique) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8d994b8b, __VMLINUX_SYMBOL_STR(always_delete_dentry) },
	{ 0x5e0e4cab, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0xbbcde1b9, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xd30fb7e3, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0x7f6ec60d, __VMLINUX_SYMBOL_STR(d_alloc_name) },
	{ 0x4de4e8b3, __VMLINUX_SYMBOL_STR(bdi_destroy) },
	{ 0x5910d34b, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x703f41fb, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xc2caeb7f, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x1769dfe5, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x6c8e6f89, __VMLINUX_SYMBOL_STR(simple_rmdir) },
	{ 0x45c15196, __VMLINUX_SYMBOL_STR(__d_drop) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "DC343C23C059E620E9187E1");
