#include <cs50.h>
#include <stdio.h>

int main(void)
{
    const int N = 3;
    int scores[N];
    for (int i =0; i < N; i++)
    {
        scores[i] = get_int("Score: ");
    }

    printf("Average %f\n", (socres[0] + scores[1] + scores[3]) / (float) N);
}
