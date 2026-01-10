// Program to display two number is divisible by 2

#include <stdio.h>

int main(void)
{
  int num1, num2;
  
  printf("Enter any two numbers: ");
  scanf("%i %i", &num1, &num2);
  
  if (num2 == 0)
    printf("Divison by 0");
  else if (num1 % num2 == 0)
    printf ("%i is divisible by %i\n", num1, num2);
  else
    printf("%i is not divisible by %i\n", num1, num2);

  return 0;
  
}
