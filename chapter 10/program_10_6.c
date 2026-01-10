// Program to read a line

#include <stdio.h>

void readline (char buffer[])
{
    int i = 0;
    
    do {
	buffer[i] = getchar();
	i++;
    } while (buffer[i - 1] != '\n');

    buffer[i-1] = '\0';
}

int main(void)
{
    char aline[81];

    for (int i = 0; i < 3; i++)
	{
	    readline(aline);
	    printf("%s\n", aline);
	}
    
    return 0;
}
