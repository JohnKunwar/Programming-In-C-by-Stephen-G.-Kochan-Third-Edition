#include <stdio.h>

int main(void)
{
  int facto;
  
  printf("Factorial of number from 1 to 10\n\n");
  printf("n\t\tn!\n");
  printf("--\t\t-----\n");

  for (int i = 1; i <= 10; i++) {
    facto = 1;
    
    for (int j = 1; j <= i; j++) {
      facto *= j;
    }

    printf("%2i\t\t%8i\n", i, facto);
  }

  printf("\n");

  return 0;
}
