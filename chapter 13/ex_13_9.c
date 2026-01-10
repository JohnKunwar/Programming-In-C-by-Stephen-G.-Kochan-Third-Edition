// Macro to find the absolute value

#include <stdio.h>

#define ABSOLUTE_VALUE(a) ((a) >= 0 ? (a) : -(a))


int main(void)
{

//    int t = 3 - 4;
    printf("%i\n", ABSOLUTE_VALUE(1));
    printf("%i\n", ABSOLUTE_VALUE(2 + 1));
    printf("%i\n", ABSOLUTE_VALUE(-1));
    printf("%i\n", ABSOLUTE_VALUE(3 - 4));    

    return 0; 
}
