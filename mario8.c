// get x rows with x characters, increments vertically rather than horizontally
#include <cs50.h>
#include <stdio.h>


int main(void)
{
    int n = get_int("Number: ");
    //  loop 1 for height n, loop n number of rows
    for (int i = 0; i < n+1; i++)
    {
        //  loop 2 for each row, print 1 less space each line
        {
            for (int j = 0; j < i+1; j++)
            //  loop 3 print rest of spaces as #
            if (i < n + 2)
            {
                printf("* ");
            }
            else
            {
               printf("? ");
            }

            }
        printf("\n");
    }

}
