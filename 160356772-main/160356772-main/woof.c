#include <stdio.h>

void meow(int n);
int main(void)

{
    meow(50);
}

void meow(int n)
{
    for (int i =0; i < n; i++)
    {
        printf("meow\n");
    }
}

// BUCLE WHILE
// {
//     int i = 0;
//     while (i < 5)
//     {
//         printf("meow\n");
//         i++;
//     }
// }
