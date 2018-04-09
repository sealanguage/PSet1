#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // prompt user for amount in dollars, validate amount, dollars, use get_float
    //convert dollar to cents * 100   round
    float n;
    int coins = 0;
    int change = get_int("Change: ");

    do
    {
        n = get_float("Change owed: ");
        n = n * .01;
    }
    while (n < 0);     // just accept positive values
    printf("storing variable ", n);

// always use largest coin possible, how many coins can be returned
    do
    {
        //store the remainder n plus store the increment c
        for (n = .25; n >= .25; n++)
        {
            //  while (quarters can be used)
                //     increase count
                //coins = n++;
                printf("storing value of coins %f\n", );
                //     decrease amount by .25
                //n - .25
        }
    }
    while (n > .25);
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