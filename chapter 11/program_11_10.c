// Program to search in linked list

#include <stdio.h>

struct entry {
    int value;
    struct entry *next;
};


struct entry * search_list(struct entry *list_start, int n)
{
    while (list_start != (struct entry *) 0)
	{
	    if (list_start->value == n)
		return list_start;
	    else
		list_start = list_start->next;
	}
    return (struct entry *) 0;
}
int main(void)
{
    struct entry n1, n2, n3, *list_start, *list_check;
    int n;
    list_start = &n1;

    n1.value = 100;
    n1.next = &n2;

    n2.value = 200;
    n2.next = &n3;

    n3.value = 300;
    n3.next = (struct entry *) 0;

    printf("Enter the number to search: ");
    scanf("%i", &n);
    
    list_check = search_list(list_start, n);

    if (list_check != (struct entry *) 0)
	printf("Found %i\n", list_check->value);
    else
	printf("Not found\n");
	
    return 0;
}
