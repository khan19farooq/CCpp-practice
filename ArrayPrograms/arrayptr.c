/** Basic program to initialize the array using pointer variable */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;       // create a pointer variable using '*' 
    int size = 5;   // declare the size of the array

    // Dynamically allocate the memory for the array
    ptr = (int *)malloc(size * sizeof(int));
    
    // Check if memory allocation is successful
    if (ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initialize the array elements
    for (int i = 0; i < size; i++)
        ptr[i] = i + 1;

    // Print the array elements
    for (int i = 0; i < size; i++)
        printf("%d ", ptr[i]);
    
    
    // Deallocate the memory
    free(ptr); // This is very important

    return 0;
}