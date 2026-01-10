// To exchange the value of two numbers

#include <stdio.h>

void exchange( int * const a, int * const b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
int main(void)
{
    int a, b;
    a = 5; b = 2;

    
    printf("a = %i  b = %i\n", a, b);    
    exchange(&a, &b);
    printf("a = %i  b = %i\n", a, b);
    
    return 0;
}
