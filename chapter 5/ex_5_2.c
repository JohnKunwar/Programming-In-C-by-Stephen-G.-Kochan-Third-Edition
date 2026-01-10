// Program to print n and n^2 ranging from 1 to 10

#include <stdio.h>

int main(void)
{
  printf("Program to print the square of number from 1 to 10\n\n");
  printf("n\tn^2\n");
  printf("---\t------\n");

  for (int i = 1; i <= 10; i++) {
    printf("%2i\t%3i\n", i, i*i);
  }

  return 0;
}
