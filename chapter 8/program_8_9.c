// program to find the minimum value in an array

#include <stdio.h>

int minimum (int values[10])
{
  int min = values[0];

  for (int i = 1; i < 10; i++)
    if ( values[i] < min)
      min = values[i];

  return min;
  
}
int main(void)
{
  int score[10];

  printf("Enter 10 scores\n");
  
  for(int i = 0; i < 10; i++) {
    scanf("%i", &score[i]);
  }

  printf("Minimum value is %i", minimum(score));

  return 0;
}
