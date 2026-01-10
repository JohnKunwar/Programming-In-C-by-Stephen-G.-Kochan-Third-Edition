// program to generate prime number version 2

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  int prime[50], prime_index = 2;
  bool isPrime;

  prime[0] = 2;
  prime[1] = 3;

  for (int p = 5; p <= 50; p = p + 2) {
    isPrime = true;

    for (int i = 1; isPrime && p / prime[i] >= prime[i]; i++) {
      if (p % prime[i] == 0) {
        isPrime = false;
        
      }
        
    }
    if (isPrime == true) {
      prime[prime_index] = p;
      prime_index++;
    }
  }

  for (int i = 0; i < prime_index; i++)
    printf("%i ", prime[i]);

  printf("\n");

  return 0;
}
