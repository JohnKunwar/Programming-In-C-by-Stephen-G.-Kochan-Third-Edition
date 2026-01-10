// program to find sum of array

#include <stdio.h>


int array_sum (int *array, int upto)
{
    int  *array_end = array + upto;
    
    int sum  = 0;
    for (; array < array_end; array++)
	sum += *array;

    return sum;
}
int main(void)
{
    int values[10] = { 3, 7, -9, 3, 6, -1, 7, 9, 1, -5 };

    printf("Array sum is %i", array_sum(values, 10));
    
    return 0;
}
