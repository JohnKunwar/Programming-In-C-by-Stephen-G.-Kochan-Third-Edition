// Program to illustrate various printf format
// General rule
// %[flags][width][.prec][hlL]type

#include <stdio.h>

int main(void)
{
    char c = 'X';
    char s[] = "abcdefghijklmnopqrstuvwxyz";
    int i = 425;
    short int j = 17;
    unsigned int  u = 0xf179U;
    long int  l = 75000L;
    long long int L = 0x1234567812345678LL;
    float f = 12.978F;
    double d = -97.4583;
    char *cp = &c;
    int *ip = &i;
    int c1, c2;

    printf("Integers:\n");
    printf("%i %o %x %u\n", i, i, i, i); // int,oct,hex,unsign
    printf("%x %X %#x %#X\n", i, i, i, i); //hex HEX oxhex 0xHEX
    printf("%+i % i %07i %.7i\n", i, i, i, i);//+-,(space), zeros, justify with 0
    printf("%i %o %x %u\n", j, j, j, j);
    printf("%i %o %x %u\n", u, u, u, u);
    printf("%ld %lo %lx %lu\n", l, l, l, l);
    printf("%lld %llo %llx %llu\n", L, L, L, L);

    printf("\nFloats & Doubles:\n");
    printf("%f %e %g\n", f, f, f); //float,exp, formatted
    printf("%.2f %.2e ", f, f); // 2 preciesion and 2 precision with expo
    printf("%.0f %.0e\n", f, f);
    printf("%7.2f %7.2e\n", f, f); // field width of 7 and precision of 2
    printf("%f %e %g\n", d, d, d);
    printf("%.*f\n", 3, d);// .* -> takes next argument as precision
    printf("%*.*f\n", 8, 2, d); // * takes next argument as size of field

    printf("\nCharacters:\n");
    printf("%c\n", c);
    printf("%3c%c\n", c, c); // 3 field width
    printf("%x\n", c);

    printf("\nStrings\n");
    printf("%s\n", s);
    printf("%.5s\n", s); // prints only 5 character
    printf("%30s\n", s);
    printf("%20.5s\n", s);
    printf("%-20.5s\n", s);

    printf("\nPointers:\n");
    printf("%p %p\n\n", ip, cp);

    printf("This %n is fun. %n\n", &c1, &c2); // length
    printf("c1 = %i c2 = %i\n", c1, c2);

    return 0;
}
