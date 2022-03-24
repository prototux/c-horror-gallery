#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int x;

    srand(&x);

    x = rand();

    printf("%d\n", x);

    return EXIT_SUCCESS;
}
