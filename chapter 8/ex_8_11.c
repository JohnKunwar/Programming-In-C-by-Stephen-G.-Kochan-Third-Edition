// program for a function to take an array and calculate it's sum array sum basically

#include <stdio.h>

int arraySum(int arr[], int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
	sum += arr[i];

    return sum;
}

int main(void)
{
    int n;
    printf("Enter the no of elements: ");
    scanf("%i", &n);

    int arr[n];

    printf("Enter the values one-by-one:\n");
    for (int i = 0; i < n;i++)
	scanf("%i", &arr[i]);

    printf("Sum of all elements is: %i", arraySum(arr, n));
}
