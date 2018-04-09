#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int n = get_int("Number: ");
    for (int i = 0; i < n; i++)
    {
        //  try to iterate through the row
        if (i < n-1)
        printf("* ");
            else {
                printf("?");
            }

    }
    printf("\n");
}