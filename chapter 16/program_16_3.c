#include <stdio.h>

int main(void)
{
    char input[64], output[64];
    int c;
    FILE *in, *out;


    printf("Enter the name of the file to copy: ");
    scanf("%63s", input);

    printf("Enter the name of the output file: ");
    scanf("%63s", output);

    if ((in = fopen(input, "r")) == NULL)
	{
	    printf("Unable to open the file\n");
	    return 1;
	}
    if ((out = fopen(output, "w")) == NULL)
	{
	    printf("Unable to open out file\n");
	    return 2;
	}

    while((c = getc(in)) != EOF)
	{
	    putc(c, out);
	}

    printf("File has been copied successfully\n");
    fclose(in);
    fclose(out);
    

    return 0;
}
