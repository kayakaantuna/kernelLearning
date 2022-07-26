#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_LICENSE("KAYA");
MODULE_DESCRIPTION("HELLO WORLD");

static int __init ModuleInit(void)
{
    printk("Hello Kernel\n");
    return 0;
}

static void __exit ModuleExit(void)
{
    printk("Goodbye, Kernel\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);
