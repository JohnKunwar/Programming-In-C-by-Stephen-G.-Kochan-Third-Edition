// Program to calculate lcm between two numbers using formula u * v / gcd (u,v) where u,v >= 0

#include <stdio.h>

int abso (int x)
{
    if (x < 0)
	x = -x;
    return x;
}
int gcd ( int x, int y)
{
    int temp;

    while (y != 0) {
	temp = x % y;
	x = y;
	y = temp;
    }

    return x;
}

int lcm(int u, int v)
{
    u = abso(u);
    v = abso(v);
    
    return (u * v) / gcd(u,v);
}

int main(void)
{
    int u, v;
    printf("Enter two numbers : ");
    scanf("%i %i", &u, &v);

    printf("Lcm between %i and %i is %i", u, v, lcm(u,v));
    
    return 0;
}
