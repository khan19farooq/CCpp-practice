/** This XOR feature - C program to find odd occuring elements in an array*/
#include <stdio.h>

int findOdd(int arr[], int n)
{
    int result = 0;
    for (int i = 0; i < n; i++)
        result  ^= arr[i];
    
    return result;
}

int main ()
{
    int arr[] = {12, 12, 14, 90, 14, 14, 14};
    int n = sizeof(arr) / sizeof (arr[0]);
    printf("The Odd occuring element is %d", findOdd(arr, n));

    return 0;
}