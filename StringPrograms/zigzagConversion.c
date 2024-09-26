#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* convert(char* s, int numRows) {
    if (numRows == 1) return s;

    int len = strlen(s);
    char* result = malloc((len + 1) * sizeof(char));  // Allocate space for the result
    if (!result) return NULL;  // Handle memory allocation failure
    result[0] = '\0';  // Initialize the result string

    int cycleLen = 2 * numRows - 1;
    int idx = 0;

    // Process each row
    for (int row = 0; row < numRows; ++row) {
        for (int i = row; i < len; i += cycleLen) {
            result[idx++] = s[i];  // Add character in the current row

            // Add the character in the diagonal position, except for the first and last row
            int diag = i + cycleLen - 2 * row;
            if (row != 0 && row != numRows - 1 && diag < len) {
                result[idx++] = s[diag];
            }
        }
    }

    result[idx] = '\0';  // Null-terminate the result string
    return result;
}

int main() {
    char s[] = "PAYPALISHIRING";
    int numRows = 3;

    char* result = convert(s, numRows);
    printf("Converted string: %s\n", result);

    free(result);  // Free the allocated memory
    return 0;
}
