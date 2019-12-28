#include <linux/init.h>
#include <linux/module.h>

static int __init hello_init(void) 
{
  printk(KERN_ALERT "Hello World\n");
  return 0;  
}

static void __exit hello_exit(void) 
{
 printk(KERN_ALERT "Goodbye World\n");
}

module_init(hello_init);
module_exit(hello_exit);
                        
