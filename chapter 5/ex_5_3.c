// Program to print 5th triangular numb.r

#include <stdio.h>

int main(void)
{
  int triangular_number, i;

  printf("Triangular Number of every 5th term\n\n");
  printf("n\t\tTriangular Number\n");
  printf("---\t------------------\n");

  for (i = 5; i <= 50; i += 5) {
    triangular_number = i * (i + 1) / 2;
    printf("%2i\t\t%4i\n", i, triangular_number);
  }

  printf("\n");

  return 0;
    
}
