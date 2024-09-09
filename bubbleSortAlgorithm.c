
/** Bubble Sort Algorithm
 *  Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements 
 *  if they are in the wrong order. This algorithm is not suitable for large data sets as its average and 
 *  worst-case time complexity is quite high.
 */

#include <stdio.h>
#include <stdbool.h>

void bubbleSort(int array[], int length)
{
    bool swapped = false;
    int i = 0;
    do
    {
    swapped = false;
    for (int j = 0; j < (length - 1 - i); j++)
    {
      if (array[j] < array[j + 1])
      {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
        swapped = true;
      }        
    }
    i++;    
    } while (swapped);
}


int main() {

    int array[] = {9,6,1,5,3,8,4,7,2,0};

    int length = (sizeof(array)/sizeof(array[0]));
    printf("\nLength of array: %d\n",length);

    printf("Unsorted array: ");
    for(int i = 0; i < length; i++)
        printf("%d ", array[i]);

    bubbleSort(array, length); //Calling bubble sort function

    printf("\nSorted array:   ");
    for(int i = 0; i < length; i++)
        printf("%d ", array[i]);

    return 0;
}