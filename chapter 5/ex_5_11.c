#include <stdio.h>

int main(void)
{
  int n, sum = 0;
  
  printf("Enter a number to find the sum of digit: ");
  scanf("%i", &n);

  while (n != 0) {
    sum += n % 10;
    n /= 10;
  }

  printf("\nSum of the digit of the number is: %i\n", sum);

  return 0;
}
