// reverse the number both postive and negative

#include <stdio.h>

int main(void)
{
  int num;

  printf("Enter a number:");
  scanf("%i", &num);

  if (num < 0) {
    num = -num;
    for (;num != 0; num /= 10) {
      printf("%i", num % 10);
    }
    printf("-\n");
  }
  else {
    for (;num != 0; num /= 10) {
      printf("%i", num % 10);
    }
    printf("\n");
  }
  
  return 0;
}
