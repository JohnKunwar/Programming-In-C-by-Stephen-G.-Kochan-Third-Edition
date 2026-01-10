// Program to calculate the absolute value of a number
#include <stdio.h>

int main(void)
{
  int n;
  
  printf("Enter a number: ");
  scanf("%i", &n);

  if (n < 0)
    n = -n;

  printf("Absolute value is %i\n", n);

  return 0;
}
