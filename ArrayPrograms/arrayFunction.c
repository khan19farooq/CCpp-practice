/* This code contains the functions for arrays */
#include <stdio.h>
#include <stdlib.h>


// Start function declarations
int find_max(int myArray [], int length);
int find_min(int myArray [], int length);

int to_find = 5;
int count_occurences(int myArray [], int length);

void reverse_array(int myArray[], int length);
void sum(int myArray[], int length);
void avg(int myArray[], int length);
int *array_copy(int *array, int length);
// End function declarations
///////////////////////////////////////////////////////////////////////

int main()
{
// Inputs
int myArray [] = { 2, 5, 5, 1, 8, 0 };

                            /********** Call the functions below **********/
//int max = find_max(myArray, 6);
//int min = find_min(myArray, 6);
//int count  = count_occurences(myArray,  6);
//reverse_array(myArray, 6);
//sum(myArray,6);
avg(myArray,6);

/**  Start - Function call to copy the array of elements */
int a1[] = {1, 2, 4, 4, 5};
int *a1_copy = array_copy(a1, 5);
for (int i = 0; i < 5; i++)
    printf("a1_copy[%d] = [%d]\n", i, a1_copy[i]);

/* Output */
//printf("maximum number in myArray = %d\n",max);
//printf("minimum number in myArray = %d\n",min);
//printf("count the number %d in myArray = %d\n",to_find, count);

return 0;
}

                            /*********** Function definitions **********/
// Maximum number in array
int find_max(int myArray [], int length)
{
    int max ;
    max = myArray[0];

    for (int i = 1; i < length; i++)
    {
        if (myArray[i] > max)
        max = myArray[i];
    }

return max;
}

// Minimum number in array
int find_min(int myArray [], int length)
{
    int min;
    min = myArray[0];

    for (int i = 1; i < length; i++)
    {
        if (myArray[i] < min)
        min = myArray[i];
    }

return min;
}

// Count the occurences of a value in a array
int count_occurences(int myArray [], int length)

{
    int count = 0;

    for (int i = 1; i < length; i++)
    {
        if (myArray[i] == to_find)
        count++;
    }
return count;
}

// Reverse the array
void reverse_array(int myArray[], int length)
{
    int temp = 0;
    for (int i = 0; i < length/2 ;i++)
    {
        temp = myArray[i];
        myArray[i] = myArray[length-i-1];
        myArray[length-i-1] = temp;
    }
    printf("Reversed Array = [ ");
    for (int i = 0; i < 6; i++)
        printf("%d ",myArray[i]); 
    printf("] ");
}

// Sum of values in an array
void sum(int myArray[], int length)
{
    int sum = 0;

    for (int i = 0; i < length; i++)
        sum += myArray[i];

    printf("\nSum of values in myArray, [ ");

    for (int i = 0; i < length; i++)
        printf("%d ",myArray[i]);

    printf("] = %d\n\n", sum); 


}

// Average of values in an array
void avg(int myArray[], int length)
{
   float avg = 0;

    for (int i = 0; i < length; i++)
        avg += myArray[i];
    avg = avg/2;
    printf("\nAverage of values in myArray, [ ");

    for (int i = 0; i < length; i++)
        printf("%d ",myArray[i]);

    printf("] = %f\n\n", avg); 
}

// Copy the array elements into another array
int *array_copy(int *array, int length)
{
    int *c = malloc(length * sizeof(int));

    for ( int i = 0; i < length; i++)
        c[i] = array[i];
    
    return c;
}