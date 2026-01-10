#include <stdio.h>

int main(void)
{
  float num1, num2;

  printf("Enter any two number: ");
  scanf("%f %f", &num1, &num2);
  
  if ( num2 == 0)
    printf("Divison by zero\n");
  else
    {
      printf("%.2f", num1 / num2);
    }

  return 0;
}
