#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/list.h>
#include <linux/slab.h>

struct  birth{
	int day;
	int month;
	int year;
	struct list_head list;
};


/* This function is called when the module is loaded. */
int simple_init(void)
{	
      
       struct birth *person;
       struct birth *ptr;
       LIST_HEAD(birth_list);
       struct list_head *iterator;
       person = kmalloc(sizeof(*person), GFP_KERNEL);
       person->day = 12; 
       person->month = 02;
       person->year = 2014;
       list_add(&person->list,&birth_list);

       printk(KERN_INFO "Loading Module\n");
       
        list_for_each(iterator, &birth_list) {
         printk("%d\n", list_entry(iterator, struct birth, list)->day);
     }
       
       printk("%d\n", list_for_each_entry(ptr, &birth_list, list)->day);

       return 0;
}

/* This function is called when the module is removed. */
void simple_exit(void) {
	printk(KERN_INFO "Removing Module\n");
}

/* Macros for registering module entry and exit points. */
module_init( simple_init );
module_exit( simple_exit );

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple Module");
MODULE_AUTHOR("SGG");

