#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // ask for the use values for x and y
    int x = get_int("x: ");
    int y = get_int("y: ");

    // divide x by y
    float z = (float) x / (float) y;

    // prints z value on the screen
    printf("%f\n", z);

    return 0;
}