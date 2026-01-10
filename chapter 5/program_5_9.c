// program to reverse the digits of number using do statements

#include <stdio.h>

int main(void)
{
  int n, reverse;

  printf("Enter a number to reverse: ");
  scanf("%i", &n);

  do {
    reverse = n % 10;
    n /= 10;
    printf("%i", reverse);
    
  } while (n != 0);

  printf("\n");

  return 0;
}
 
