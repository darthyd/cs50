#include <stdio.h>

// Prototype
void meow();

int main(void) {
    // calls a function that prints meow
    // passing an argument to say the number of times
    // that meow will be printed
    meow(3);

    return 0;
}

void meow(int t)
{
    for(int i = 0; i < t; i++)
    {
        printf("meow\n");
    }

}