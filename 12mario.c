#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        //  prompt user for height
        height = get_int("Height: ");
        if (height == 0)
        {
            return 0;
        }
    }
    //  constrain height from 1 - 23
    while (height < 1 || height > 23);
    {
        printf("Height works\n");

        //  loop for height number of rows
        for (int i = 0; i <= height - 1; i++)
        {
            //  loop 2 for each row
            for (int j = 1; j < height - i; j++)
            {
                 printf("* ");  //pr-carina: Hi Elaine. I think this may be a typo, but I notice you have the little star here. Instead of little stars pushing the hashes to the right, it should just be empty spaces.
            }
                // loop 3 to complete printing the hashes
                for (int k = 0; k < i + 1; k++)
                {
                    printf("# ");
                }

            printf("#\n");
        }

    }

// Comments:
//pr-carina: Hi Elaine. I think this may be a typo, but I notice you have the little star here. Instead of little stars pushing the hashes to the right, it should just be empty spaces.
//Otherwise, your code looks concise. Nice use of comments. Everything makes sense. Your code looks spaced correctly.
}