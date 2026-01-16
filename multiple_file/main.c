#include <stdio.h>

int plus5 (int);

int main(void)
{
    extern int a;
    a = 7;
    printf("%i", plus5(a));
    return 0;
}
