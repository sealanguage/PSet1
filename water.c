#include<stdio.h>
#include<math.h>
#include<cs50.h>


int main(void)
{
    //  prompt and validate user input
    int minutes = get_int("Minutes: ");

    //  calculate equivalent bottles
    printf("Bottles: %i\n", minutes * 12);

    //printf("%i\n", minutes);

}

// Comments:
// Hi Elaine. Your code is very concise, which is really great! My only suggestion is adding to the code the condition that the user cannot input a negative number.
// While testing I noticed that negative numbers can be inputed, which for the task is not nessesary as people cannot have a negative amount of water/bottles.







