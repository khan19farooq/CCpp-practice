/** Remove the duplicates in the array and return the new array without duplicates */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int *removeDuplicates(int array[], int length, int *new_length);

int main() {

    int test [] = {1, 1, 1, 2, 2, 3};

    int after_length = 0;

    int *after = removeDuplicates(test, 10, &after_length);

    for (int i = 0; i < after_length; i++)
        printf("after[%d] = %d\n",i,after[i]);

    free(after);

    return 0;
}

int *removeDuplicates(int array[], int length, int *new_length) {

    int *new_array = malloc(length * sizeof(int));
    int unique_count = 0;

    for(int i = 0; i < length; i++) 
    {
        bool is_unique = true;
        for (int j = 0; j < unique_count; j++)
            if (new_array[j] == array[i])
            {
                is_unique = false;
                break;
            }
        
        if(is_unique)
        {
            new_array[unique_count] = array[i];
            unique_count++;
        }
    }

    if(unique_count != length)
        new_array = realloc(new_array, unique_count * sizeof(int));
    
    *new_length = unique_count;

    return new_array;

}