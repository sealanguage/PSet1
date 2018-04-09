#include<stdio.h>
#include<cs50.h>

int main(void)
{
    //  prompt user for a number
    int number;
    do
    {
        number = get_int("Number: ");
        if (number == 0)
        {
            return 0;
        }
    }
    //  while it's false, go back to the do loop
    while (number < 1 || number > 23);
    {
        printf("Number works\n");

         //  loop 1 for height n, loop n number of rows
            for (int i = 0; i < number; i++)
            {
                //  loop 2 for each row, print 1 less space each line
                for (int j = 0; j < number - i - 1; j++)
                    {
                        printf("* ");
                        for (int k = 0; k < i + 2; k++)
                        {
                            printf("# ");
                        }
                    }
                printf("after loops\n ");
            }



    }
}