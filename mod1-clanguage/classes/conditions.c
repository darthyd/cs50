#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // ask for the use values for x and y
    int x = get_int("x: ");
    int y = get_int("y: ");

    //check if x is greater than y and print the result
    if (x > y) printf("x is greater than y\n");
    else if (x < y) printf("x is less than y\n");
    else printf("x is equal to y\n");

    return 0;

}