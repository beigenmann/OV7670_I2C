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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xb89a34a1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x33ba5cd4, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xb464a897, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xb072db49, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xf2af16b4, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0xa6abd16, __VMLINUX_SYMBOL_STR(v4l2_ctrl_cluster) },
	{ 0xfa5f891b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_auto_cluster) },
	{ 0x86f55a89, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu) },
	{ 0xa632947b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xd25135fc, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xcd74ced3, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0x2217d929, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x3018149f, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8acea19d, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x1b436486, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x9dd32b9c, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x515481e0, __VMLINUX_SYMBOL_STR(v4l2_device_unregister_subdev) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,v4l2-common";

MODULE_ALIAS("i2c:ov7670");
MODULE_ALIAS("i2c:ov7675");

MODULE_INFO(srcversion, "26DF081ADC477D22C83B7F1");
