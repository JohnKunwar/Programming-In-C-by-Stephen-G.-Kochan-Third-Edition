// Program to read 20 lines of a files

#include <stdio.h>

int main(void)
{
    FILE *f;
    char filename[64], buffer[64];
    int i = 0, flag = 0;
    char ch = 'a';

    printf("Enter the file name: ");
    scanf("%63s", filename);

    if ((f = fopen(filename, "r")) == NULL)
	{
	    printf("couldn't open the file\n");
	    return 1;
	}
    
    while (ch != 'q')
	{
	    i = 0;
	    while (i < 10)
		{
		    if(fgets(buffer, 64, f) == NULL)
			{
			    flag = 1;
			    break;
			}

		    else
			{
			    printf("%s", buffer);
			}
		    i++;
		}

	    if(flag)
		printf("End of file\n");
	    
	    printf("Press any key to contiue and press 'q' to exit: ");
	    scanf(" %c", &ch);
	}
    return 0;
}
