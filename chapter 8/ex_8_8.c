// program to finpd solution of quadratic equation (Imaginary value not supported)

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
  }


  return guess;
}

// function to find solution of quadratic equation
void solution(int a, int b, int c)
{
    double
	x1, x2,
	determinant = (b*b) - 4 * a * c;

    if (determinant < 0) {
	printf("Imaginary Roots\n");
	return;
    }

    x1 =  - (b + sqroot(determinant, 0.00001)) / (2 * a);
    x2 =  - (b - sqroot(determinant, 0.00001)) / (2 * a);

    printf("Roots are: %g  %g", x1, x2);
	
}

int main(void)
{
    int a, b, c;
    printf("Enter the co-efficients of a, b and c below\n ::");
    scanf("%i %i %i", &a, &b, &c);

    solution(a, b, c);
    return 0;
}
