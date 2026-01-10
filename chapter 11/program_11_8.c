// program to illustarate value can be change by pointer within from function

#include <stdio.h>

void test (int *t)
{
    *t = 100;
}
int main()
{
    int i = 50, *p = &i;

    printf("Before test %i\n", i);
    test(p);
    printf("After test %i\n", i);
    
    return 0;
}
