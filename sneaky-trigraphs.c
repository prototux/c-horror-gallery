// It isn't fun without -trigraphs anymore...
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int age = 18;

    // Hey, why not be able to drink??/
    age = 21;

    if (age >= 21)
        printf("Yay can drink!\n");
    else
        printf("No $favorite_alcohol for you!\n");

    printf("Wait, what? how you knew?!?\n");
    return EXIT_SUCCESS;
}
