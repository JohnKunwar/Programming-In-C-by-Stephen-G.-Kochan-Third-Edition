// Program to illustrate the #include statement. This program assume metric.h exist

#include <stdio.h>
#include "metric.h"

int main(void)
{
    float liters, gallons;

    printf("**********LITER TO GALLON********\n");
    printf("Enter the number of liters: ");
    scanf("%f", &liters);

    gallons = liters * QUARTS_PER_LITER / 4.0;
    printf("%g liters = %g gallons", liters, gallons);
    return 0;
}
