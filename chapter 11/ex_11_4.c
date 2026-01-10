// program to remove entry from the list

#include <stdio.h>

struct entry {
    int value;
    struct entry *next;
};

void remove_entry(struct entry *after)
{
    // *after.next contain the pointer to the next
    after->next = (after->next)->next;
}


int main(void)
{
    struct entry n1, n2, n3;
    struct entry *list_pointer;
    struct entry special;

    special.next = &n1;
    list_pointer = special.next;
    
    n1.value = 100;
    n2.value = 200;
    n3.value = 300;

    n1.next = &n2;
    n2.next = &n3;
    n3.next = (struct entry *)  0;

    printf("Before removal\n");
    while (list_pointer)
	{
	    printf("%i ", list_pointer->value);
	    list_pointer = list_pointer->next;
	}

    remove_entry(&special);
    list_pointer = special.next;
    printf("\nAfter removal\n");    
    while (list_pointer)
	{
	    printf("%i ", list_pointer->value);
	    list_pointer = list_pointer->next;
	}
    return 0;
}
