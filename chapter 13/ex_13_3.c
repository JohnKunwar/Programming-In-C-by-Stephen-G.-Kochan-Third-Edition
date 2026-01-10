// Macro to check which one is minimum

#include <stdio.h>

#define MIN(a,b)  ((a) < (b) ? (a) : (b))

int main(void)
{
    int i1 = 10, i2 = 11;
    float f1 = 10.01, f2 = 11.1;

    printf("%i\n", MIN(i1, i2));
    printf("%g", MIN(f1, f2));

    return 0;
}
