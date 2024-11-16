#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
    int left = 0;
    int right = numbersSize - 1;
    *returnSize = 2; // The result array will always contain 2 elements

    while (left < right) {
        int sum = numbers[left] + numbers[right];

        if (sum == target) {
            // Allocate memory for result array
            int* result = (int*)malloc(2 * sizeof(int));
            result[0] = left + 1;
            result[1] = right + 1;
            return result;
            
        } else if (sum < target) {
            left++; // Increase the sum by moving the left pointer to right
        } else {
            right--; // Increase the sum by moving the right pointer to left
        }
    }

    return NULL;
}

int main () 
{
    int numbers[] = {2, 7, 11, 15};

    int target = 9;
    int returnSize;
    
    int* result = twoSum(numbers, 4, target, &returnSize);

    printf("Indices: [%d, %d]\n", result[0], result[1]);

    free(result);   // Free allocated memory

    return 0;   
}