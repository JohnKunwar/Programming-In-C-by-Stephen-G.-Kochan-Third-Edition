// Progarm to convert all the uppercase letter to lowercase, from file and copy into another file

#include <stdio.h>

int main(void)
{
    FILE *orginal, *lcopy;
    char orginal_name[64], lcopy_name[64];
    int c;
    int i;

    printf("Enter the name of the file: ");
    scanf("%63s", orginal_name);

    printf("Enter the name of the new file where you want to save: ");
    scanf("%63s", lcopy_name);

    // opening file
    if ((orginal = fopen(orginal_name, "r")) == NULL)
	{
	    fprintf(stderr, "Can't open the file for copy\n");
	    return 1;
	}

    if ((lcopy = fopen(lcopy_name, "w")) == NULL)
	{
	    fprintf(stderr, "Can't open new file for copying\n");
	    return 2;
	}

    // Reading file
    while ((c = getc(orginal)) != EOF)
	{
	    if ((c >= 'a') && (c <= 'z'))
		{
		    i = c - 'a';
		    c = 'A' + i;
		}
	    putc(c, lcopy);
	}

    fclose(orginal);
    fclose(lcopy);
    
    return 0;
}
