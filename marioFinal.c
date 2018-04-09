#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //  prompt user for a positive number
    int n;
    do
    {
        eprintf("about to prompt user for a number\n");
        n = get_int("Height: ");
    }
    while (n <= 0);

    //  print out this many rows
    for (int i = 0; i < n; i++)
    {
         if (i < n-1)
        printf(" ");
            else {
                printf("?");
            }


        // print out this many columns
        for (int j = 0; j < n; j++)
        {
            //  count columns, print spaces -1, complete with #, iterate -1 space each subsequent row

               //  try to iterate through the row
        if (j < n);

        (int k = 0; k < n; k--)

        printf("?");
            else {
                printf("#");
            }
        }
        printf("\n");
    }
}