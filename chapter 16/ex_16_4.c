// Program to merge to file alternatively

#include <stdio.h>

int main(void)
{
    FILE *f1, *f2;
    char f1_name[64], f2_name[64];
    char buffer1[100], buffer2[100];
    
    printf("Enter the first file name: ");
    scanf("%63s", f1_name);

    printf("Enter the second file name: ");
    scanf("%63s", f2_name);

    // opening a file
    if ((f1 = fopen(f1_name, "r")) == NULL)
	{
	    printf("first file couldn't be open\n");
	    return 1;
	}
    if ((f2 = fopen(f2_name, "r")) == NULL)
	{
	    printf("Second file couldn't be open\n");
	    return 2;
	}

    while ((fgets(buffer1, 100, f1) != NULL) && (fgets(buffer2, 100, f2) != NULL))
	{
	    fprintf(stdout, "%s", buffer1);
	    fprintf(stdout ,"%s", buffer2);
	}

    if (buffer1 != NULL)
	{
	    fprintf(stdout, "%s", buffer1);
	    while (( fgets(buffer1, 100, f1) != NULL))
	    fprintf(stdout, "%s", buffer1); */
	}
    else if (buffer2 != NULL)
	{
	    fprintf(stdout, "%s", buffer2);
	    while ((fgets(buffer2, 100, f2) != NULL))
		fprintf(stdout ,"%s", buffer2);
	}

    fclose(f1);
    fclose(f2);
    
    return 0;
}
