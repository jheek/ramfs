#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xc6c01fa, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x92a94ad2, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x792ab5e4, __VMLINUX_SYMBOL_STR(save_mount_options) },
	{ 0x4b8a8f88, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xfe790591, __VMLINUX_SYMBOL_STR(simple_link) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x5258359, __VMLINUX_SYMBOL_STR(simple_write_end) },
	{ 0x815b5dd4, __VMLINUX_SYMBOL_STR(match_octal) },
	{ 0x49261457, __VMLINUX_SYMBOL_STR(simple_lookup) },
	{ 0x6b53b287, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0x555f6938, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x2a2b59f0, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xbb3d0781, __VMLINUX_SYMBOL_STR(page_symlink_inode_operations) },
	{ 0x8dbcd607, __VMLINUX_SYMBOL_STR(mount_nodev) },
	{ 0xe8ef0ff0, __VMLINUX_SYMBOL_STR(current_kernel_time64) },
	{ 0x5a8cacac, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0xbdd5900b, __VMLINUX_SYMBOL_STR(simple_write_begin) },
	{ 0x1a9bf3e4, __VMLINUX_SYMBOL_STR(page_symlink) },
	{ 0xa50c9f9d, __VMLINUX_SYMBOL_STR(simple_readpage) },
	{ 0x951b489a, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0x4ee2e37c, __VMLINUX_SYMBOL_STR(simple_getattr) },
	{ 0x92f30286, __VMLINUX_SYMBOL_STR(simple_unlink) },
	{ 0xff912b92, __VMLINUX_SYMBOL_STR(simple_dir_operations) },
	{ 0xd8d23162, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0x73aeb0eb, __VMLINUX_SYMBOL_STR(simple_setattr) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x81fcd7c8, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xae718e8, __VMLINUX_SYMBOL_STR(generic_show_options) },
	{ 0x62d96dc6, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xbd6a48a5, __VMLINUX_SYMBOL_STR(generic_file_write_iter) },
	{ 0x7b13c648, __VMLINUX_SYMBOL_STR(iter_file_splice_write) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x5a72c214, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xeceba882, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x2680c912, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0x5ae95309, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xabc7ed6, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x2007b5b3, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x8e9b223b, __VMLINUX_SYMBOL_STR(noop_fsync) },
	{ 0xea63a8a2, __VMLINUX_SYMBOL_STR(simple_rename) },
	{ 0xe716c351, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xe4769528, __VMLINUX_SYMBOL_STR(simple_rmdir) },
	{ 0x45706fe4, __VMLINUX_SYMBOL_STR(inode_init_owner) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "732B21E703677EC12D71E10");
