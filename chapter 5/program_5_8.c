// Program to reverse the digit of numbers

#include <stdio.h>

int main(void)
{
  int n, reverse;

  printf("Enter a number to be reversed: ");
  scanf("%i", &n);

  while (n != 0) {
    reverse = n % 10;
    printf("%i", reverse);
    n /= 10;
  }

  printf("\n");

  return 0;
}
