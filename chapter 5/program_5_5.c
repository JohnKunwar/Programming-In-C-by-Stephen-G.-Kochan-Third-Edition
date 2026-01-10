// Program to find 5 triangular numbers
#include <stdio.h>

int calculateTriangularNumber(int n)
{
  int  tri_number = 0;
  for (int i = 1; i <= n; i++)
    tri_number += i;

  return tri_number;
}

int main (void)
{
  int number, triangular_number, counter, n, no_queries;

  printf("How many triangular number do you want to ask? ");
  scanf("%i", &no_queries);
  counter = 0;
  
  while (counter < no_queries)
    {
      printf ("What Triangular number do you want? ");
      scanf  ("%i", &number);

      triangular_number = calculateTriangularNumber(number);
     

      printf ("Triangular number of %i is %i\n\n", number, triangular_number);
      counter++;
    }

  return 0;
}
