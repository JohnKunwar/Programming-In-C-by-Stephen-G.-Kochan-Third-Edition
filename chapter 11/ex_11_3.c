// program to  instert a entry in a linked list

#include <stdio.h>

struct entry {
    int value;
    struct entry *next;
};

void insert_entry (struct entry * position, struct entry * entry)
{
    struct entry *tmp;
    tmp = position->next;
    position->next = entry; // it overwrite next to entry
    entry->next = tmp;
}

int main(void)
{
    struct entry n1, n2, n3, n4,head;
    head.next = &n1;
    
    struct entry *list_start = &n1;

    n1.value = 100;
    n1.next = &n2;

    n2.value = 200;
    n2.next = &n4;

    n3.value = 300;

    n4.value = 400;
    n4.next = (struct entry *) 0;
    
    printf("Before insertion\n");
    while(list_start)
	{
	    printf("%i\t", list_start->value);
	    list_start = list_start->next;
	}
	 
    insert_entry(&head, &n3);
    list_start = head.next;
    
    printf("\nAfter insertion\n");
    while(list_start)
	{
	    printf("%i\t", list_start->value);
	    list_start = list_start->next;
	}
	     
    return 0;
}
