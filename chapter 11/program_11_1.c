// Program to illustarate pointer

#include <stdio.h>

int main(void)
{
    int count = 10, x;
    int *int_pointer;

    int_pointer = &count;
    x = *int_pointer;

    printf("%i", x);
    
    return 0;
}
