#include <stdio.h>
#include <stdlib.h>

char* readInput() {
    char *buffer = (char*)malloc(100);
    if (buffer == NULL) {
        return NULL; // Memory allocation failed
    }
    printf("Enter input: ");
    fgets(buffer, 100, stdin);
    return buffer;
}

int main() {
    char *input = readInput();
    if (input != NULL) {
        printf("You entered: %s", input);
        free(input);
    } else {
        printf("Failed to allocate memory.\n");
    }

    return 0;
}
