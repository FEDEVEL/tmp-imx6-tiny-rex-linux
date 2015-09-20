#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xe8e9fb26, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x6db6fe81, __VMLINUX_SYMBOL_STR(vb2_put_vma) },
	{ 0xfdffe514, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3fd2571, __VMLINUX_SYMBOL_STR(vm_unmap_ram) },
	{ 0xa007730, __VMLINUX_SYMBOL_STR(remap_vmalloc_range) },
	{ 0x8d483709, __VMLINUX_SYMBOL_STR(set_page_dirty_lock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xcf234453, __VMLINUX_SYMBOL_STR(dma_buf_vunmap) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf05f5604, __VMLINUX_SYMBOL_STR(vm_map_ram) },
	{ 0xc6ee6f91, __VMLINUX_SYMBOL_STR(find_vma) },
	{ 0xfe4e8bab, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x5635a60a, __VMLINUX_SYMBOL_STR(vmalloc_user) },
	{ 0x98d71dd, __VMLINUX_SYMBOL_STR(get_user_pages) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf1fde9ba, __VMLINUX_SYMBOL_STR(vb2_common_vm_ops) },
	{ 0xe93a67c8, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x1db7dc40, __VMLINUX_SYMBOL_STR(pgprot_kernel) },
	{ 0xfb961d14, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0x44834da2, __VMLINUX_SYMBOL_STR(dma_buf_vmap) },
	{ 0x47f84280, __VMLINUX_SYMBOL_STR(vb2_get_contig_userptr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "39DEE9DD6D29A13FD2EE862");
