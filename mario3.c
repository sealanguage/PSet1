#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //  prompt user for a positive number
    int n;
    do
    {
        n = get_int("Number: ");
    }
    while( n <= 0 );

    //  print out that many bricks
    for (int i = 0; i < n; i++)
    {
        printf("#\n");
    }
}