// Program to concatenate the strings

#include <stdio.h>

int main(void)
{
    void concat (char result[], char str1[], int n1, char str2[], int n2);
    
    char str1[5] = {'T', 'e', 's', 't', ' '};
    char str2[6] = {'W', 'o', 'r','k', 's', '.'};

    char result[11];

    concat(result, str1, 5, str2, 6);

    for (int i = 0; i < 11; i++)
	printf("%c", result[i]);

    return 0;
}

void concat (char result[], char str1[], int n1, char str2[], int n2)
{
    int i, j;

    for (i = 0; i < n1; i++) {
	result[i] = str1[i];
	printf("%i\n",i);
    }
    printf("\n%i\n", i);


    for (j = 0; j < n2; j++)
	result[n1 + j] = str2[j];

    
}
    

    
