#include <cs50.h>
#include <stdio.h>

//  now mario6 creates height rows of height number of hashes
int main(void)
{
    //  prompt user for a positive number
    int height;
    do
    {
        eprintf("about to prompt user for a number\n");  //
        height = get_int("Height: ");
    }
    while (height >= 1 || height <= 23);

    //  print out this many rows
    for (int i = 0; i < height; i++)
    {
        // print out this many items per row
        for (int j = 0; j < height+1; j++)
        {
            //  make this a loop that prints 2 less spaces than height
            // and iterates one less space each subsequent row
            printf()
            //do





            //  or (n=10;n>=1;n--)
    //          if (k = 0; k >= height; k--)
    //             printf("* ");
    //         else
    //         {
    //           printf("?");
    //       }

    //   }

            // for (int k = height; k < height-2; k--)
            // {
            //     printf("*");
                //printf("#");

            //}
        }
        printf("\n");
    }
}



// int n=10;

// do

// {

// printf ("\t %d",n);

// n--;

// } while (n>=1);

