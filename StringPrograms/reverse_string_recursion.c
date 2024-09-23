/** Reverse a string using recursion method */

#include <stdio.h>

void print_reverse(char* s)
{
    if (*s != '\0')
    {
        print_reverse(s + 1);
        printf("%c", *s);
    }
}

int main ()
{
    char s[] = "This is the way!";

    printf("\n");

    print_reverse(s);

    printf("\n\n");
    
    return 0;
}