#include <stdio.h>

int findMissingNumber(int array [], int size)
{
    int expectedSum = 10 * (10 + 1)/2; // sum of n natural numbers n(n + 1)/2

    int actualSum = 0;

    for (int i = 0; i < size; i++)
        actualSum += array[i];
    
    return expectedSum - actualSum;
}

int main()
{
    int array1[] = {2, 3, 4, 5, 6, 7, 8, 9, 10};

    int size = sizeof(array1)/sizeof(array1[0]);

    int missingNumber = findMissingNumber(array1, size);

    printf("\nThe missing number is: %d\n\n", missingNumber);

    return 0;

}

