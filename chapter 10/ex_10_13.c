// program to convert small letter to big letter

#include <stdio.h>

void upper_case (char str[])
{
    for ( int i = 0; str[i] != '\0'; i++)
	{
	    if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = 'A' - 'a' + str[i];
	}
}
int main(void)
{
    char str[] = "what the is going on I am typing as Fast as i can lol";
    upper_case(str);
    
    printf("%s", str);
    
}
