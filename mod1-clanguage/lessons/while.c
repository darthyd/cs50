#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int counter = 10;

    while(true)
    {
        printf("%i\n", counter);
        counter--;
        if(counter < 0) break;
    }

    return 0;
}