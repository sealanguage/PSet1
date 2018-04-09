#include <cs50.h>
#include <stdio.h>


int main(void)
{
    // prompt user for a number
     int number = get_int("Number: ");


        {
            //  loop 1 for height n, loop n number of rows
            for (int i = 0; i < number + 1; i++)
            {
                //  loop 2 for each row, print 1 less space each line

                    {
                        for (int j = 0; j < i + 1; j++)
                            //  loop 3 print rest of spaces as #
                            if (i < number + 2)
                            {
                                printf("* ");
                            }

                            else

                            {
                                printf("# ");
                            }

                    }

                printf("\n");
            }
        }

}
    //while (number > 0);
