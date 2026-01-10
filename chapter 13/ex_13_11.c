// program to text library function for isalpha, isdigit, isupper

#include <stdio.h>
#include <ctype.h>

int main(void)
{
    printf("%i\n", isalpha('a'));
    printf("%i\n", isupper('A'));
    printf("%i\n", isdigit('1'));
    
    return 0;
}

