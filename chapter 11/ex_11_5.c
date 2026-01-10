// program to contain doubly link list

#include <stdio.h>


struct double_list {
    int value;
    
    struct double_list *previous;    
    struct double_list *next;
};
int main(void)
{
    struct double_list n1, n2, n3;
    struct double_list *list_pointer;

    list_pointer = &n1;

    n1.value = 100;
    n1.next = &n2;

    n2.value = 200;
    n2.next = &n3;
    n2.previous = &n1;

    n3.value = 300;
    n3.next = (struct double_list *) 0;
    n3.previous = &n2;
    
    while (list_pointer)
	{
	    printf("%i ", list_pointer->value);
	    list_pointer = list_pointer->next;
	}
    
    
    return 0;
}
