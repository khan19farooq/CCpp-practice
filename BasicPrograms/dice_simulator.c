// Program to roll a dice and generate random number using time.h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time (NULL)); // random number generator at current time

    int dice = 5;
    int roll = 0;

    for (int i = 0; i <= 6; i++)
    {
        roll = rand() % 6 + 1;
        printf("Dice %d: %d\n", i , roll);
    }

    return 0;
}