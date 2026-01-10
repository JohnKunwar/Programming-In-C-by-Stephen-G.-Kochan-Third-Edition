
// macro to check whether the character is a digit or not

#include <stdio.h>


#define IS_UPPER_CASE(a) ((a >= 'A' && a <= 'Z') ? 1 : 0)
#define IS_LOWER_CASE(a) ((a >= 'a' && a <= 'z') ? 1 : 0)
#define IS_ALPHABETIC(a) ((IS_LOWER_CASE(a) || IS_UPPER_CASE(a)) ? 1 : 0 )
#define IS_DIGIT(a)      ((a >= '0' && a <= '9' ) ? 1 : 0)
#define IS_SPECIAL(a)    ((IS_ALPHABETIC(a) || IS_DIGIT(a)) ? 0 : 1 )

int main(void)
{
    printf("%i\n", IS_SPECIAL('1'));
    printf("%i\n", IS_SPECIAL('A'));
    printf("%i\n", IS_SPECIAL('z'));
    printf("%i\n", IS_SPECIAL('/'));
    printf("%i\n", IS_SPECIAL(';'));
    printf("%i\n", IS_SPECIAL('@'));    
    return 0;
}

