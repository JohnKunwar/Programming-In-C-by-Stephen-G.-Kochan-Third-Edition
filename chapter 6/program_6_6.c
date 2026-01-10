// program to implement sign function

#include <stdio.h>

int main(void)
{
  int num, sign;

  printf("Enter a number: ");
  scanf("%i", &num);

  if (num < 0)
    sign = -1;
  else if (num > 0)
    sign = 1;
  else
    sign = 0;

  printf("Sign = %i\n", sign);

  return 0;
  
}
