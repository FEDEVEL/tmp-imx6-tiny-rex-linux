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
	{ 0x7d70ff2d, __VMLINUX_SYMBOL_STR(fat_detach) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xa6a69673, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x1d84b6bf, __VMLINUX_SYMBOL_STR(mark_buffer_dirty_inode) },
	{ 0x99771715, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x9784191a, __VMLINUX_SYMBOL_STR(fat_flush_inodes) },
	{ 0xde87307c, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xa0b061f1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x98df4c44, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0xba83067, __VMLINUX_SYMBOL_STR(fat_sync_inode) },
	{ 0xd8086607, __VMLINUX_SYMBOL_STR(fat_add_entries) },
	{ 0x9f89c247, __VMLINUX_SYMBOL_STR(fat_remove_entries) },
	{ 0xf74d63c2, __VMLINUX_SYMBOL_STR(fat_alloc_new_dir) },
	{ 0xda81384, __VMLINUX_SYMBOL_STR(fat_fill_super) },
	{ 0xb875ccd8, __VMLINUX_SYMBOL_STR(fat_build_inode) },
	{ 0xf2911638, __VMLINUX_SYMBOL_STR(fat_attach) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xf6c545b5, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x90b4afbb, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x21a87705, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0xcd756f61, __VMLINUX_SYMBOL_STR(fat_getattr) },
	{ 0xafe8e991, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xb6a9ed8e, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x554838f8, __VMLINUX_SYMBOL_STR(fat_scan) },
	{ 0x82a51796, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x2f74898f, __VMLINUX_SYMBOL_STR(__fat_fs_error) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3d3fa67d, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xb6d5df71, __VMLINUX_SYMBOL_STR(fat_setattr) },
	{ 0xc624a900, __VMLINUX_SYMBOL_STR(fat_free_clusters) },
	{ 0xe0be4a4f, __VMLINUX_SYMBOL_STR(fat_get_dotdot_entry) },
	{ 0x5910d34b, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x685a5620, __VMLINUX_SYMBOL_STR(fat_time_unix2fat) },
	{ 0x3aaa5207, __VMLINUX_SYMBOL_STR(fat_dir_empty) },
	{ 0xc2caeb7f, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xab46a2f6, __VMLINUX_SYMBOL_STR(clear_nlink) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8F7AADEA0FD8C97BB3543D8");
