#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Missing command-line argument\n");
        return 1; // si esta mal
    }
    printf("Hello, %s\n", argv[1]);
    return 0; // si todo esta bien
}
