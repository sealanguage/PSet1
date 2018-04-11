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
    //int quarter = 25;
    // int dime = 10;
    // int nickle = 5;
    // int pennie = 1;
    //int change = get_int("Change: ");

    do
    {
        // get amount in dollars
        change = get_float("Change owed: ");
        changeOwed = change * 100;
        // returning cents for decimal working so don't change this
        //printf("reading change owed value %.f\n", changeOwed);
    }
        while(change == 0.00);


    while (changeOwed >= 25)   // just accept positive values
        {
            //  while (quarters can be used)
            //  increase count
            coins++;
            //  decrease amount by 25
            changeOwed = changeOwed - 25;
        }
        while (changeOwed >= 10)   // just accept positive values
            {
                //  while (dimes can be used)
                //  increase count
                coins++;
                //  decrease amount by 10
                changeOwed = changeOwed - 10;
            }
            while (changeOwed >= 5)   // just accept positive values
                {
                    //  while (nickles can be used)
                    //  increase count
                    coins++;
                    //  decrease amount by 5
                    changeOwed = changeOwed - 5;
                }
                while (changeOwed >= 1)   // just accept positive values
                {
                    //  while (pennies can be used)
                    //  increase count
                    coins++;
                    //  decrease amount by 1
                    changeOwed = changeOwed - 1;
                }
        printf("%i\n", coins);

}

//  printf("storing variable changeOwed");
//     printf("quarter: ")

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