#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // prompt user for amount in dollars, validate amount, dollars, use get_float
    //convert dollar to cents * 100   round
    float change;
    float changeOwed;
    int coins = 0;
    int quarter = 25;
    // int dime = 10;
    // int nickle = 5;
    // int pennie = 1;
    //int change = get_int("Change: ");

    do
    {
        // get amount in dollars
        change = get_float("Change owed: ");
        changeOwed = change * 100;
        printf("reading change owed value%f0\n", changeOwed);

    }
    while (changeOwed > 0);// just accept positive values
    printf("storing variable %.0f\n", changeOwed);
    printf("quarter: ");

        //  while (quarters can be used)
        for (int i = 0; i > quarter; i++)
            // for (int j = 0; j >= 25; j++)
            {
                 //  increase count
            coins = coins + 1;
            printf("reading quarters%d\n", i);
            //  decrease amount by .25
            changeOwed = (changeOwed - quarter);
            printf("changeOwed: %f\n", changeOwed);

            }




}

//  creating a greedy algorithm, a globally optimized solution
    //  get amount in dollars
    //  while (quarters can be used)
    //     increase count
    //     decrease amount by .25
    // while (dimes can be used)
    //     increase count
    //     decrease amount by .10
    // while (nickles can be used)
    //     increase count
    //     decrease amount by .5
    // while (pennies can be used)
    //     increase count

    // print number of coins used