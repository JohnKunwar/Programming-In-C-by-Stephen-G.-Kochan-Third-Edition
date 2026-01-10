#include <stdio.h>

int main(void) {
  
  int fibbonacci[15];

  fibbonacci[0] = 0;
  fibbonacci[1] = 1;

  for (int i = 2; i < 15; i++)
    fibbonacci[i] = fibbonacci[i-2] + fibbonacci[i-1];

  for (int i = 0; i < 15; i++)
    printf("%i\n", fibbonacci[i]);

  return 0;
  
}
