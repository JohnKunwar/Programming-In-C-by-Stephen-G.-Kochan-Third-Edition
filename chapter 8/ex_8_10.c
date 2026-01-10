// Program to check whether the number is prime or not

#include <stdio.h>

int checkPrime(int n)
{
    if ( n <= 0)
	return 0;
	
    for (int i = 2; i < n/2 + 1; i++) {
	if ( n % i == 0) {
	    return 0;
	}
    }

    return 1;
}

int main(void)
{
    int a;

    printf("Enter a number:");
    scanf("%i", &a);

    if (checkPrime(a))
	printf("Given number is prime.\n");
    else
	printf("Given number is not prime.\n");

    return 0;
}
