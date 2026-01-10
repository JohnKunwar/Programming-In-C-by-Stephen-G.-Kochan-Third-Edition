// Furthe example of pointer

#include <stdio.h>

int main(void)
{
    char c = 'J';
    char *char_point = &c;

    printf("%c %c\n", c , *char_point);
    
    c = '/';
    printf("%c %c\n", c , *char_point);

    *char_point = '?';
    printf("%c %c\n", c , *char_point);
    return 0;
}
