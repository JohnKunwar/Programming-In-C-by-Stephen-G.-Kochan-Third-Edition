/* Program to read simple expression of the form
   number operator number                        */

#include <stdio.h>

int main(void)
{
  float num1, num2;
  char op;

  printf("Enter your expression: ");
  scanf("%f %c %f", &num1, &op, &num2);

  if (op == '+')
    printf("%.2f\n", num1 + num2);
  else if (op == '-')
    printf("%.2f\n", num1 - num2);
  else if (op == '*')
    printf("%.2f", num1 * num2);
  else if (op == '/')
    if (num2 == 0)
      printf("Divison by 0\n");
    else
    printf("%.2f", num1 / num2);
  else
    printf("Error\n");

  return 0;
}
