#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0xcb440b5e, "module_layout" },
	{ 0xe1d71654, "cdev_del" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x8eab5523, "class_destroy" },
	{ 0x37fd21cc, "device_destroy" },
	{ 0xfe990052, "gpio_free" },
	{ 0x45b31dc1, "gpiod_direction_input" },
	{ 0x2d9bfe9, "gpiod_direction_output_raw" },
	{ 0x47229b5c, "gpio_request" },
	{ 0x4c75eeab, "cdev_add" },
	{ 0xc3a1cc09, "cdev_init" },
	{ 0x85401a17, "device_create" },
	{ 0x109c449a, "__class_create" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xf520bd43, "gpiod_get_raw_value" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0x14541836, "gpiod_set_raw_value" },
	{ 0xc63eaf49, "gpio_to_desc" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x92997ed8, "_printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "E3D2A6804489CAF86BAB6AB");
