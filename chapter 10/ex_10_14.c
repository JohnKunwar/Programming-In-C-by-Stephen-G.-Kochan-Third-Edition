// program to pconvert int to string

#include <stdio.h>


void int_to_string(int n, char str[])
{
    int i = 0, count = 0, reverse = 0;
    
    // converts negative to postive assigns - to string update the index
    if ( n < 0)
	{
	    str[i] = '-';
	    i++;
	    n = -n;
	}
    // count  no of digits and reverse the number
    while (n != 0)
	{
	    reverse = reverse * 10 + ( n % 10);
	    n /= 10;
	    count++;
	}

    // put the integer into string
    while (reverse != 0)
	{
	    str[i] = '0' + (reverse % 10);
	    reverse /= 10;
	    i++;
	}
    
    str[i] = '\0';
    
}
int main()
{
    int n = -21234;
    char str[100];

    int_to_string(n, str);
    printf("%s", str);
    
    return 0;
}
