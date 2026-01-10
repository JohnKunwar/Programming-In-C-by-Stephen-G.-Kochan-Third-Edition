// Program to get sub_string

#include <stdio.h>

void get_sub_string(const char source[], int start, int count, char res[])
{
    int i = 0;

    while ( i < count && source[count + i] != '\0') {
	res[i] = source[i + start];
	i++;
    }

    res[i] = '\0';
}

int main(void)
{
    const char source[] = "character";
    char res[100];

    get_sub_string(source, 4, 3, res);
    printf("%s", res);
    return 0;
}
