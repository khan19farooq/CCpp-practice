#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char *string;

    string = malloc(5);

    strcpy(string, "abcd");     
    printf("%s\n",string);

    string = realloc(string, 6);

    string[5] = '\0';           
    printf("%s\n",string);

    free(string);               
    printf("%s\n",string);

    return 0;

}