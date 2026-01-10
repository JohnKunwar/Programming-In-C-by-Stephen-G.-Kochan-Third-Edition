// Usage of typedef to the pointer to the function

#include <stdio.h>


int nothing(void)
{
    printf("test\n");
    return 0;
}

int main(void)
{
    // in typedef the variable name becomes its type
    typedef int (*function_pointer) (void);
    function_pointer s1;
    s1 = nothing;
    s1();
    return 0;
}
