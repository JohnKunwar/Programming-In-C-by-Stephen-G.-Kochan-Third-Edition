// Program to count string length
// In C \0 is the null character

#include <stdio.h>

int chrlength(const char str1[])
{
    int count = 0;

    while (str1[count] != '\0') {
	count++;
    }

    return count;
}
int main(void)
{
    const char str1[] = {'H', 'i','\0'};

    printf("Number of character %i", chrlength(str1));

    return 0;
}
