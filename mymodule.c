#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");

int init_module(void) {
    printk(KERN_INFO "Hello from my kernel module!\n");
    return 0;
}

void cleanup_module() {
    printk(KERN_INFO "Goodbye from my kernel module!\n");
}
