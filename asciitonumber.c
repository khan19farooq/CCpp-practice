#include <stdio.h>
#include <stddef.h>

int main ()
{
    char character[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    size_t length = sizeof(character)/ sizeof(character[0]); 
    // Concept: sizeof whole character array divided by size of single character array
    printf("\nlength of character array: %zu\n\n", length);

    printf("ASCII code A-Z:\n");
    for (size_t i = 0; i < length; i++) printf("  %c = %d   \n",character[i],character[i]);
    
    return 0;

}