// Concating program string
// \o is terminating character it is search by %s formatter and it's automatically added to
// character-string constant

#include <stdio.h>

void concat (char result[], const char str1[], const char str2[])
{
    int i, j;
    for (i = 0; str1[i] != '\0'; i++) {
	result[i] = str1[i];
    }

    for (j = 0; str2[j] != '\0'; j++) {
	result[i+j] = str2[j];
    }
    result[i+j] = '\0';
}

int main(void)
{
    const char str1[] = "Test ";
    const char str2[] = "Works.";
    char res[30];
    concat(res,str1,str2);

    printf("%s", res);
    return 0;
}

