// program to calculate fibonacchi series between 1 and 75

#include <stdio.h>

int main(void) {
  int numfibs;

  printf("How many fibonacchi numbers do you want (between 1 and 75):");
  scanf("%i", &numfibs);

  if (numfibs < 1 || numfibs > 75) {
    printf("Bad number, sorry \n");
    return 1;
    
  }

  unsigned long long int fibonacci[numfibs];

  fibonacci[0] = 0;
  fibonacci[1] = 1;

  for (int i = 2; i < numfibs; i++)
    fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];

  for(int i = 0; i < numfibs; i++)
    printf("%llu ", fibonacci[i]);

  printf("\n");

  return 0;
}
