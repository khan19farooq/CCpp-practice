/** Insertion Sort Algorithm -  */

#include <stdio.h>

void insertionSort(int array[], int length)
{
    for (int i = 1; i < length; i++)
    {
        int key = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > key)
        {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

int main()
{
    int array[] = {8, 1, 3, 4, 2, 5, 7, 6};
    int length = sizeof(array)/sizeof(array[0]);
    
    insertionSort(array, length);
    
    for(int i = 0; i < length; i++)
        printf("%d, ",array[i]);
    
    
    return 0;
}
