#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    // prompt user for a pos integer
    do
    {
        n = get_int("Size: ");
    }
    while(n < 1);

    // print n-by-n grid of bricks
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}
