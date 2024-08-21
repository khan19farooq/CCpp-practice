#include <stdio.h>

int nonRepeating(int a[], int length);

int main()
{
    int array[] = {1, 2, 3, 4, 3, 2, 7, 7, 9};
    int length = sizeof(array)/sizeof(array[0]);
    printf("\n length of array: %d \n", length);

    int count = nonRepeating(array, length);
    printf("\n count = %d \n\n",count);

    return 0;
}

int nonRepeating(int a[], int length)
{
    int i = 0, j = 0, count = 0;
    
    for (i = 0; i < length; i++)
    {
        for (j = 0; j < length; j++)
            if (a[i] == a[j] && i != j) break;
        
        if (j == length) count++;
    }

    return count;
}