// program to contain doubly link list
// and use of insert and remove function
#include <stdio.h>

struct double_list {
    int value;
    
    struct double_list *previous;    
    struct double_list *next;
};

void insert_entry (struct double_list *after, struct double_list *this)
{
    struct double_list *tmp = after->next;
    
    after->next = this;
    this->previous = after;
    this->next =  tmp;
}

void remove_entry (struct double_list *this)
{
    this->previous->next = this->next;
}

int main(void)
{
    struct double_list n1, n2, n3, insert_this, head;
    struct double_list *list_pointer;
    
    head.next = &n1;
    n1.previous = &head;
    list_pointer = head.next;
    
    n1.value = 100;
    n1.next = &n2;

    n2.value = 200;
    n2.next = &n3;
    n2.previous = &n1;

    n3.value = 300;
    n3.next = (struct double_list *) 0;
    n3.previous = &n2;

    printf("Before insertion\n");
    while (list_pointer)
	{
	    printf("%i ", list_pointer->value);
	    list_pointer = list_pointer->next;
	}

    insert_this.value = 1000;
    insert_entry(&n3, &insert_this);

    list_pointer = head.next;
    
    printf("\nAfter insertion\n");
    while (list_pointer)
	{
	    printf("%i ", list_pointer->value);
	    list_pointer = list_pointer->next;
	}
    
    list_pointer = head.next;
    printf("\nBefore Removal\n");
    while (list_pointer)
	{
	    printf("%i ", list_pointer->value);
	    list_pointer = list_pointer->next;
	}

    remove_entry(&n1);
    list_pointer = head.next;
    printf("\nAfter Removal\n");
    while (list_pointer)
	{
	    printf("%i ", list_pointer->value);
	    list_pointer = list_pointer->next;
	}
    
    return 0;
}
