// program to generate prime number using sieve of Erastosthens

#include <stdio.h>

int main(void)
{

  int i,j, n = 150;
  int p[150] = {0};

  printf("Prime numbers are:\n");
  for (i = 2; i < n; i++) {
    if (p[i] == 0)
      printf("%i\n", i);

    j = 1;
    while( i * j <= n - 1) {
      p[i * j] = 1;
      j++;
    }
    
  }

  return 0;
}
