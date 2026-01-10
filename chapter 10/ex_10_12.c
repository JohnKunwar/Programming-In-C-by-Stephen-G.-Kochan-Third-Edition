// Function to convert string to a floating point number

#include <stdio.h>

int power(int a, int b)
{
    int res = a;

    if (b == 0)
	return 1;
    
    for (int i = 1; i < b; i++)
	res = res * a;
    
    return res;
}


float str_to_float(char str[])
{
    float res = 0;
    int i = 0, count = 0;

    // check if negative at the beginning
    if (str[0] == '-')
	i++;
    // check number
    for (; str[i] >= '0' && str[i] <= '9'; i++, count++)
	{
	    res = res * 10 + (str[i] - '0');
	}
    // check decimal
    if (str[i] == '.' && (str[i + 1] >= '0' && str[i + 1] <= '9'))
	{
	    for (i++; str[i] >= '0' && str[i] <= '9'; i++)
		res = res * 10 + (str[i] - '0');

	    // put decmial
	    res = res/ (power(10,count));
	}
    if (str[0] == '-')
	res = -res;
    return res;
}
int main(void)
{
    printf("%g\n", str_to_float("12.3"));
    printf("%g\n", str_to_float("-70.2"));
    printf("%g\n", str_to_float("-0234.2344"));        
}
