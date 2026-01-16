// requires the redirection like ./a.out < text.txt

#include <stdio.h>

int main(void)
{
    char c;
    while ((c = getchar()) != EOF)
	putchar(c);
    
    return 0;
}
