// Program to generate fibbonacchi series not using array

#include <stdio.h>

int main(void)
{
  int a = 0, b = 1, c;

  for(int i = 1; i < 15;i++) {
    printf("%i\n", b);
    c = a + b;
    a = b;
    b = c;
    
  }
}
