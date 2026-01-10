// program to calculate factorial using recursive function

#include <stdio.h>

int facto(int n)
{
  if ( n == 0)
    return 1;
  else
    return n * facto(n -1);
}

int main(void)
{
  int n;
  
  printf("Enter the nth number: ");
  scanf("%i", &n);
    
  printf("%i", facto(n));
}
