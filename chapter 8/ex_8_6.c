// Program to raise the value of x to power n

#include <stdio.h>

long int power(int x, int n)
{

    
    if (x == 0)
	return 0;
    for (int i = 0; i < n - 1; i++)
	x *= x;
    
    return x;
}

int main(void)
{
    int x, n;

    printf("Enter the number: ");
    scanf("%i", &x);
    printf("Enter the power: ");
    scanf("%i", &n);

    printf("%li\n", power(x,n));
    
    return 0;
}

