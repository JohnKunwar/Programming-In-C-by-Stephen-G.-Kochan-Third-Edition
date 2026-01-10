// Program to sort three integers using function

#include <stdio.h>

void swap (int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void sort3(int *great, int *mid, int *low)
{
    // sorting the greatest
    if(*mid > *great && *mid > *low)
	swap(great, mid);
    else if( *low > *great && *low > *mid)
	swap(great, low);

    // sorting the lowest
    if (*mid < *low)
	swap(low, mid);

    // mid is automatically sorted
}
int main(void)
{
    int greatest, medium, lowest;
    printf("Enter three different numbers: ");
    scanf("%i %i %i", &greatest, &medium, &lowest);

    sort3(&greatest, &medium, &lowest);

    printf("Sorted value = %i %i %i", lowest, medium, greatest);
    return 0;
}
