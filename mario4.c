#include <cs50.h>
#include <stdio.h>


// mario4 creates height number of rows with height number of hashes per row
int main(void)
{
    //  prompt user for a positive number
    int height;
    do
    {
        eprintf("about to prompt user for a number\n");
        height = get_int("Height: ");
    }
    while (height <= 0);
    //while (height >= 1 || height <= 23);

    //  print out this many rowa
    for (int i = 0; i < height; i++)
    {
        // print out this many columns
        for (int j = 0; j < height; j++)
        {


            printf("#");
        }
        printf("\n");
    }
}