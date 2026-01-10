// program to generate the table of triangular number from 1 to n
#include <stdio.h>

int main(void)
{
  int n, triangular_number;

  triangular_number = 0;

  printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
  printf ("n      Sum from 1 to n\n");
  printf ("---    ----------------\n");
  n = 1;
  while (n <= 100)
    {
      triangular_number += n;
      printf ("%-3i        %i\n", n, triangular_number);
      n++;
    }

  return 0;
}

