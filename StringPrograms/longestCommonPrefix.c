#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* longestCommonPrefix(char** strs, int strsSize) {
     // Edge case: If the array is empty, return an empty string
    if (strsSize == 0) {
        return "";
    }

    char* prefix = strs[0];

    for (int i = 1; i < strsSize; i++) {
        int j = 0;

        // Compare characters of the prefix and the current string
        while (prefix[j] && strs[i][j] && prefix[j] == strs[i][j]) {
            j++;
        }

        // Null terminate the prefix to the common length found
        prefix[j] = '\0';

        // If at any point the prefix becomes empty, return an empty string
        if (j == 0) {
            return "";
        }
    }

    return prefix;
}
int main()  {

    // Define an array of strings (array of character pointers)
    char* strs[] = {"flower", "flow", "flight"};
    
    // Calculate the size of the array
    int strsSize = sizeof(strs) / sizeof(strs[0]);
    
    // Call the longestCommonPrefix function and store the result
    char* result = longestCommonPrefix(strs, strsSize);
    
    // Print the result
    printf("Longest common prefix: %s\n", result);
    
    return 0;
}