#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *buffer = malloc(10);

    if (buffer == NULL)
    {
        printf("Error allocating memory!\n"); // If failed to allocate memory return 1
        return 1;
    }

    strcpy(buffer, "subscribe");
   
    buffer = realloc(buffer, strlen(buffer) + 2); 
    // 2 account for the null terminator and the character that we want to append

    if(buffer == NULL)
    {
        printf("Error re-allocating memory!\n"); // If failed to allocate memory return 1
        return 1;
    }

    char character = 'R';

    strncat(buffer, &character, 1);

    printf("%s", buffer);

    free(buffer);// free the dynamically allocated memory

 return 0;   
}

