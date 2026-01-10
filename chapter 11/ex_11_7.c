// sorting algorithm using pointers

#include <stdio.h>


void sort (int *arr, int size)
{
    int tmp, *j, *end = arr + size;

    for (; arr < end - 1; arr++)
	for ( j = arr + 1; j < end; j++ )
	    {
		if (*arr > *j)
		    {
			tmp = *arr;
			*arr = *j;
			*j = tmp;
		    }
	    }
}

int main(void)
{
    int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
	44, -3, -9, 12, 17, 22, 6, 11 };


    int i;
    printf ("The array before the sort:\n");
    for ( i = 0; i < 16; ++i )
	printf ("%i ", array[i]);
    
    sort (array, 16);
    
    printf ("\n\nThe array after the sort:\n");
    for ( i = 0; i < 16; ++i )
	printf ("%i ", array[i]);
    printf ("\n");
    return 0;

}
