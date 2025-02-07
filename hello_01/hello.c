#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("cezar1989");
MODULE_DESCRIPTION("A simple hello world module!");
MODULE_VERSION("0.1");

static int __init hello_start(void){
	printk(KERN_INFO "Loading hello.ko kernel module...\n");
	printk(KERN_INFO "Hello world!!!\n");
	return 0;
}

static void __exit hello_exit(void){
	printk(KERN_INFO "Goodbye cezar1989!\n");
}

module_init(hello_start);
module_exit(hello_exit);
