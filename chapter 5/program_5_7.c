/* Program to find greatest comman divisor
   between two non-negative numbers */
#include <stdio.h>

int main(void)
{
  int u, v, temp;

  printf("Enter two non-negative numbers: ");
  scanf("%i%i", &u, &v);

  while (v != 0) {
    temp = u % v;
    u = v;
    v = temp;
  }

  printf("The greatest comman divisor is %i\n", u);

  return 0;
  
}
