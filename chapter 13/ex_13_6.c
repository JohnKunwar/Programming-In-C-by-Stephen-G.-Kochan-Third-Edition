// Macro to test whether the character is in upper case or not

#include <stdio.h>

#define IS_UPPER_CASE(a) ((a >= 'A' && a <= 'Z') ? 1 : 0)

int main(void)
{
    char B = 'B', b = 'b';

    printf("%i\n", IS_UPPER_CASE(B));
    printf("%i", IS_UPPER_CASE(b));    

    return 0;
}
