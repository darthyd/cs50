#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("define x: ");
    int y = get_int("define y: ");

    printf("the sum between %i and %i is equal to %i\n", x, y, x+y);

    return 0;
}