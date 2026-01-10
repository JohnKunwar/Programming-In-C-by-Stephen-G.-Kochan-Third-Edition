// program to copy string from one variable to another

#include <stdio.h>

void copy(char *str1, char *str2)
{
    while (*str1)
	{
	    *str2++ = *str1++;
	}
    *str2 = '\0';
}

int main(void)
{
    char str1[] = "check for copy";
    char str2[100];

    copy(str1, str2);

    printf("%s", str2);
    
    return 0;
}
