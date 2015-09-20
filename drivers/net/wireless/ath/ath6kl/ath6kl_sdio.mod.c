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
	{ 0xdb41552f, __VMLINUX_SYMBOL_STR(ath6kl_core_destroy) },
	{ 0xfdffe514, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x6b24f4a6, __VMLINUX_SYMBOL_STR(ath6kl_hif_intr_bh_handler) },
	{ 0x9417b648, __VMLINUX_SYMBOL_STR(ath6kl_core_cleanup) },
	{ 0xee7bcf69, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8f98abaf, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x91cfb84a, __VMLINUX_SYMBOL_STR(ath6kl_hif_rw_comp_handler) },
	{ 0x28431388, __VMLINUX_SYMBOL_STR(ath6kl_core_create) },
	{ 0x47a39cc9, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x17e87ccb, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x100357f5, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x6e77c5b5, __VMLINUX_SYMBOL_STR(mmc_wait_for_cmd) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xa0b061f1, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x51e77c97, __VMLINUX_SYMBOL_STR(pfn_valid) },
	{ 0x20b6e8d2, __VMLINUX_SYMBOL_STR(__pv_phys_offset) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb8f4ce00, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe837f9a3, __VMLINUX_SYMBOL_STR(mmc_wait_for_req) },
	{ 0x4c6ddcb4, __VMLINUX_SYMBOL_STR(ath6kl_err) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x27cf1694, __VMLINUX_SYMBOL_STR(ath6kl_warn) },
	{ 0x10b45503, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x65135941, __VMLINUX_SYMBOL_STR(mmc_set_data_timeout) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf6c545b5, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe0fc7781, __VMLINUX_SYMBOL_STR(ath6kl_cfg80211_suspend) },
	{ 0xca2ac2d4, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0x3a5986da, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0xc856260, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0xbff63296, __VMLINUX_SYMBOL_STR(ath6kl_cfg80211_resume) },
	{ 0x2b8b758d, __VMLINUX_SYMBOL_STR(ath6kl_stop_txrx) },
	{ 0xfe4e8bab, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xfe175448, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xc26dad51, __VMLINUX_SYMBOL_STR(ath6kl_core_init) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x8a7d1c31, __VMLINUX_SYMBOL_STR(high_memory) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x6df709aa, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xefd6cf06, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr0) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd43be3fa, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xd1609ba1, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0xf7a0c8e3, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xaaf1a70a, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x842efbfb, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0xb348d0d8, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xfba0f1ab, __VMLINUX_SYMBOL_STR(sdio_release_host) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath6kl_core";

MODULE_ALIAS("sdio:c*v0271d0300*");
MODULE_ALIAS("sdio:c*v0271d0301*");
MODULE_ALIAS("sdio:c*v0271d0400*");
MODULE_ALIAS("sdio:c*v0271d0401*");

MODULE_INFO(srcversion, "FE26BC89D9F0544880B0BF7");
