#include <stdio.h>

int main (void)
{
  int n, triangular_number, number;

  printf ("What triangular number do you want? ");
  scanf  ("%i", &number);

  triangular_number = 0;
  n = 1;
  while ( n <= number ) {
    triangular_number += n;
    n++;
  }

  printf ("Triangular number of %i is %i\n", number, triangular_number);

  return 0;
  
}
