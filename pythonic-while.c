// Pythonic, or idiotic?
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int x = 10;

    while (x --> 0) // Hey, easy loops!
        printf("%d\n", x);

    x = 10;

    while (0 <-- x) // it even works the other way!
        printf("%d\n", x);

    x = 10;

    while (x --\
                \
                 \
                  > 0) // It even slides!
        printf("%d\n", x);

    return EXIT_SUCCESS;
}
