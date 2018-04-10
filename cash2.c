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
        change = get_float("Change owed: ");
        changeOwed = change * 100;
    }
    while (change > 0);     // just accept positive values
    //printf("storing variable %.0f\n", changeOwed);

// always use largest coin possible, how many coins can be returned

        //store the remainder n plus store the increment c
        //while (quarters can be used)

        while(changeOwed >= quarter)

            {
            //   increase coin count
                (coins++);
                printf("adding a coin");
            //     decrease amount by .25

                //printf("subtracting 25 from changeOwed", changeOwed);
                changeOwed -= quarter;
                //printf("storing value of coins %f\n", n);

            }

    //while (n > .25);
//


// keep track of coins used
    //    printf("I have %f coins\n", n);

//  print final number of coins
//  printf()


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