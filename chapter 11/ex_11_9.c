// Rewriting the readline function using pointer

#include <stdio.h>

void readline(char *line)
{
    char c;
    do {
	c = getchar();
	*line = c;
	line++;
    } while (c != '\n');
}

int main(void)
{
    char aline[100];

    readline(aline);

    printf("%s", aline);

    return 0;
}
