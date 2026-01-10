// Rewrite of the function using compare strings

#include <stdio.h>


int compare_string(char *str1, char *str2)
{
    while (*str1 == *str2 && *str1 != '\0' && *str2 != '\0')
	{
	    str1++;
	    str2++;
	}

    if (*str1 == '\0' && *str2 == '\0')
	return 1;

    return 0;
}
int main(void)
{
    printf("%i\n", compare_string("Hello", "hello"));
    printf("%i\n", compare_string("hello", "hello"));
    return 0;
}
