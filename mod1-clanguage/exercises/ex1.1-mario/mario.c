#include <cs50.h>
#include <stdio.h>

int ask_height(void);
void draw_pyramid(int height);

int main(void)
{
    // ask to the user a positive integer in the range
    // of 1 and 8 and store it in height variable
    int height = ask_height();
    draw_pyramid(height);
}

int ask_height(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    } 
    while (height < 1 || height > 8);
    return height;
}

void draw_pyramid(int h)
{
    for (int i = 1; i <= h; i++)
    {
        // set the number of spaces to print
        int spaces = h - i;

        // print white spaces
        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        // set the number of hashes to print
        int hashes = h - spaces;
        // print hashes
        for (int k = 0; k < hashes; k++)
        {
            printf("#");
        }

        // go to a new line
        printf("\n");
    }
}