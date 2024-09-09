#include <stdio.h>

void rotateArrayLeft(int a[], int length, int n);
void rotateArrayLeftOnce(int a[], int length);

int main()
{
/*
                    array before
                    index 0  1  2  3  4  5 
                    value 2  3  4  5  6  7

array rotated left             array rotated right
index 0  1  2  3  4  5         index 0  1  2  3  4  5 
value 3  4  5  6  7  2         value 7  2  3  4  5  6


*/

int arr1[] = {2,3,4,5,6,7};
int length = sizeof(arr1)/sizeof(arr1[0]);

printf("\nlength of array: %d\n\n",length);
printf("Array before rotating: ");

for (size_t i = 0; i<length; i++)
    printf("%d ",arr1[i]);

printf("\n\nRotating array left once: ");

/** Calling the left rotated array function */ 
rotateArrayLeft(arr1, 6, 2); 

/** This loop prints the rotated array left */
for (size_t i = 0; i < length; i++)//
    printf("%d ",arr1[i]);

return 0;
}



/** Functions to rotate the array left once */
void rotateArrayLeftOnce(int a[], int length)
{
int temp = a[0];
for (size_t i = 0; i < (length); i++)
    a[i] = a[i+1];
a[length - 1] = temp;
}

/** Function to rotate the array left 'n' times */
void rotateArrayLeft(int a[], int length, int n)
{
    for (size_t i = 0; i < n; i++)
        rotateArrayLeftOnce(a,length);
}
