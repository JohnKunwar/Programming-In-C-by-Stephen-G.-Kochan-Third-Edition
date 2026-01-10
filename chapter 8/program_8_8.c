// progra to calculate the square root of given number using Newton-Rapson method

#include <stdio.h>

// function to find absolute value of a given number
double absolute(double x)
{
  if (x < 0)
    x = -x;

  return x;
}

// function to calculate square root of a number

double sqroot(double x, const double eps)
{
  double guess = 1.0;
  while (absolute((guess * guess)/x  - 1) >= eps) {
    guess = (x/guess + guess) / 2.0;
    printf("%f ", guess);
  }
  printf("\n");

  return guess;
}

int main(void)
{
  printf("Square root of 4 = %f\n", sqroot(4.0, .01));
  printf("Square root of 144 = %f\n", sqroot(144.0, .001));
  printf("Square root of 17.5 = %f\n", sqroot(17.5, .0001));
       
  return 0;
}

// 


