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
	{ 0xee3233fc, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0xc0075974, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x63ce63ab, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0xd30fb7e3, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0x5910d34b, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x8d368a16, __VMLINUX_SYMBOL_STR(unregister_binfmt) },
	{ 0xa9a7d43e, __VMLINUX_SYMBOL_STR(__register_binfmt) },
	{ 0x82a51796, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x6dfcd3bc, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0x41630d70, __VMLINUX_SYMBOL_STR(would_dump) },
	{ 0x8bdd7953, __VMLINUX_SYMBOL_STR(fd_install) },
	{ 0xa843805a, __VMLINUX_SYMBOL_STR(get_unused_fd_flags) },
	{        0, __VMLINUX_SYMBOL_STR(sys_close) },
	{ 0x3fef8b1f, __VMLINUX_SYMBOL_STR(search_binary_handler) },
	{ 0x57e7d2b6, __VMLINUX_SYMBOL_STR(prepare_binprm) },
	{ 0x8d872b46, __VMLINUX_SYMBOL_STR(open_exec) },
	{ 0xd0f458fb, __VMLINUX_SYMBOL_STR(bprm_change_interp) },
	{ 0x99f54599, __VMLINUX_SYMBOL_STR(copy_strings_kernel) },
	{ 0x383075cd, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x6b5522f2, __VMLINUX_SYMBOL_STR(remove_arg_zero) },
	{ 0x4bc9fa80, __VMLINUX_SYMBOL_STR(_raw_read_unlock) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x7bf31b72, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xc8339e24, __VMLINUX_SYMBOL_STR(string_unescape) },
	{ 0x6f0d7ca7, __VMLINUX_SYMBOL_STR(iput) },
	{ 0xc2caeb7f, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xbcad93b, __VMLINUX_SYMBOL_STR(simple_pin_fs) },
	{        0, __VMLINUX_SYMBOL_STR(current_fs_time) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x703f41fb, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xa0b061f1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x55915fe5, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0xf6c545b5, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbdac1eb7, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x15e1b95a, __VMLINUX_SYMBOL_STR(simple_release_fs) },
	{ 0xad3f08d6, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x36845624, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0xa6a69673, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0xdfd61436, __VMLINUX_SYMBOL_STR(_raw_write_unlock) },
	{ 0xd100acbd, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x28d1073d, __VMLINUX_SYMBOL_STR(simple_fill_super) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x6941e133, __VMLINUX_SYMBOL_STR(mount_single) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "94E4CE2E390B0EECC8654D6");
