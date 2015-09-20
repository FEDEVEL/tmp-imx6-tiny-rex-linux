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
	{ 0xce8ddf91, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x6328a7fa, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0xfdffe514, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2ca72ce3, __VMLINUX_SYMBOL_STR(sb_min_blocksize) },
	{ 0x77ecac9f, __VMLINUX_SYMBOL_STR(zlib_inflateEnd) },
	{ 0xfdc3345c, __VMLINUX_SYMBOL_STR(__bread) },
	{ 0x9577a5e0, __VMLINUX_SYMBOL_STR(unload_nls) },
	{ 0xe6593d45, __VMLINUX_SYMBOL_STR(save_mount_options) },
	{ 0x5fc56a46, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x4c51cb3b, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x33961e7b, __VMLINUX_SYMBOL_STR(page_address) },
	{ 0xc52d415a, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0x27d7bdbb, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x2b1c6df1, __VMLINUX_SYMBOL_STR(ll_rw_block) },
	{ 0xcae232b, __VMLINUX_SYMBOL_STR(utf16s_to_utf8s) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x4e830a3e, __VMLINUX_SYMBOL_STR(strnicmp) },
	{ 0xa0b061f1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x98df4c44, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x3509511b, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0x355f2c86, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x32ddd5b6, __VMLINUX_SYMBOL_STR(call_rcu) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa26134d6, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x94f67bdb, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x29aaeb95, __VMLINUX_SYMBOL_STR(mpage_readpage) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xd627480b, __VMLINUX_SYMBOL_STR(strncat) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2a48efeb, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x2965fa40, __VMLINUX_SYMBOL_STR(kunmap) },
	{ 0xce5ac24f, __VMLINUX_SYMBOL_STR(zlib_inflate_workspacesize) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x1de930f2, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x90b4afbb, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0xf6c545b5, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc986f47d, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0x72efc67b, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x9fb46a6c, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xafe8e991, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xa88894d6, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x881039d0, __VMLINUX_SYMBOL_STR(zlib_inflate) },
	{ 0xe4b163b7, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0xfe4e8bab, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x4a2837a1, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x279961d, __VMLINUX_SYMBOL_STR(kmap) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x58e0e1a, __VMLINUX_SYMBOL_STR(load_nls) },
	{ 0xd3fd4dd2, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0xb6a9ed8e, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xc8695370, __VMLINUX_SYMBOL_STR(generic_show_options) },
	{ 0xfc807937, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x82a51796, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4211c3c1, __VMLINUX_SYMBOL_STR(zlib_inflateInit2) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x6f0d7ca7, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xadacf225, __VMLINUX_SYMBOL_STR(load_nls_default) },
	{ 0x3d3fa67d, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xb08671f3, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0xe93a67c8, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xbbcde1b9, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xed4ddbf3, __VMLINUX_SYMBOL_STR(ioctl_by_bdev) },
	{ 0x5910d34b, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xe52ad340, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x85954e8f, __VMLINUX_SYMBOL_STR(__getblk) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x8d2d65be, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0xada39853, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0E33CFE1F376B5FD9C65041");
