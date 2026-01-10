// program to find maximum out of three values using macro

#include <stdio.h>

#define MAX3(a, b, c) ((a) > (b) ? ((a) > (c) ? a : c) : ((b) > (c) ? b : c))

int main(void)
{
    printf("%d\n", MAX3(1, 2, 3));
    printf("%d\n", MAX3(3, 2, 1));
    printf("%d\n", MAX3(2, 3, 1));    
    return 0;
}
