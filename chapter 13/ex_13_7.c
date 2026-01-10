// Macro to know whether the character is alphabetic or not
#include <stdio.h>

#define IS_UPPER_CASE(a) ((a >= 'A' && a <= 'Z') ? 1 : 0)
#define IS_LOWER_CASE(a) ((a >= 'a' && a <= 'z') ? 1 : 0)
#define IS_ALPHABETIC(a) ((IS_LOWER_CASE(a) || IS_UPPER_CASE(a)) ? 1 : 0 )

int main(void)
{
    printf("%i\n", IS_ALPHABETIC('1'));
    printf("%i\n", IS_ALPHABETIC('9'));
    printf("%i\n", IS_ALPHABETIC('$'));
    printf("%i\n", IS_ALPHABETIC(';'));
    printf("%i\n", IS_ALPHABETIC('a'));
    printf("%i\n", IS_ALPHABETIC('o'));
    printf("%i\n", IS_ALPHABETIC('Z'));
    printf("%i\n", IS_ALPHABETIC('A'));    
    
    return 0;
}
