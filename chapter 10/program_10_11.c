// function to convert string to an integer

#include <stdio.h>

int strToInt(const char str[])
{
    int res = 0;

    for(int i = 0; str[i] >= '0' && str[i] <= '9'; i++)
	res = res * 10 + (str[i] - '0');
    
    return res;
}
int main(void)
{
    printf ("%i\n", strToInt("245"));
    printf ("%i\n", strToInt("100") + 25);
    printf ("%i\n", strToInt("13x5"));
    return 0;
}

