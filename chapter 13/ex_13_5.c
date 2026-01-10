// Macro to shift the bits left or write 

#include <stdio.h>

#define SHIFT(val, n) ((n) < 0 ? (val >> (-n)) : (val << n))

/* Reference
unsigned int shift (unsigned int value, int n)
{
    if ( n < 0)
	{
	    value >>= (-n);
	}
    else
	value <<= n;

    return value;
    
}

*/
int main(void)
{
    unsigned int w1 = 0177777u, w2 = 0444u;

    printf ("%o\t%o\n", SHIFT (w1, 5), w1 << 5);
    printf ("%o\t%o\n", SHIFT (w1, -6), w1 >> 6);
    printf ("%o\t%o\n", SHIFT (w2, 0), w2 >> 0);
    printf ("%o\n", SHIFT (SHIFT (w1, -3), 3));
    
    return 0;
}
