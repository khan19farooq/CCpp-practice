#include <stdio.h>

void rotateArrayRight(int array[], int length, int n);
void rotateArrayRightOnce(int array[], int length);

int main()
{
/*
array before
index 0  1  2  3  4  5 
value 2  3  4  5  6  7

array rotated right
index 0  1  2  3  4  5 
value 7  2  3  4  5  6


*/

int a1[] = {2,3,4,5,6,7};
int length = sizeof(a1)/sizeof(a1[0]);
printf("\nlength of array: %d\n\n",length);
printf("Array before rotating: ");
for (size_t i = 0; i<length; i++)
    printf("%d ",a1[i]);

                                        /** Right rotated arrays */
printf("\n\nRotating array right once: ");

/** Calling the right rotated array function */ 
rotateArrayRight(a1, 6, 1); 

/** This loop prints the rotated array right */
for (size_t i = 0; i < length; i++)//
    printf("%d ",a1[i]);

return 0;
}

/** Function to rotate the array right 'n' times */
void rotateArrayRight(int array[], int length, int n)
{
    for (size_t i = 0; i < n; i++)
        rotateArrayRightOnce(array, length);
}

/** Function to rotate the array right  once */
void rotateArrayRightOnce(int array[], int length)
{
    int temp = array[length - 1];
    for (size_t i = (length - 2); i >= 0; i--)
        array[i + 1] = array[i];
    array[0] = temp;
}

