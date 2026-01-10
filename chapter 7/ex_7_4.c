// program to calculate average of 10 floating point numbers

#include <stdio.h>

int main(void)
{
  float values[10], average, sum = 0;

  for (int i = 0; i < 10; i++) {
    printf("Enter the value of #%i: ", i+1);
    scanf("%f", &values[i]);
  }

  // averaging and summing
  for (int i = 0; i < 10; i++) {
    sum += values[i];
  }
  average = sum / 10;

  printf("\n Average is %g", average);

  return 0;
}
