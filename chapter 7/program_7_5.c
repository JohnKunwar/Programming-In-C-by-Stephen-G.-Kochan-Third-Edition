// initaliazing array

#include <stdio.h>

int main(void)
{
  int squares[10] = {0, 1, 4, 9, 16};

  for (int i = 5; i < 10; i++)
    squares[i] = i * i;

  for (int i =0; i < 10; i++)
    printf("squares[%i] = %i\n", i, squares[i]);

  return 0;
}
