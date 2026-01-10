// program to do basic calculations

#include <stdio.h>

int main(void)
{
  float num = 0, temp;
  char op;

  printf("Begin Calculations\n");
  
  do {
    scanf("%f %c", &temp, &op);

    switch (op) {
      case '+':
        num += temp;
        break;

      case '-':
        num -= temp;
        break;

      case '*':
        num *= temp;
        break;

      case '/':
        if (temp == 0)
          printf("Divison by zero\n");
        else
          num /= temp;
        break;

      case 'S':
        num = temp;
        break;

      case 'E':
        break;

      default:
        printf("Syntax error\n");
        break;
    }
    printf("= %f\n", num);
    
  } while ( op != 'E');

  printf("End of Calculations\n");

  return 0;
}
