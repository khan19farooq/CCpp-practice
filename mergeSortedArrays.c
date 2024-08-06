#include <stdio.h>

int main()
{
    int array1 [] = {1, 3, 5, 7,  9};
    int array2 [] = {2, 4, 6, 8, 10};
    int length1 = sizeof(array1)/sizeof(array1[0]);
    int length2 = sizeof(array1)/sizeof(array1[0]);
    int mergedArray [length1 + length2];

    int i = 0, j = 0, k = 0;

     while (i < length1 && j < length2) {
        if (array1[i] < array2[j]) {
            mergedArray[k++] = array1[i++];
        } else {
            mergedArray[k++] = array2[j++];
        }
    }
    printf("\ni = %d, j = %d, k = %d\n\n",i, j, k);

    // Copy remaining elements of array1, if any
    while (i < length1) {
        mergedArray[k++] = array1[i++];
    }

    // Copy remaining elements of array2, if any
    while (j < length2) {
        mergedArray[k++] = array2[j++];
    }

    // Print merged array
    printf("Merged array: ");
    for (i = 0; i < length1 + length2; i++) {
        printf("%d ", mergedArray[i]);
    }
    printf("\n\n");


    return 0;
}