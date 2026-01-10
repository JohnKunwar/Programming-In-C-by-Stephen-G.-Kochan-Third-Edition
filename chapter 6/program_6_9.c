// program to evaluate expression

#include <stdio.h>

int main(void)
{
  float num1, num2;
  char op;

  printf("Enter your expression:");
  scanf("%f %c %f", &num1, &op, &num2);

  switch (op) {
    case '+':
      printf("%.2f", num1 + num2);
      break;

    case '-':
      printf("%.2f", num1 - num2);
      break;
      
    case '*':
      printf("%.2f", num1 * num2);
      break;
    
    case '/':
      if (num2 == 0)
        printf("Division by 0");
      else
        printf("%.2f", num1 / num2);
      break;

      default:
        printf("Error");
        break;
    
  }

  return 0;
}
