// program to find sum of array

#include <stdio.h>


int array_sum (int array[], int upto)
{
    int *array_pt;
    int sum  = 0;
    for (array_pt = array; array_pt < (array + upto); array_pt++)
	sum += *array_pt;

    return sum;
}
int main(void)
{
    int values[10] = { 3, 7, -9, 3, 6, -1, 7, 9, 1, -5 };

    printf("Array sum is %i", array_sum(values, 10));
    
    return 0;
}
