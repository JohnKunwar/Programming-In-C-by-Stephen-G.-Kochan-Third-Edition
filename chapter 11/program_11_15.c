// Program to calculate the strength length using the pointer

#include <stdio.h>


int string_length( const char *str)
{
    const char *check = str;
    while (*check)
	check++;
    return check - str;
}
int main()
{
    printf("%i %i %i", string_length("stringlength test"), string_length(""), string_length("complete"));
    return 0;
}
