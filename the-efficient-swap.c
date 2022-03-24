// The worst is that it *is* efficient
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int a = 3, b = 5;

    printf("a is %d and b is %d\n", a, b);

    a ^= b;
    b ^= a;
    a ^= b;

    printf("a is %d and b is %d\n", a, b);

    a=a+b-(b=a); // Maybe one-liners are what you like?

    printf("a is %d and b is %d\n", a, b);

    return EXIT_SUCCESS;
}
