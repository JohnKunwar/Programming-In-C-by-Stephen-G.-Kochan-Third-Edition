// program to show structure pointer

#include <stdio.h>

int main()
{

    struct pointers {
	int *p1;
	int *p2;
    };

    struct pointers point;
    int  i1, i2;
    i1 = 100;

    point.p1 = &i1;
    point.p2 = &i2;

    *point.p2 = 97;

    printf("i1 = %i p1 = %i\n", i1, *point.p1);
    printf("i2 = %i p2 = %i\n", i2, *point.p2);
    
    return 0;
}
