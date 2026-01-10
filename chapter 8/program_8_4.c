// program to calculate the triangular number using function

#include <stdio.h>

int calculateTriangularNumber(int n)
{
  int  tri_number = 0;
  for (int i = 1; i <= n; i++)
    tri_number += i;

  return tri_number;
}

int main(void) {
  printf("%i\n", calculateTriangularNumber(10));
  printf("%i\n", calculateTriangularNumber(20));
  printf("%i\n", calculateTriangularNumber(50));

  return 0;
}
