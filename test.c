#include <linux/module.h> //所有模块都需要的头文件
#include <linux/init.h> //init&exit相关宏
#include <linux/kernel.h> //KERN_ALERT

MODULE_LICENSE("GPL");

static int __init hello_init(void)
{
    printk("<1>""Hello module init\n");

    return(2);
}

static void __exit hello_exit(void)
{
    printk("<1>""Hello module exit\n");
}

module_init(hello_init);
module_exit(hello_exit);

