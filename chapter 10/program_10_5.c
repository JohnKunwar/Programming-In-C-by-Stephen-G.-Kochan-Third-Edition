// Program to illustrate the %s scanf format character

#include <stdio.h>

int main(void)
{
    char s1[100], s2[100], s3[100];

    printf("Enter text:\n");
    scanf("%s%s%s", s1, s2, s3);

    printf("\ns1 = %s\ns2 = %s\ns3 = %s", s1, s2, s3);
    return 0;
}
