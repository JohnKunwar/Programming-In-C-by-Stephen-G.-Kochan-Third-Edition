// Program to print out the content of column m through n of each line from the file

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *f;
    char filename[64], line[64];
    int m, n, i, j = 0;

    printf("Enter the name of the file: ");
    scanf("%63s", filename);

    if ((f = fopen(filename, "r")) == NULL)
	{
	    fprintf(stderr, "can't open the file\n");
	    exit(1);
	}

    printf("Enter the column number for the beginning side(count begins from 1): ");
    scanf("%i", &m);
    printf("Enter the column number for the ending side: ");
    scanf("%i", &n);
    
    while ((fgets(line, 64, f)) != NULL)
	{
	    // count the maximum number of character in a line
	    j = 0;
	    while(line[j] != '\0')
		    j++;

	    i = m;
	    while ( i <= j && i <= n)
		{
		    fprintf(stdout, "%c", line[i - 1]);
		    i++;
		}

	    if (line[i - 2] != '\n')
		fprintf(stdout, "\n");
	}
    
    return 0;
}
